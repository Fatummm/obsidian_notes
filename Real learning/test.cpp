#include <iostream>

int sum(int a, int b = 5) {
    return a + b;
}

int main() {
    std::cout << sum(1);
}