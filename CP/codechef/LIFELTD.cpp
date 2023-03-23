// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         char a[3][3];
//         int i, j, x = 0;
//         for (i = 0; i < 3; i++)
//         {
//             for (j = 0; j < 3; j++)
//             {
//                 cin >> a[i][j];
//             }
//         }
//         for (i = 0; i < 2; i++)
//         {
//             for (j = 0; j < 2; j++)
//             {
//                 if (a[i][j] == 'l' && a[i + 1][j] == 'l' && a[i + 1][j + 1] == 'l')
//                     x = 1;
//             }
//         }

//         if (x == 1)
//             cout << "yes" << endl;
//         else
//             cout << "no" << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
//     cin>>t;
// 	while(t--)
// 	{
// 	    int quant,price;
// 	    float expense;
// 	    cin>>quant>>price;
//         if(quant>1000)
//             expense = (float) 0.9*quant*price;
//         else
//             expense = (float) quant*price;
// 	    cout<<expense<<endl;
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int quant;
        double expense, price;
        cin >> quant >> price;
        cout << fixed << setprecision(6) << (quant > 1000 ? 0.9 * quant * price : quant * price) << endl;
    }
    return 0;
}
