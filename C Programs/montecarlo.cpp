#include <iostream>
using namespace std;

int main()
{
    float mp, d1, x, n, k, d2, wr;
    cin >> mp >> d1 >> x >> n >> k >> d2;

    float nw = mp - ((d1 * mp) / 100);
    if (n <= k)
    {
        wr = x * n;
    }
    else
    {
        float l = x * n;
        wr = l - ((d2 * l) / 100);
    }

    if (nw <= wr)
        cout << "NEW" << endl;
    else
        cout << "OLD" << endl;

    return 0;
}