#include <iostream>
#include <cmath>
using namespace std;
int F(int N, int k = 0) {
    if (N == 0) return 0;
    return F(N / 10, k + 1) + pow(2, k)*(N%10);
}
int main()
{
    int N;
    cin >> N;
    cout << F(N);
}
