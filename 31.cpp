#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    int max = a; 
    
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    return max;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int a, b, c;
    cout << "Введите три числа:\n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    
    int result = maxOfThree(a, b, c);
    cout << "Максимальное число: " << result << endl;
    
    return 0;
}