#include <iostream>
#include <cstdio>
using namespace std;
string word(int n){
    if (n <= 9){
        if(n == 1){
            return "one";
        }
        else if (n == 2) {
        return "two";
        }
        else if (n == 3) {
        return "three";
        }
        else if (n == 4) {
        return "four";
        }
        else if (n == 5) {
        return "five";
        }
        else if (n == 6) {
        return "six";
        }
        else if (n == 7) {
        return "seven";
        }
        else if (n == 8) {
        return "eight";
        }
        else if (n == 9) {
        return "nine";
        }
    }
    else{
        if (n%2 == 0){
            return "even";
        }
        else{
            return "odd";
        }
    }
    return "";
}
int main() {
    // Complete the code.
    int a, b;
    string s;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        s = word(i);
        cout << s <<endl;
    }
    return 0;
    
}
