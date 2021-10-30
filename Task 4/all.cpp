#include <iostream>
#include <iostream>

using namespace std;
void print_array(int a[], const int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
        cout << endl;
    }
}
void progressia(int frst, int step, int a[], const int n) {
    a[0] = frst;
    for (int i = 1; i < n; i++) {
        a[i] = a[i - 1] + step;
    }
}
void N_full(int a[], const int n) {
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
}
void randomize_array(int a[], int n)
{
    srand(time(0));
    int check = rand();
    int t = 0;
    while (t != check) {
        swap(a[rand() % n], a[rand() % n]);
        t++;
    }
}
void rand_full(int a[], int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 1001 + 1000;
    }
}
int count(int a[], int n) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (((a[i] % 100) / 10) % 2 == 0) counter++;
    }
    return counter;
}
int main()
{
    int frst, step, N;
    cin >> frst >> step >> N;
    int* a1 = new int[N];
    int* a2 = new int[N];
    int* a3 = new int[N];
    progressia(frst, step, a1, N);
    N_full(a2, N);
    randomize_array(a2, N);
    rand_full(a3, N);
    print_array(a1, N);
    print_array(a2, N);
    cout << count(a3, N);
    delete[] a1;
    delete[] a2;
    delete[] a3;
}