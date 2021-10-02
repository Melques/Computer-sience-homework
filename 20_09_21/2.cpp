#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int d, m, ans, k = 1;
    while (1) {
        cout << "Введите номер месяца: ";
        cin >> m;
        if (m > 0 && m < 13) break;
        cout << "//Введённые данные некортектны" << endl;
    }
    while (1) {
        cout << "Введите день: ";
        cin >> d;
        if (d > 0 && d < 32) {
            if (m == 2 && d <= 28) break;
            if (m < 8 && m != 2) {
                if (m % 2 == 0 && d <= 30) break;
                if (m % 2 == 1 && d <= 31) break;
            }
            if (m >= 8) {
                if (m % 2 == 1 && d <= 30) break;
                if (m % 2 == 1 && d <= 31) break;
            }
        }
        cout << "//Введённые данные некортектны" << endl;
    }
    
    
    cout << "Дней для нового года: " << 365 + (m > 2) * 2 - (m < 9) * (31 * (m / 2) + 30 * ((m - 1) / 2)) - (m > 8) * (31 * ((m + 1) / 2)  + 30 * ((m - 2) / 2)) - d;
}
