#include <iostream>
#include <windows.h>
#include "counter.h"


using namespace std;

enum class Command
{
	exit = 'x',
	increase = '+',
	decrease = '-',
	meaning = '='
};

int main(int argc, char** argv)
{
	//setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number;
	string answer;
	bool answerBool;
	char symbol = 's';

	cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
	cin >> answer;

	while (true) {
		if (answer == "да") {
			cout << "Введите начальное значение счетчика: ";
			cin >> number;
			answerBool = true;
			break;
		}
	}

	Counter count = answerBool ? Counter(number) : Counter();

	while (true) {
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> symbol;

		Command comm = static_cast<Command>(symbol);
		if (comm == Command::exit) {
			break;
		}

		switch (comm) {
		case Command::increase:
			count.increment();
			break;

		case Command::decrease:
			count.decrement();
			break;

		case Command::meaning:
			cout << count.presentValue() << endl;
			break;

		default:
			break;
		}
	}
	cout << count.presentValue() << endl;

	cout << "До свидания!" << endl;

	return 0;
}