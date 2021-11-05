#include "ContentSectionFormatter.h"
#include "ReadContext.h"
#include "WriteContext.h"
#include "FormattedReader.h"
#include "FormattedWriter.h"
#include "ItemDescriptionInternals.h"
#include "TeaFileDescription.h"

namespace teatime {

void ContentSectionFormatter::Read(ReadContext *rc)
{
  auto r = rc->Reader();
  string s = r->ReadText();
  rc->Description()->Content(s);
}

void ContentSectionFormatter::Write(WriteContext *wc)
{
  auto w = wc->Writer();
  string s = wc->Description()->Content();
  if(s.length() == 0) return;
  w->WriteText(s);
}

} // namespace teatime
