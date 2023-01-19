6.#include <iostream>
#include <stack>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::stack<int> digits;
    while (n > 0) {
        digits.push(n % 10);
        n /= 10;
    }

    std::cout << "The digits of the number in reverse order are: " << std::endl;
    while (!digits.empty()) {
        std::cout << digits.top() << std::endl;
        digits.pop();
    }

    return 0;
}
