# LayZar
A library for generating optimised laser paths from vector graphics aimed at embedded devices.

## Compiling and, Testing
```bash
# Enter a build folder
mkdir -p build

# Compile
cmake ..
cmake --build . -j

# Run tests with
ctest -V
```

## Targets
This targets ESP32 and, Unix systems.

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

