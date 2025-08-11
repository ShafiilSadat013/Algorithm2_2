#include<bits/stdc++.h>
using namespace std;

int ways(int c[],int nC,int n)
{
    int dp[n+1] = {0};
    dp[0]=1; // only 1 type
    for(int i=0;i<nC;++i)
    {
        for(int amn=c[i];amn<=n;amn++)
        {
            dp[amn]+=dp[amn-c[i]];
        }
    }
    return dp[n];
}
int main()
{
    int x,y;
    //x= how many coins?
    cin >> x;
    //y= target amount
    int z[x]; //ekta array te coin gula input, arrayr size x
    for(int i=0;i<x;++i)
    {
        cin >> z[i];
    }
    // entering target amount
    cin >> y;
    cout << "Number of ways are :" << ways(z,x,y);
    return 0;

}
