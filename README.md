# How to reproduce misc-include-cleaner issue

Tested with clang-tidy-21

## Without dev container

> [!NOTE]
> You need to have clang++-21 available in your path 

- Create build folder : `mkdir build && cd build`
- Create compilation database : `cmake ..`
- Go back to test folder : `cd ..`
- Run clang tidy : 
    - `clang-tidy-21 -p=build A.cpp`

## With devcontainer

- Run clang tidy in container : 
    - `clang-tidy-21 -p=build A.cpp`
