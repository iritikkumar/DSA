#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp;
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    int min = a[0];
    for (i = 1; i < n; i++)
    {
        if (min < a[i])
        {
            min = a[i];
            break;
        }
    }
    if(min == a[0])
        cout << "NO" << endl;
    else
        cout << min << endl;
    return 0;
}