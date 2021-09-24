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

void ex2_14() {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
}

void ex2_18() {
    int a = 0, b = 1;
    int *p1 = &a, *p2 = &b;

    // 改变指针的值
    p1 = &b;
    // 改变指针所指对象的值
    *p2 = 2;
    std::cout << *p1 << ' ' << *p2 << std::endl;
}

int main(int, char**) {
    // ex2_3();
    // ex2_8();
    // ex2_14();
    ex2_18();
}
