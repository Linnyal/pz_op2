#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Введите " << n << " чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {    
        for (int j = 0; j < n - 1 - i; j++) { 
            if (arr[j] > arr[j + 1]) {        
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный массив:\n";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}