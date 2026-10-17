#include <iostream>
using namespace std;
int main()
{
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    int sum = 0;

    cout << "Введите правую границу диапазона n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Ошибка: число должно быть не меньше 0. Введите другие данные." << endl;
        return 0;
    }

    int i = 0;
    while (i <= n)
    {
        if (i % 5 == 0)
            sum += i;
        i++;
    }

    cout << "Сумма = " << sum << endl;

    return 0;
}
