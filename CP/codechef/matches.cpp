#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, s, r, n = 0;
        cin >> a >> b;
        s = a + b;
        while (s)
        {
            r = s % 10;
            if (r == 0 || r == 6)
                n = n + 6;
            else if (r == 1)
                n = n + 2;
            else if (r == 2 || r == 3 || r == 5)
                n = n + 5;
            else if (r == 4 || r == 9)
                n = n + 4;
            else if (r == 7)
                n = n + 3;
            else
                n = n + 7;
            s = s / 10;
        }
        cout << n << endl;
    }
    return 0;
}
