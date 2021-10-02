#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    if (n > 99 && n < 1000) cout << "Число трехзначно";
    else cout << "Число НЕ трёхзначно";
}

