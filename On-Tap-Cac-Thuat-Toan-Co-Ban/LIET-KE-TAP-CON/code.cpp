#include <bits/stdc++.h>
using namespace std;

string s;
int n;
int a[101];
set<string> se;
void ktao()
{

    cin >> n;
    cin >> s;
    for (int x : a)
        x = 0;
}

void Try(int i, int k)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            string str = "";
            for (int h = 1; h <= k; h++)
            {
                int idx = a[h] - 1;
                str += s[idx];
            }
            se.insert(str);
        }
        else
            Try(i + 1, k);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktao();
        for (int i = 1; i <= n; i++)
        {
            Try(1, i);
        }
        for (auto x : se)
            cout << x << " ";
        cout << endl;
    }
}