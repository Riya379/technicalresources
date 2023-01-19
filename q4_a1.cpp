bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int low, high;
    std::cout << "Enter lower limit: ";
    std::cin >> low;
    std::cout << "Enter upper limit: ";
    std::cin >> high;

    std::cout << "Prime numbers between " << low << " and " << high << " are: " << std::endl;
    for (int i = low; i <= high; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    return 0;
}
