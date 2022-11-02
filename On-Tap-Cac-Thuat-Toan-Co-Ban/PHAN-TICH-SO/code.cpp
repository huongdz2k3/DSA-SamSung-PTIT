#include <bits/stdc++.h>
using namespace std;

int n;
int a[101];
void ktao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
vector<vector<int>> res;
void Try(int i, int sum, vector<int> path)
{
    if (sum >= n)
    {
        if (sum == n)
        {
            res.push_back(path);
        }
        return;
    }
    for (int j = i; j >= 1; j--)
    {
        if (sum + a[j] <= n)
        {
            path.push_back(a[j]);
            Try(j, sum + a[j], path);
            path.pop_back();
        }
        else if (sum + a[j] < n && sum == n)
            Try(j + 1, sum, path);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktao();
        vector<int> path;
        Try(n, 0, path);
        for (auto tmp : res)
        {
            cout << "(";
            for (int i = 0; i < tmp.size(); i++)
            {
                cout << tmp[i];
                if (i != tmp.size() - 1)
                    cout << " ";
            }
            cout << ") ";
        }
        cout << endl;
        res.clear();
    }
}