#include <iostream>
using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int prev2 = 0; 
    int prev1 = 1; 
    int current;
    
    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return current;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int n;
    cout << "Введите номер числа Фибоначчи (n): ";
    cin >> n;
    
    if (n < 0) {
        cout << "Ошибка: n должно быть неотрицательным!" << endl;
        return 1;
    }
    
    int result = fibonacci(n);
    cout << "F(" << n << ") = " << result << endl;
    
    cout << "\nПервые 10 чисел Фибоначчи: ";
    for (int i = 0; i < 10; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    
    return 0;
}