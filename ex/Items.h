#ifndef EXAMPLES_ITEMS
#define EXAMPLES_ITEMS

#include <tf/Description.h>
#include <tf/IO.h>
#include <tf/Time.h>

namespace teatime {

struct Tick
{    
  teatime::Time Time;
  double Price;
  int Volume;
};

}

using teatime::Tick;

ostream& operator<<(ostream& os, const Tick& v)
{
  return os << v.Time << " " << v.Price << " " << v.Volume;
}

#endif // EXAMPLES_ITEMS
