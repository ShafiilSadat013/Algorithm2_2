#include<bits/stdc++.h>
using namespace std;

#define mx 1000
int dp[mx][mx];
int minC(int c[],int n,int t_amnt)  // coin array , number of coins , target amount
{
    if(t_amnt==0) return 0; // target 0 hoile 0 output
    if(t_amnt<0) return 1e9; // invalid input
    if(n==0) return 1e9;
    if(dp[n][t_amnt]==-1)
    {
      dp[n][t_amnt] = min(
                minC(c,n,t_amnt-c[n-1])+1,
                minC(c,n-1,t_amnt)
              );
    }
    return dp[n][t_amnt];
}
int main()
{
    int x,y; // x = how many types of coins
    cin >> x;
    int z[x];
    for(int i=0;i<x;++i)
    {
        cin >> z[i];
    }

    cin >> y; // target amount
    memset(dp,-1,sizeof(dp));
    int r = minC(z,x,y);
    if(r>=1e9) cout << "Not possible " << endl;
    else cout << "minumum number of coins are " << r << endl;
    return 0;


}
