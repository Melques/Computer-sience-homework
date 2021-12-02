
#include <iostream>
using namespace std;

void fill(char stroka[], int i, int &pt) {
    char c;
    cin.get(c);
    while (c != '\n') {
        stroka[i] = c;
        if (stroka[i] == '.') pt = i;
        cin.get(c);
        i++;
    }
}
void read(char st[], int& size) {
    char c;
    cin.get(c);
    while (c != '\n') {
        st[size] = c;
        cin.get(c);
        size++;
    }
}
void edit_and_print(char stroka[], int pt, char st[], int size) {
    for (int j = 0; j < pt; j++) cout << stroka[j];
    for (int j = 0; j < size; j++) cout << st[j];
}

int main()
{
    setlocale(LC_ALL, "rus");
    char stroka[12343] = " ";
    char st[12345] = " ";
    int i = 0, pt = 0, size = 0;
    cout << "Введите название файла: ";
    fill(stroka, i, pt);
    cout << "Введите новое расширение (с точкой): ";
    read(st, size);
    edit_and_print(stroka, pt, st, size);
}

