# How to reproduce misc-include-cleaner issue

Tested with clang-tidy-21

- Create build folder : `mkdir build && cd build`
- Create compilation database : `cmake ..`
- Go back to test folder : `cd ..`
- Run clang tidy : 
    - `clang-tidy-21 -p=build -header-filter=.* main.cpp`
    - `clang-tidy-21 -p=build -header-filter=.* B.hpp`