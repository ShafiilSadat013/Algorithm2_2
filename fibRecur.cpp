#include<bits/stdc++.h>
using namespace std;
int nfib(int n)
{
    if(n<=1) return n; // base case
    else return nfib(n-1)+nfib(n-2);
}
int main()
{
    int x;
    cin >> x;
    //n gula number print
    for(int i=0;i<x;++i)
    {
        cout << nfib(i) << " " ;
    }
    cout << endl;
    cout << nfib(x-1) << endl;
    return 0;
}
