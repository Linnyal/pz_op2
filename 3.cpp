#include <iostream>
#include <string>
using namespace std;
//вырезать определенные символы из строки
int main(){

std::setlocale(LC_ALL, "ru_RU.UTF-8");

string text;
string cross = "";
int k;
int m;

cout << "Введите текст: ";
getline(cin, text);

if (text == "") {
    cout << "Ошибка: текст не может быть пустым!" << endl;
    return 1;
}

cout << "Введите цифру, с которой начнется срез текста: ";
cin >> k;

if (cin.fail() || k < 1) {
    cout << "Ошибка: нужно ввести положительное число!" << endl;
    return 1;
}

if (k > text.size()) {
    cout << "Ошибка: такой позиции нет в тексте!" << endl;
    return 1;
}

cout << "Буква: " << text[k - 1] << endl;

cout << "Введите цифру, на которой закончится срез текста: ";
cin >> m;

if (cin.fail() || m < 1) {
    cout << "Ошибка: нужно ввести положительное число!" << endl;
    return 1;
}

if (m > text.size()) {
    cout << "Ошибка: такой позиции нет в тексте!" << endl;
    return 1;
}

if (k > m) {
    cout << "Ошибка: начало среза не может быть больше конца!" << endl;
    return 1;
}

while (k <= m){
    cross +=  text[k - 1];
    k ++;
}
cout << "Итоговый срез: " << cross << endl;
    return 0;
}