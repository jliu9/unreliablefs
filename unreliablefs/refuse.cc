#include "refuse.h"
#include <iostream>

#include <vector>
#include <map>


class A {
public:
    int a;
};

int TestCompiler(int i) {
    std::cout << i << std::endl;
    return 0;
}

void What() {
    std::vector<int> vec{1,2,3,4};
    std::map<int, int> hi;
    for(auto i: vec) {
        hi.emplace(i, i*3);
    }
    for(auto [i, j]: hi) {
        std::cout << i << std::endl;
    }
}