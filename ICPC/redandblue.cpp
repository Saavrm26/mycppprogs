#include <bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<long long, long long>>
#define mll map<long long, long long>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
#define endl "\n"
#define invll(x, n)            \
    vll x(n);                  \
    for (ll i = 0; i < n; i++) \
        cin >> x[i];
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

bool comp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return (a.se < b.se);
}

void dfs(int node, vll tree[], int *vis)
{
    vis[node] = 1;
    for (auto ele : tree[node])
    {
        dfs(node, tree, vis);
    }
}

ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

string s;
ll n;
vll d;

bool check(ll mid)
{
    ll ctr = mid;
    ll spilled1 = -1,spilled2=-1;
    ll max_spill = -1;

    for (ll i = 0; i < n; i++)
    {
        if (i > max(spilled2,spilled1))
        {
            if (s[i] == 'B')
            {
                return false;
            }
            spilled1 = max_spill;
            ctr--;
        }
        if (i <= spilled1)
        {
            if (max_spill < d[i] + i)
            {
                max_spill = d[i] + i;
            }
        }
    }
    if (spilled1 < n - 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void solve()
{
    cin >> n;
    cin >> s;
    d.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    ll spilled = -1;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i > spilled)
        {
            if (s[i] == 'B')
            {
                cout << -1 << endl;
                return;
            }
        }
        count++;
        spilled = max(spilled, d[i] + i);
    }
    if (spilled < n - 1)
    {
        cout << -1 << endl;
        return;
    }
    ll high = spilled, low = 0, mid = (high + low) / 2;
    ll ans=INT64_MAX;
    while (high >= low)
    {
        mid = (high + low) / 2;
        if (check(mid))
        {
            high = mid-1;
            ans=min(ans,mid);
        }
        else
        {
            low = mid+1;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    while (n)
    {
        n--;
        solve();
        d.clear();
        s.clear();
    }
#ifndef ONLINE_JUDGE
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs"
         << "\n";
#endif
}