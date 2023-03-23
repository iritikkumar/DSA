// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, n, num;
        cin >> n;
        vector<int> setBitCount(30);
        while (n--)
        {
            cin >> num;
            for (i = 0; i < 30; i++)
                if (num & (1 << i))
                    setBitCount[i]++;
        }
        int ans = 0;
        for (i = 0; i < 30; i++)
        {
            if (setBitCount[i] > 1)
                ans |= (1 << i);
        }
        cout << ans << endl;
    }
    return 0;
}
