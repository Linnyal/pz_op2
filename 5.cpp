#include <iostream>
#include <windows.h>
#include <bitset>
#include <string>
using namespace std;

int main(){

SetConsoleOutputCP(CP_UTF8);

int num, st;

cout << "Введите число, которое нужно перевести: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Можно вводить только положительные числа!" << endl;
        return 0;
    }

cout << "Выберите систему счисления: 2, 8, 16: ";
cin >> st;
if (st == 16){
    cout << "Итоговое число: " << hex << num << endl;
}
else if (st == 8){
    cout << "Итоговое число: " << oct << num << endl;
}
else if (st == 2){
    string s = "";
    while (num > 0){
        s = to_string(num % 2) + s;
        num /= 2;
    }
    cout << "Итоговое число: " << s << endl;
}
else {
    cout << "Неверная система счисления";
}
    return 0;
}
