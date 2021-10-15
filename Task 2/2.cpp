#include <iostream>

using namespace std;
int fib(int n) {
    int a = 0, b = 1, c;
    while (n > 0){
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int N;
    cin >> N;
    cout << fib(N);
}
