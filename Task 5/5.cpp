#include <iostream>
using namespace std;
void read(char slovo[], int &t) {
    char c;
    cin.get(c);
    while (c != '\n') {
        slovo[t] = c;
        cin.get(c);
        t++;
    }
}
int counter (char slovo[], int t) {
    char c;
    cin.get(c);
    int i = 0, j = 0, ans = 0;
    while (c != '\n') {
        
        if (slovo[j] == c) {
            j++;
            if (j == t) {
                ans++;
                j = 0;
            }
        }
        else if (slovo[0] == c) j = 1;
        else j = 1;
        i++;
        cin.get(c);
    }
    return ans;
}
int main()
{
    char slovo[12345];
    char stroka[12345];
    int t = 0, k = 0;
    read(slovo, t);
    cout << counter(slovo, t);
    return 0;
}
