#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define co cout <<
#define ci cin >>

#define ded << "\n";

#define vi vector<int>
#define vll vector<long long>

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

#define meow                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = b - 1; i >= a; --i)
#define all(x) x.begin(), x.end()

void solve()
{
    int n, x;
    ci n >> x;
    vector<int> arr(n);
    rep(i, 0, n) ci arr[i];
    sort(all(arr));
    int i  =0, j = n-1;
    int res = 0;
    while(i < j){
        if (arr[i] + arr[j] > x){
            res++; j--;
        }
        else {
            res++;
            i++; j--;
        }
    }
    res += j - i + 1;
    co res;
}

int main()
{
    meow;
    solve();
    return 0;
}