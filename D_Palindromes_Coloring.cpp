/*
    Author: AL-Muzahid
    Last modified: 2022/01/12 02:05:48
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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map <char , ll> mp;
    
    for(ll i = 0; i<n; i++){
        mp[s[i]]++;
    }

    ll pair = 0, unpair = 0;
    for(auto it : mp){
        ll x = it.second;

        pair += (x/2);

        unpair += (x%2);
    }

    ll ans = pair / k;
    unpair += (pair%k) * 2;
    ans *= 2;
    if(unpair >= k) ++ans;
    cout << ans << endl;
}

int main()
{
    ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
