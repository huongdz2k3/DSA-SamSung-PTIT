#include <bits/stdc++.h>
using namespace std;

int n;
int a[101];
void ktao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i] = n - i + 1;
    }
}
void sinh()
{
    do
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << " ";
    } while (prev_permutation(a + 1, a + n + 1));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktao();
        sinh();
        cout << endl;
    }
}