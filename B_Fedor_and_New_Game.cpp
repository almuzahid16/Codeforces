/*
    Author: AL-Muzahid
    Last modified: 2022/01/11 22:52:11
    Link: https://codeforces.com/contest/467/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define srt(a) sort(a.begin(), a.end())
#define YES cout << "YES" << endl
#define yes cout << "yes" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl
const int N = 1e5 + 5;
const long long mod = 1e9 + 7;
typedef long long ll;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    // n isn't necessary
    
    vector <int> v(m);
    for(auto &x: v)cin >> x; int last; cin >> last;
    
    int count = 0, ans = 0;
    for(auto x : v){
        count = 0;
        int foul = last ^ x;

        // ans decimal

        while(foul){
            if(foul%2)++count;
            foul /=2;

        }
        if(count <= k)++ans;
    }
    cout << ans << endl;
    // farhana_rahman
    // LastTry_
    // https://www.geeksforgeeks.org/number-of-mismatching-bits-in-the-binary-representation-of-two-integers/
    
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    ll tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
