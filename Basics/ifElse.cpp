//WAP to print a congratulatory message if score of student is greater than 70. Student will input the score.

#include <bits/stdc++.h>

using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;
    
    if(score>70){
        cout << "Congratulations!!" << endl;
        cout << "Partyyyyyyyy!!" << endl;
    }
    
}

// WAP to validate student’s score. Score should be in between 0 to 100. Print errors in other cases.

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;
    
    if(score<0 || score>100){
        cout << "Invalid Score" << endl;
    }
    
}

// WAP to print Gold Medal if student has scored a perfect 100

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;
    
    if(score==100){
        cout << "Gold Medal" << endl;
    }
    
    cout << "Updated score = " << score << endl;
    
}

