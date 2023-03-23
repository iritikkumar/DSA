#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int i, a, b, count = 0, setBitCount;
        cin >> a >> b;
        while (a != b){
            setBitCount = 0;
            for (i = 0; i < 22; i++)
                if (a & (1 << i)){
                    setBitCount++;
                }
            if (setBitCount == 1){
                break;
            }
            else if (a % 2 == 0){
                a = a / 2;
                count++;
            }
            else if (a % 2 == 1){
                a = (a - 1) / 2;
                count++;
            }
        }
        if (setBitCount == 1){
            while(a!=b){
                if (b > a){
                    a = a * 2;
                    count++;
                }
                else{
                    a = a / 2;
                    count++;
                }
            }
        }        
        cout << count << endl;
    }
    return 0;
}