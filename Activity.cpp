#include <iostream>
using namespace std;
int fun(int num)
{
    if (num == 1)
        return num;
    else
        return num + fun(num - 1);
}
int fib(int n)
{
    if (n == 1 || n == 0)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    cout << fun(5) << endl;
    cout << fib(5);
    return 0;
}