// WAP to provide messages to students based on their grades.
#include <bits/stdc++.h>

using namespace std;

int main() {
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    
    switch(grade){
        case 10:
            cout << "Outstanding" << endl;
            break;
        case 9:
            cout << "Excellent" << endl;
            break;
        case 8:
            cout << "Good" << endl;
            break;
        case 7:
            cout << "Average" << endl;
            break;
        default:
            cout << "Failed" << endl;
    }
}