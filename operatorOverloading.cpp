#include <iostream>
using namespace std;
class test
{
    int var1;
    int var2;

public:
    test()
    {
        var1 = var2 = 0;
    }
    test(int v1, int v2)
    {
        var1 = v1;
        var2 = v2;
    }
    void set_var1(int v1)
    {
        var1 = v1;
    }
    void set_var2(int v2)
    {
        var2 = v2;
    }
    test operator+(test &t1)
    {
        test result;
        result.set_var1(var1 + t1.var1);
        result.set_var2(var2 + t1.var2);
        return result;
    }
     test operator-(test &t2)
    {
        test result;
        result.set_var1(var1 - t2.var1);
        result.set_var2(var2 - t2.var2);
        return result;
    }
     test operator/(test &t3)
    {
        test result;
        result.set_var1(var1 / t3.var1);
        result.set_var2(var2 / t3.var2);
        return result;
    }
    test operator*(test &t4)
    {
        test result1;
        result1.set_var1(var1 * t4.var1);
        result1.set_var2(var2 * t4.var2);
        return result1;
    }
    void display()
    {
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
    }
};
int main()
{
    test t1(2, 5);
    test t2(9, 7);
    test t11= t1 + t2;
    test t12 = t1 - t2;
    test t13 = t1 / t2;
    test t14 = t1 * t2;
    cout << "Addition" << endl;
    t11.display();
    cout << "Subtraction" << endl;
    t12.display();
    cout << "Division" << endl;
    t13.display();
    cout << "Multiplication" << endl;
    t14.display();

    return 0;
}
