
#include <iostream>
using namespace std;

void frstname(char stroka[], int &i ) {
    char c;
    cin.get(c);
    while (c != ' '){
        stroka[i] = c;
        cin.get(c);
        i++;
    }
}
void frstname_print(char stroka[], int i) {
    for (int j = 0; j < i; j++) cout << stroka[j];
}
void name() {
    char c;
    cin.get(c);
    cout << c << ". ";
    while (c != ' ') {
        cin.get(c);
    }
}
void otche() {
    char c;
    cin.get(c);
    cout << c << ". ";
    while (c != ' ' && c != '\n') {
        cin.get(c);
    }
}
int main()
{
    char stroka[12343]=" ";
    int i = 0;
    frstname(stroka, i);
    name();
    otche();
    frstname_print(stroka, i);
    return 0;
}
