5.#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int count;
    while(n>0){
        count++;
        n=n/10;
    }
        
    cout<<count<<endl;
    return 0;
}
