
#include <iostream>
using namespace std;

void replaceCharacter(char ch[100], int n)
{
    int index = 0;
    
    while (ch[index] != '\0') {
       if(ch[index] == '@') {
           ch[index] = ' ';
       }
       index++;
    }
    
}

int main() {
    
    char ch[100];

    cin.getline(ch, 100);
    
    cout << "the input is: " << ch << endl;
    replaceCharacter(ch, 100);
    cout << "After replacing the character : " << ch;
    return 0;
}