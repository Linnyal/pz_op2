#include <iostream>
using namespace std;
int main()
{
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    //задание 1
    int n;
    int num;
    std::cout << "Введите число, которое хотите возвести в стпень: ";
    std::cin >> num;

    std::cout << "Введите стпень: ";
    std::cin >> n;

    double result = 1.0;

    if (n >= 0)
    {
    for(int i = 0; i < n; i++)
    {
        result = result*num;
    }
    }
    else 
    {
        for(int i = 0; i < -n; i++)
    {
        result = result*num;
    }
    result = 1.0/result;
    }  
    std::cout << "Число " << num << " в степени " << n << " = " << result;
    return 0;
}
