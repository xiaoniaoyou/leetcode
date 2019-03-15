#include <iostream>

using namespace std;


//! Print the string in reverse order.
void printReverse(const char *str) {
    if (!*str) return;
    printReverse(str+1);
    putchar(*str);
}





int main() {
    std::cout << "Hello, World!" << std::endl;
    const char *test = "hello world!";
    printReverse(test);
    return 0;
}