#include <iostream>
#include <vector>
using namespace std;

int countSteps(int num) {
    int steps = 0;
    while (num % 2 == 0) {
        num /= 2;
        steps++; 
    } 
    
    return steps;
}

int reduceArray(vector<int> arr) {
    int totalSteps = 0; // corrected variable name to 'totalSteps'
   
    for (int num : arr) {
        int steps = countSteps(num);  
        if(steps > totalSteps) { 
            totalSteps = steps;
        }
    }
    return totalSteps;
}

int main() {
    vector<int> arr = {2, 4, 8, 16}; // 4; 
    vector<int> arr2 = {6, 5, 1, 2}; // 2; 
    vector<int> arr3 = {2, 3, 24}; //3; 
    vector<int> arr4 = {1,9,5,3}; //0; 
    
    cout << reduceArray(arr) << endl;
    cout << reduceArray(arr2) << endl;
    cout << reduceArray(arr3) << endl;
    cout << reduceArray(arr4) << endl;
  
    return 0;
}
