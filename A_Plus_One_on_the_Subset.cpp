/*
    Author: AL-Muzahid
    Last modified: 2022/01/11 02:31:42
    Link: https://codeforces.com/contest/1624/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define srt(a) sort(a.begin(), a.end())
const int N = 1e5 + 5;
const long long mod = 1e9 + 7;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector <ll> v(n);
    for(auto &x: v) cin >> x;
    sort(v.begin(), v.end());
    cout << v.back() - v.front() << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
