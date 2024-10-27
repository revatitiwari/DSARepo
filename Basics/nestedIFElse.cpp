//WAP to find maximum of 3 distinct numbers using nested If-Else.

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 100, b = 30, c = 200;
    
    if(a>b){
        // a vs c
        if(a>c)
            cout << "A is the greatest" << endl;
        else
            cout << "C is the greatest" << endl;
    }
    else{
        // b>a
        // b vs c
        if(b>c)
            cout << "B is the greatest" << endl;
        else
            cout << "C is the greatest" << endl;
    }
}