//
// Created by tomasswin on 09.12.2025.
//
#include <iostream>
using namespace std;
int main(){
    long long fib[100];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < 100; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i = 99; i >= 0; i--){
        cout << fib[i] << ' ';
    }
    return 0;
}