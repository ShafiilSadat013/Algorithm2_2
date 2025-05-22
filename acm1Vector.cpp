#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i)
    {
        cin >> v[i];
    }
    v.push_back(10);
    v.push_back(15);

    for(int i=0;i<v.size();++i)
    {
        cout << v[i] << " ";
    }
    if (v.empty())v.pop_back();
    cout << endl;
    for(int i=0;i<v.size();++i)
    {
        cout << v[i] << " ";
    }
    return 0;

}
