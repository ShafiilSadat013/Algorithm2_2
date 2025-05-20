#include<bits/stdc++.h>
using namespace std;

int dp[100];
int fibo (int n)
{
    //memset(dp,-1,sizeof(dp));
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for(int i=0;i<n;++i)
    {
        cout << fibo(i) << " ";
    }
   // cout << fibo(n);

    return 0;
}
