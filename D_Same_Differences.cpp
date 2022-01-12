/*
    Author: AL-Muzahid
    Last modified: 2022/01/12 10:37:26
    Link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e5 + 5;
const long long mod = 1e9 + 7;
typedef long long ll;
// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void solve()
{
    ll n;
    cin >> n;
    ll array[n];
    map <ll, ll> mp;
    for(int i = 0 ; i< n; i++){
        cin >> array[i];
        mp[array[i] - (i+1)]++;
    }
    ll ans = 0;
    for(auto x : mp){
        ans += (x.second * (x.second -1))/ 2;

    }
    cout << ans << endl;

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
// LastTry
// https://www.youtube.com/watch?v=yKcgg4bsmGM