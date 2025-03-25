#include <iostream>
#include <limits>

int main() {
    if (std::numeric_limits<char>::is_signed) {
        std::cout << "char is signed" << std::endl;
    } else {
        std::cout << "char is unsigned" << std::endl;
    }
    return 0;
}