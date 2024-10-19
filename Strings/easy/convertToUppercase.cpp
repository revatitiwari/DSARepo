
#include <iostream>
#include <limits.h>
#include <array>
using namespace std;

// function to convert string to Uppercase
void convertToUppercase(char ch[100], int n)
{
    int index = 0;
    while (ch[index] != '\0') {
        if(ch[index] >= 'a' && ch[index] <= 'z') {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

int main() {
    char ch[100];

    cin.getline(ch, 100);
    cout << "the input is: " << ch << endl;
    convertToUppercase(ch, 100);

    cout << "After Converting to Uppercase : " << ch;

    return 0;
}