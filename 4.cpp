#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    //калькулятор имт
    double ves;
    double rost;
    std::cout << "Введите ваш вес в кг ";
    std::cin >> ves;

    std::cout << "Введите ваш рост в м ";
    std::cin >> rost;

    double rostm = rost /100;

    double imt = ves/(rostm * rostm);
    std :: printf("Ваш ИМТ = %.1f\n", imt);
    return 0;
}
