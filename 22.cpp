#include <iostream>
#include <vector>
#include <algorithm>
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

    sort(arr.begin(), arr.end());

    cout << "Отсортированный массив: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    int target;
    cout << "Введите число для поиска: ";
    cin >> target;

    int left = 0;
    int right = n - 1;
    int foundIndex = -1; 

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == target) {
            foundIndex = mid;
            break; 
        }
        else if (arr[mid] < target) {
            left = mid + 1;  
        }
        else {
            right = mid - 1; 
        }
    }

    if (foundIndex != -1) {
        cout << "Число " << target << " найдено на индексе " << foundIndex << endl;
    } else {
        cout << "Число " << target << " не найдено" << endl;
    }

    return 0;
}