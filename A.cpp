#include "A.hpp"

A::A() {
    // Report warning in clangd but not with clang-tidy
    myThread = std::thread([] {});
    // Reports warning: no header providing "std::vector" is directly included [misc-include-cleaner]
    myVector = std::vector<int>();
}
