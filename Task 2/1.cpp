#include <iostream>
#include <stdlib.h>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    cout << rand() % 5 + 1 << " " << rand() % 5 + 1;
}

