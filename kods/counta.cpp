//
// Created by tomasswin on 09.12.2025.
//
#include <string>
#include <iostream>
using namespace std;
int main(){
    string s = "Kad skolēni sabojā git projektu: \"Nu ko… laiks jaunam klonam.";
    int res = 0;
    for(char ch : s){
        if (ch == 'a'){
            res++;
        }
    }
    cout << res;
}