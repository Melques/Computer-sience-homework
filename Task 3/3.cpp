#include <iostream>

using namespace std;
int F(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n; i++){
        if (n % i == 0) {
            cout << i << "  ";
           
            return  F(n / i);
        }
    }
}
int main()
{
    int N;
    cin >> N;
    if (N == 1) cout << 1;
    else F(N);
    return 0;
}

