#include <iostream>
#include <cmath>
using namespace std;
int div_count(int n) {
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) sum += i + n / i;
    }
    return sum;
}
int main()
{
    for (int i = 1; i < 10000; i++) {
        for (int j = i + 1; j < 10000; j++) {
            if (div_count(i) == j && i == div_count(j)) cout << i << " " << j << endl;
        }
    }
    return 0;
}

