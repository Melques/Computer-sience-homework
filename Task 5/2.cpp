#include <iostream>
using namespace std;

int funct() {
    char c;
    char digit[12345];
    int i = 0, j = 0, ans = 0;;
    cin.get(c);
    while (c != '\n') {
        if (c != '+') {
            digit[j] = c;
            j++;
        }
        else {
            int desyat = 0;
            for (int t = i; t < j; t++) {
                ans += (digit[t] - '0') * pow(10, j-t- 1);
                desyat++;
            }
            i = j;
        }
        cin.get(c);
    }
    int desyat = 0;
    for (int t = i; t < j; t++) {
        ans += (digit[t] - '0') * pow(10, j - t-1);
        desyat++;
    }
    return ans;
}
int main()
{
    cout << funct();
    
    return 0;
}