/*
    Author: AL-Muzahid
    Last modified: 2022/01/11 09:43:15
    Link: https://codeforces.com/contest/1624/problem/B
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
    ll a, b, c;
    cin >> a >> b >> c;
    if(b-a == c-b){
        cout << "YES" << endl;
        return;
    }
    if(2*b - c > 0 and (2*b-c)%a == 0){
        cout << "YES" << endl;
        return;
    }
    if( (a+c) % (2*b) == 0){
        cout << "YES" << endl;
        return;
    }
    if(2*b - a > 0 and (2*b - a) %c == 0){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
