#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int matrix[10][10] = {
        {15, 12, 10, 14, 18, 20, 22, 19, 17, 16},
        {13,  8,  9, 11, 15, 17, 21, 18, 14, 13},
        {11,  7,  5,  6, 10, 14, 19, 16, 12, 11},
        {14,  9,  4,  3,  8, 12, 17, 15, 11, 10},
        {16, 11,  6,  2,  7, 11, 15, 13,  9,  8},
        {18, 13,  8,  5,  9, 13, 16, 14, 10,  9},
        {20, 15, 10,  7, 11, 14, 18, 16, 12, 11},
        {19, 14,  9,  6, 10, 13, 17, 15, 11, 10},
        {17, 12,  8,  5,  9, 12, 16, 14, 10,  9},
        {16, 11,  7,  4,  8, 11, 15, 13,  9,  8}
    };

    cout << "Карта высот 10x10:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d", matrix[i][j]);
        }
        cout << endl;
    }
    cout << endl;

    int dx[] = {-1, -1, -1,  0,  0,  1,  1,  1};
    int dy[] = {-1,  0,  1, -1,  1, -1,  0,  1};

    cout << "Локальные минимумы:\n";
    int count = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            bool isMinimum = true;

            for (int k = 0; k < 8; k++) {
                int ni = i + dx[k];  
                int nj = j + dy[k];  

                if (ni >= 0 && ni < 10 && nj >= 0 && nj < 10) {
                    if (matrix[ni][nj] <= matrix[i][j]) {
                        isMinimum = false;
                        break; 
                    }
                }
            }

            if (isMinimum) {
                cout << "  [" << i << "][" << j << "] = " 
                     << matrix[i][j] << endl;
                count++;
            }
        }
    }

    cout << "\nВсего локальных минимумов: " << count << endl;

    return 0;
}