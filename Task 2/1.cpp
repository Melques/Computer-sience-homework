#include <iostream>
#include <stdlib.h>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    cout << rand() % 6 + 1 << " " << rand() % 6 + 1;
}

