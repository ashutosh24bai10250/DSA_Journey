#include <iostream>

using namespace std;

void display_arr(int a[], int len) {
    for(int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int arr[] = {35, 3, 2, 56, 8, 34, 7, 89, 63};
    int len = sizeof(arr) / sizeof(arr[0]);
    display_arr(arr, len);
    return 0;
}