// Last modified: 2021/12/31 03:44:42
// Problem link: https://codeforces.com/contest/363/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e5 + 5;
const long long mod = 1e9 + 7;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    
    vector <int> prefsum(n+5);

    prefsum[0] = 0;
    for(int i = 0; i<n; i++){
        prefsum[i+1] = prefsum[i] + v[i];
    }

    int index;
    int minimum  = 1e9;
    for(int i = 0; i<=n-k; i++){
        int sum = prefsum[k + i] - prefsum[i]; // al*
        if(minimum > sum){
            minimum = sum;
            index = i+1;
        }
    }
    cout << index << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    ll tc = 1;
   // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
