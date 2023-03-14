#include"Sort.cpp"

using namespace sortlib;


int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortlib::bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
