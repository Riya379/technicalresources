3..#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int n;
        
        cin >> n;
        bool isPrime = true;
        int j;
        for(int j = 2; j <= n / 2; j++) {
            if(n % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout << "prime" << endl;
        else cout << "not prime" << endl;
    }
    return 0;
