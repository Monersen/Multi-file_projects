#include <iostream>
#include "mFunc.h"

using namespace std;

int main(int argc, char** argv)
{
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    double num1, num2;
    int op;

    while (true)
    {
        cout << "Введите первое число: ";
        cin >> num1;

        cout << "Введите второе число: ";
        cin >> num2;

    op_label:
        cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        cin >> op;

        switch (op)
        {
        case ADD:
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;

        case SUB:
            cout << num1 << " - " << num2 << " = " << sub(num1, num2) << endl;
            break;

        case MUL:
            cout << num1 << " * " << num2 << " = " << mul(num1, num2) << endl;
            break;

        case DIV:
            try {
                double res = div(num1, num2);
                cout << num1 << " / " << num2 << " = " << res << endl;
            }
            catch (const char* err) {
                cerr << err << endl;
            }
            break;

        case POW:
            cout << num1 << " в степени " << num2 << " = " << pow(num1, num2) << endl;
            break;

        default:            
            break;
        }
    }

    return 0;
}