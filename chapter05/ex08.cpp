#include <iostream>
using namespace std;

void swap (int &number1, int &number2);
int main()
{
    int num1, num2;
    cout << "Введите число num1 = ";
    cin >> num1;
    cout << "Введите число num2 = ";
    cin >> num2;

    swap(num1, num2);
    cout << "\nnum1 = " << num1;
    cout << "\nnum2 = " << num2;
}

void swap (int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
