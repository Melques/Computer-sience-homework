#include <iostream>

using namespace std;
void nmbrs(int n) {
    if (n <= 0) return;
    nmbrs(n / 10);
    cout << n % 10 << " ";
}
int main()
{
    int N;
    cin >> N;
    nmbrs(N);
    return 0;
}
