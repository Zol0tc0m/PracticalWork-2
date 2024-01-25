#include <iostream>
#include <Windows.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int a, b, operation;

    do {
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;

        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Квадратный корень" << endl;
        cout << "7. 1% от числа" << endl;
        cout << "8. Факториал" << endl;
        cout << "9. Выход" << endl;
        cout << "Введите номер операции: ";
        cin >> operation;

        switch (operation) {
        case 1:
            cout << "сумма чисел = " << a + b << endl;
            break;
        case 2:
            cout << "разность чисел = " << a - b << endl;
            break;
        case 3:
            cout << "умножение чисел = " << a * b << endl;
            break;
        case 4:
            if (b != 0) {
                cout << "деление чисел = " << a / b << endl;
            }
            else {
                cout << "Ошибка: деление на ноль невозможно." << endl;
            }
            break;
        case 5:
            cout << "возведение в степень = " << pow(a, b) << endl;
            break;
        case 6:
            cout << "квадратный корень первого числа = " << sqrt(a) << endl;
            break;
        case 7:
            cout << "1 процент от первого числа = " << a * 0.01 << endl;
            break;
        case 8:
            cout << "факториал первого числа = " << factorial(a) << endl;
            break;
        case 9:
            cout << "Выход из программы." << endl;
            return 0;
        default:
            cout << "Неверный номер операции. Попробуйте еще раз." << endl;
        }
    } while (operation != 9);

    return 0;
}