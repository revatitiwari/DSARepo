#include <iostream>
using namespace std;

//function to find string length

int findLength(char ch[100], int n)
{
    int index = 0;
    
    while (ch[index] != '\0') {
        index++;
    }
    return index;
}

int main() {
    
    char ch[100];

    cin.getline(ch, 100);
    
    cout << "the input is: " << ch << endl;
    int len = findLength(ch, 100);
    cout << "After Converting to Uppercase : " << len;
    return 0;
}