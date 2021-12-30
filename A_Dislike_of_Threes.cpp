// problem link: https://codeforces.com/problemset/problem/1560/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e5 + 5;
const long long mod = 1e9 + 7;
typedef long long ll;

map<int, int> mp;

void solve()
{
    int k;
    cin >> k;
    cout << mp[k] << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int j = 0;
    for (int i = 1; i <= 2000; i++)
    {
        if (i % 3 == 0 or i % 10 == 3)
        {
            continue;
        }
        else
        {
            ++j;
            mp.insert({j, i});
        }
    }
/* 
    // print maps
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // for test
    cout << "last = " << mp[5] << endl;
 */
    ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
