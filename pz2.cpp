#include <iostream>
using namespace std;

int display (int count, char sym_to_count)
    {
        for(int i; i < count; i++)
        {
            cout << sym_to_count;
        }
        return 0;
    }

int main()
{
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    int a[5] = {1,12,3,7,5};
    int b['Q'] = {1,2,3,4,5};
    int c[5] = {1,2,3,4,5};
    //int result = display(5, 's');
    int min = 10000;
    //int max = 0;
    int result [5] = {};
    int indexmin;
    for(int k =0; k<5; k++)
    {
        for (int i = 0; i < 5; i++)
        {
         if(a[i] < min)
            {
                min = a[i];
                indexmin = i;
            }
        }
        result[k] = min;
        a[indexmin] = 100000;
        min = 10000;
    }   

    for (int i = 0; i < 5; i++)
    {
        cout << result[i] << " , ";
    }

    return 0;
}
