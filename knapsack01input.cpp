#include<bits/stdc++.h>
using namespace std;
int dp[10][10];

int knapsack_01(int n,int w,int profit[],int wt[])
{
    if(n==0||w==0) return 0;
    if(dp[n][w]!=-1) return dp[n][w];
    if(wt[n-1]>w) return dp[n][w] =knapsack_01(n-1,w,profit,wt);
    else
        return dp[n][w]= max(knapsack_01(n-1,w,profit,wt),
                             profit[n-1]+knapsack_01(n-1,w-wt[n-1],profit,wt));

}
int main()
{
    cout << "Koyta item?" << endl;
    int x; // koyta item
    cin >> x;
    int profit[x],wt[x]; // item onujayi array size
    cout << "Profit daw :" << endl;
    for(int i=0;i<x;++i) cin >> profit[i]; // profit input
    cout << "weight input daw" << endl;
    for(int i=0;i<x;++i) cin >> wt[i]; // weight input
    int w; //eta capacity
    cout << "capacity input daw:" << endl;
    cin >> w;
    memset(dp,-1,sizeof(dp));
    cout << knapsack_01(x,w,profit,wt) << endl;
    return 0;

}
