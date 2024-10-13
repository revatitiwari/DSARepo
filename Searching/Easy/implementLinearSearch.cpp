// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int target) {
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
};

int main() {
    int n=5;
    int arr[5] = {1,2,3,4,5};
    cout << linearSearch(arr, n, 3);
    cout << linearSearch(arr, n, 90);

    return 0;
}