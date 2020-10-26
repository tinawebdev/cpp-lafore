// Программа запрашивает у пользователя значения двух денежных сумм в фунтах,
// шиллингах и пенсах, затем складывает их и выводит на экран полученную сумму
#include <iostream>
using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;
};

sterling get(void);
sterling sum(sterling s1, sterling s2);
void disp(sterling s);

int main()
{
    sterling s1, s2, s3;

    s1 = get();
    s2 = get();
    s3 = sum(s1, s2);
    disp(s3);

    return 0;
}

sterling get(void)
{
    sterling s;
    char ch;
    cout << "Введите сумму (фунты.шиллинги.пенсы): ";
    cin >> s.pounds >> ch >> s.shillings >> ch >> s.pence;
    return s;    
}

sterling sum(sterling s1, sterling s2)
{
    sterling s;
    s.pence = s1.pence + s2.pence;
    s.shillings = s1.shillings + s2.shillings;
    s.pounds = s1.pounds + s2.pounds;
    
    if(s.pence > 11) {
        s.shillings += (s.pence/12);
        s.pence = s.pence%12;
    }

    if(s.shillings > 19) {
        s.pounds += (s.shillings/20);
        s.shillings = s.shillings%20;
    }

    return s;
}

void disp(sterling s)
{
    cout << "Результат: " << s.pounds << '.' << s.shillings 
     << '.' << s.pence << endl;
}
