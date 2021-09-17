#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1[] = {1, 4, 7, 8, 10};
    int a2[] = {2, 3, 9};
    int n1 = sizeof(a1) / sizeof(int);
    int n2 = sizeof(a2) / sizeof(int);

    int i = 0, j = 0;
    while (i < n1)
    {
        if (a1[i] > a2[j])
        {
            swap(a1[i], a2[j]);

            sort(a2, a2 + n2);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        cout << a1[i]<<" ";
    }
    cout<<endl;
    for (int j = 0; j < n2; j++)
    {
        cout << a2[j]<<" ";
    }
    return 0;
}
