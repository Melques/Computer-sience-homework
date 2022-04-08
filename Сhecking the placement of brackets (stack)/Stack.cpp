#include<iostream>  
#include<string>
#include<fstream>
using namespace std;

struct elem{
	int value;
	int order;
	elem* next = nullptr;
};
/*
struct stack{
	elem* root = nullptr;
	elem* tail = nullptr;
	size_t size;
};*/
void deleteTop(elem*& stack) {
	elem* cur = new elem; 
	if (!stack) {
		return;
	}
	stack = stack->next;
	delete cur;
}
void push(elem*& stack, int value, int order){
	//Создание нового элемента для размещения в стеке
	elem* newel = new elem;
	newel->value = value;
	newel->order = order;
	//Проверка пустоты стека
	if (!stack)
	{
		//Новый элемент будет первым
		stack = newel;
	}
	else
	{
		//Стек уже существует. Новый элемент размещается на вершине
		newel->next = stack;
		stack = newel;
	}
}
//извлечь последний элемент 
bool pop(elem*& stack, int& value ,int& order) {
	if (!stack) {
		return false;
	}
	elem* cur = stack;
	value = stack->value;
	order = stack->order;
	stack = stack->next;
	delete cur;
	return true;
}
bool peek(elem*& stack, int& value, int& order) {
	if (!stack) {
		return false;
	}
	value = stack->value;
	order = stack->order;
	return true;
}
bool peekValueOnly(elem*& stack, int& value) {
	if (!stack) {
		return false;
	}
	value = stack->value;
	return true;
}
bool peekOrderOnly(elem*& stack, int& order) {
	if (!stack) {
		return false;
	}
	order = stack->order;
	return true;
}
//вывод на экран 
void ShowStack(elem*& stack) {
	while (stack) {
		int value;
		int order;
		if (pop(stack, value, order)) {
			cout << value << " ";
		}
	}
}

void openCheck(elem*& stack){
	while (stack) {
		int value;
		int order;
		if (pop(stack, value, order)) {
			cout << "unclosed bracked: " << order << " " << endl;
		}
	}
}
int main() {
	ifstream cin("text.txt");
	elem* stack = nullptr;
	char s;
	int order = 0;
	int test = 0;
	while (cin.get(s)) {
		int value = 0;
		if (s == '(') {
			push(stack, 1, order);
		}
		if (s == '[') {
			push(stack, 2, order);
		}
		if (s == '<') {
			push(stack, 3, order);
		}

		if (s == '{') {
			push(stack, 4, order);
		}
		if (s == ')') {
			if (!peekValueOnly(stack, value)) {
				test = 1;
				cout << "extra bracket ): " << order << endl;
			}
			else if (!(value == 1)) {
				test = 1;
				cout << "unexpected bracket ): " << order << endl;
			}
			else deleteTop(stack);
		}
		if (s == ']') {
			if (!peekValueOnly(stack, value)) {
				test = 1;
				cout << "extra bracket ]: " << order<< endl;
			}
			else if (!(value == 2)) {
				test = 1;
				cout << "unexpected bracket ]: " << order << endl;
			}
			else deleteTop(stack);
		}
		if (s == '>') {
			if (!peekValueOnly(stack, value)) {
				test = 1;
				cout << "extra close bracket >: " << order << endl;
			}
			else if (!(value == 3)) {
				test = 1;
				cout << "unexpected bracket  >: " << order << endl;
			}
			else deleteTop(stack);
		}
		if (s == '}') {
			if (!peekValueOnly(stack, value)) {
				test = 1;
				cout << "extra close bracket }: " << order << endl;
			}
			else if (!(value == 4)) {
				test = 1;
				cout << "unexpected bracket  }: " << order << endl;
			}
			else deleteTop(stack);
		}
		order++;
	}
	openCheck(stack);
	if (test) {
		cout << "alright, bro";
	}
	else cout << "it will be better next time, bro";
	//ShowStack(stack);
}
