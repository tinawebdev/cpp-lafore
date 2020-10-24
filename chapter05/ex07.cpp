#include <iostream>
using namespace std;

double power(double n, int p=2);
char power(char n, int p=2);
int power(int n, int p=2);
long power(long n, int p=2);
float power(float n, int p=2);

int main()
{
    double v1;
    char v2;
    int v3;
    long v4;
    float v5;
    int pow;

    cout << "Введите переменную типа double и значение степени: ";
    cin >> v1 >> pow;
    cout << "Результат: " << power(v1, pow) << endl;

    cout << "Введите переменную типа char и значение степени: ";
    cin >> v2 >> pow;
    cout << "Результат: " << power(v2, pow) << endl;

    cout << "Введите переменную типа int и значение степени: ";
    cin >> v3 >> pow;
    cout << "Результат: " << power(v3, pow) << endl;

    cout << "Введите переменную типа long и значение степени: ";
    cin >> v4 >> pow;
    cout << "Результат: " << power(v4, pow) << endl;

    cout << "Введите переменную типа float и значение степени: ";
    cin >> v5 >> pow;
    cout << "Результат: " << power(v5, pow) << endl;
}

double power(double n, int p)
{
    double res = 1.0;
    for (int i=0; i<p; i++)
        res *= n;
    return res;
}

char power(char n, int p)
{
    char res = n;
    for(int i = 1; i < p; i++)
        res *= n;
    return res;
}

int power(int n, int p)
{
    int res = n;
    for(int i = 1; i < p; i++)
        res *= n;
    return res;
}

long power(long n, int p)
{
    long res = n;
    for(int i = 1; i < p; i++)
        res *= n;
    return res;
}

float power(float n, int p)
{
    float res = n;
    for(int i = 1; i < p; i++)
        res *= n;
    return res;
}

