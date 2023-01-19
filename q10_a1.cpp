0.#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime factorization of " << n << ": ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0 && isPrime(i)) {
            cout << i << " ";
            n = n / i;
        }
    }
    cout<<endl;
    return 0;
}
