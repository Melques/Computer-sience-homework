#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	char stroka[1234];
	char c;
	int size = 0;
	bool test = true;
	cin.get(c);
	while (c != '\n') {
		stroka[size] = c;
		size++;
		cin.get(c);
	}
	for (int i = 0; i < size / 2; i++) {
		if (stroka[i] != stroka[size - i - 1]) {
			test = false;
			break;
		}
	}
	if (test) cout << "This is PALINDROM";
	else cout << "this is not polindrom....";
	return 0;
}

