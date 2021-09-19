#include <iostream>

void ex2_3() {
    std::cout << "Hello, world!\n";
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u  << std::endl;
    std::cout << u - i  << std::endl;
}

void ex2_8() {
    std::cout << 2 << "\115\012";
    std::cout << 2 << "\t\115\012";
}



int main(int, char**) {
    // ex2_3();
    ex2_8();
    
}
