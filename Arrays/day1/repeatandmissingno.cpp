#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int arr[] = {1, 2, 3, 4, 3, 6};

    unordered_map<int, bool> m;

    for (auto i : arr)
    {
        if (m.find(i) == m.end())
        {
            m[i]= true;
        }
        else
        {
            cout << "Repeated no: " << i;
        }
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if (m.find(i) == m.end())
        {
            cout << "Missing no : " << i;
        }
    }

    return 0;
}