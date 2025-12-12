include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 7, -2, 10, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(n==0){
        cout<<"Массив пуст" <<endl
            return 1;
    }

    int mn = arr[0];
    int mx = arr[0];
    int sum = 0;

    / main loop
    for (int i = 0; i < n; i++) {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
        sum += arr[i];
    }

    double avg = static_cast<double>(sum) / n;

    cout << "min = " << mn << endl;
    cout << "max = " << mx << endl;
    cout << "avg = " << avg << endl;

    return 0;
}
