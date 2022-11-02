#include <bits/stdc++.h>
using namespace std;

bool sinh(int k, int n, int a[])
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;
    if (i == 0)
    {
        return false;
    }

    a[i]++;
    for (int j = i + 1; j <= k; j++)
    {
        a[j] = a[j - 1] + 1;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k];
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        int ok = 1;

        if (!sinh(k, n, a))
        {
            for (int i = 1; i <= k; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}