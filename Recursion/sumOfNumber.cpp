#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return n;
    return sum(n / 10) + n % 10;
}
int main()
{
    int s = sum(12345);
    cout<<s;
    return 0;
}