#include <iostream>
#include <vector>
using namespace std;

void sortZeroesAndOne(vector<int> &arr, int n) {
    int count1 = 0;
    int count0 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        }
        if (arr[i] == 1) {
            count1++;
        }
    }

    int i = 0;
    for (; i < count0; i++) {
        arr[i] = 0;
    }
    for (; i < n; i++) {
        arr[i] = 1;
    }
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    arr.resize(n); // Resize the vector to hold 'n' elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sortZeroesAndOne(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print with a space
    }
    cout << endl; // Print newline at the end
    return 0;
}
