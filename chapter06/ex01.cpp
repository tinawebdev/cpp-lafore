#include <iostream>
using namespace std;

class Int
{
    private:
    int value;
    public:
    Int():value(0) { }
    Int(int num):value(num) { }
    void display();
    void add(Int n1, Int n2);
};

void Int::display()
{
    cout << value;
}

void Int::add(Int n1, Int n2)
{
    value = n1.value + n2.value;
}

int main()
{
    Int n1(30);
    Int n2(5);
    Int n3;
    n3.add(n1, n2);
    cout << "n3 = ";
    n3.display();
    cout << endl;
    return 0;
}
