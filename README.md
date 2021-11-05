# TeaFiles
TeaFiles (updated for CMake)

* __About__
  * This repository is version of C++ TeaFiiles from </br>
    * http://discretelogics.com/teafiles/ </br>
  * This is the git for the original source code   
    * https://github.com/discretelogics/TeaFiles.Cpp-Time-Series-Storage-in-Files </br>
  * updates to work using cmake </br>
  * puts all of the code into a single directory </br>
  * requires boost to build

* __To build__ </br>
```
   mkdir build
   cd build
   cmake ..
   make
```

* creates library (archive) libteaf.a
* creates test exe

* __3rd Party Libraries__

  * __boost__ </br>
  ```
    # bulding and installing boost
    # latest release as of 2/19/2020
    wget https://dl.bintray.com/boostorg/release/1.72.0/source/boost_1_72_0.tar.gz
    tar -xzf boost_1_72_0.tar.gz
    cd boost_1_72_0
    ./bootstrap.sh     # build boost build engine
    ./b2               # complies boost 
    sudo ./b2 install  # /usr/local/lib and /usr/local/include
   ```


