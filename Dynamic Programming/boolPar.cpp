#include <bits/stdc++.h>
using namespace std;
int dp[202][202][3];
int solve(string &s, int i, int j, bool isTrue)
{
    if (i > j)
        return 0;
    if (i == j)
    {
        if (isTrue == true)
            return s[i] == 'T';
        else
            return s[i] == 'F';
    }
    if (dp[i][j][isTrue] != -1)
        return dp[i][j][isTrue];
    int ans = 0;
    for (int k = i + 1; k < j; k = k + 2)
    {
        int lT = solve(s, i, k - 1, true);
        int lF = solve(s, i, k - 1, false);
        int rT = solve(s, k + 1, j, true);
        int rF = solve(s, k + 1, j, false);
        if (s[k] == '|')
        {
            if (isTrue == true)
                ans += lT * rT + lT * rF + rT * lF;
            else
                ans += lF * rF;
        }
        else if (s[k] == '&')
        {
            if (isTrue == true)
                ans += lT * rT;
            else
                ans += lF * rF + lT * rF + rT * lF;
        }
        else if (s[k] == '^')
        {
            if (isTrue == true)
                ans += lT * rF + rT * lF;
            else
                ans += lT * rT + rF * lF;
        }
    }
    return dp[i][j][isTrue] = ans;
}
int countWays(int N, string S)
{
    memset(dp, -1, sizeof(dp));
    return solve(S, 0, N - 1, true);
}
int main(){
    string s = "T|F^F&T|F^F^F^T|T&T^T|F^T^F&F^T|T^F";
    cout<<countWays(35,s)<<endl;
    return 0;
}