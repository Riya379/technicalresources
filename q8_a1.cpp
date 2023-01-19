.#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    //write your code here
    k = k % (int)(log10(n) + 1);
    // rotating to the left if k is negative
    if (k < 0) k = (int)(log10(n) + 1) + k;

    for (int i = 0; i < k; i++) {
        int last_digit = n % 10;
        n /= 10;
        n += last_digit * pow(10, (int)(log10(n) + 1));
    }

    std::cout << "The rotated number is: " << n << std::endl;

    return 0;
}
