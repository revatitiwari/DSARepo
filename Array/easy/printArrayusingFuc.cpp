#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<< arr[i]<< " ";
    }
};

int main() {
    int n=5;
    int arr[5] = {1,2,3,4,5};
    printArray(arr, n);

    return 0;
}