#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    //обработка строки 
    string str;
    cout << "Введите строку ";
    getline(cin, str);
    
    int letters = 0;
    int numbers = 0;
    int spaces = 0;
    int puncts = 0;
    int symbols = 0;

    for (char c : str) {
        if (isalpha(c))       letters++;
        else if (isdigit(c))  numbers++;
        else if (isspace(c))  spaces++;
        else {
            switch (c) {
                case '%': case '?': case '*':
                case '@': case '#': case '&':
                case '$': case '+': case '=':
                case '/': case '|': case '^':
                case '_': case '<': case '>':
                    symbols++;
                    break;
                default:
                    puncts++;
                    break;
            }
        }
    }

    cout << "Букв: "             << letters << endl;
    cout << "Цифр: "             << numbers  << endl;
    cout << "Пробелов: "         << spaces  << endl;
    cout << "Знаков препинания: " << puncts << endl;
    cout << "Символов: "          << symbols << endl;

    return 0;
}
