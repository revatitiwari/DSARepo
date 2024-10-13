// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits.h>
using namespace std;

int findMinimum(int arr[], int n) {
    int min= INT_MAX;
    for(int i=0; i<n; i++) {
        if (min < arr[i]) {
            min = arr[i];
        }
    }
    return min;
};

int main() {

    int n=5;
    int arr[5] = {1,2,30,4,5};
    int ans = findMinimum(arr, n);
    cout << ans;
    return 0;
}