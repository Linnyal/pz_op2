#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n, k;
    cout << "Введите размер массива N: ";
    cin >> n;
    cout << "Введите целевое число K: ";
    cin >> k;

    vector<int> arr(n);
    cout << "Введите " << n << " чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> seen;
    bool found = false;

    for (int i = 0; i < n; i++) {
        int need = k - arr[i]; 

        if (seen.count(need)) { 
            cout << "Найдена пара: индексы " 
                 << seen[need] << " и " << i 
                 << " (значения: " << arr[seen[need]] 
                 << " и " << arr[i] << ")" << endl;
            found = true;
            break;
        }

        seen[arr[i]] = i; 
    }

    if (!found) {
        cout << "Пары с суммой " << k << " не найдено" << endl;
    }

    return 0;
}