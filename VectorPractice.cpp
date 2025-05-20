#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(20); // 🔧 Missing semicolon fixed here

    // Printing using index
    for (int i = 0; i < v1.size(); ++i)
        printf("%d ", v1[i]);
    cout << endl;

    // Printing using iterator
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
    {
        cout << *it << " "; // 🔧 Dereferencing the iterator to print the value
    }
    cout << endl;

    return 0;
}
