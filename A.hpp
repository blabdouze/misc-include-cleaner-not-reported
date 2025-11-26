#pragma once

#include <thread>
#include <vector>

class A {
    public:
        A();
    private:
        std::vector<int> myVector;
        std::thread myThread;
};
