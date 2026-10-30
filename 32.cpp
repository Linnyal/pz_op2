#include <iostream>
#include <stdexcept> 
using namespace std;

double calculate(double a, double b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0) {
                throw runtime_error("Деление на ноль!");
            }
            return a / b;
        default:
            throw invalid_argument("Неверная операция!");
    }
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    double a, b;
    char op;
    
    cout << "=== Калькулятор ===" << endl;
    cout << "Введите первое число: ";
    cin >> a;
    
    cout << "Введите операцию (+, -, *, /): ";
    cin >> op;
    
    cout << "Введите второе число: ";
    cin >> b;
    
    try {
        double result = calculate(a, b, op);
        cout << "Результат: " << a << " " << op << " " << b 
             << " = " << result << endl;
    } catch (const exception& e) {
        cout << "Ошибка: " << e.what() << endl;
    }
    
    return 0;
}