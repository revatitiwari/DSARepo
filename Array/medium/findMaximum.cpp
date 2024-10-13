// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits.h>
using namespace std;

int findMaximum(int arr[], int n) {
    int max= INT_MIN;
    for(int i=0; i<n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
};

int main() {

    int n=5;
    int arr[5] = {1,2,30,4,5};
    int ans = findMaximum(arr, n);
    cout << ans;
    return 0;
}