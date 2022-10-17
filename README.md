# LayZar
A library for generating optimised laser paths from vector graphics aimed at embedded devices
that use the Arduino framework, i.e: the ESP32.

## Building
### Set ESP IDF Up
Setup [ESP IDF](https://docs.espressif.com/projects/esp-idf/en/release-v3.3/get-started-cmake/index.html),
as CMake uses this.

### Install requirements
 1. cmake
 2. git
 3. python
 3. build-essential ?

### Compiling and Testing
Uncomment the component added for the test code

```bash
# idf.py menuconfig
idf.py build

# Flash the device
# See https://docs.espressif.com/projects/esp-idf/en/release-v3.3/get-started-cmake/establish-serial-connection.html
idf.py -p PORT flash monitor # To flash the test code and, monitor output
```

## Usage
 1. Submodule this project in your git repo.
 2. Add the module in your CMakeLists.txt
```cmake
add_subdirectory(LayZar)
target_link_libraries(YOUR_PROJECT_NAME PRIVATE LayZar)
```
 3. In your c++ code
```c++
#include <LayZar/layzar.h> 
// LayZar (first bit), will change if you have a different submodule name
```
 4. Read the docs

