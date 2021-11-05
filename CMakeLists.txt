cmake_minimum_required( VERSION 3.10.2 )

# TeaFiles
project( tee )

# default build convention
if( NOT CMAKE_BUILD_TYPE )
  set( CMAKE_BUILD_TYPE Release )
endif()

# gcc compiler flags
if( CMAKE_COMPILER_IS_GNUCXX)
  add_compile_options( -ggdb -Wall -Wextra -Werror -mavx2 -std=c++17 -m64 )
#  set( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pthread")
endif()


# use root directory as include directory
set( CMAKE_INCLUDE_CURRENT_DIR ON )
#include_directories("/opt/intel/mkl/include" "/usr/local/include/hdf5" )
#link_directories( "/opt/intel/lib/intel64" "/opt/intel/mkl/lib/intel64" )
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

set( TF_SRC
  tf/ContentSectionFormatter.cpp;
  tf/Exceptions.cpp;
  tf/Field.cpp;
  tf/FieldType.cpp;
  tf/FileIO.cpp;
  tf/FormattedReader.cpp;
  tf/FormattedWriter.cpp;
  tf/HeaderManager.cpp;
  tf/IO.cpp;
  tf/ItemDescription.cpp;
  tf/ItemSectionFormatter.cpp;
  tf/MemoryAccess.cpp;
  tf/NameValue.cpp;
  tf/NameValueSectionFormatter.cpp;
  tf/ReadContext.cpp;
  tf/Streams.cpp;
  tf/TeaFileCore.cpp;
  tf/TeaFileDescription.cpp;
  tf/TextUtils.cpp;
  tf/Time.cpp;
  tf/TimeScale.cpp;
  tf/TimeSectionFormatter.cpp;
  tf/WinUtils.cpp;
  tf/WriteContext.cpp
  )


# ecbase archive lib
add_library( teaf STATIC ${TF_SRC} )

add_executable(CreateTicks ex/CreateTicks.cpp )
target_link_libraries(CreateTicks teaf )

add_executable(Analyze ex/Analyze.cpp )
target_link_libraries(Analyze teaf )


