// Problem link https://cses.fi/problemset/task/1634


#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define ll long long
typedef unsigned long long ull;
typedef long double lld;
//#define int long long
// #pragma GCC optimize "trapv"
#define mod 1000000007
#define MOD1 998244353
#define INF 1e18   //ll max k liye
#define inf INT_MAX   //int max k liye
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define rep(i,a,b)        for(int i=a;i<b;i++)
int ceil_div(int a,int b) {return (a+b-1)/b;};
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
 
/**********************DEBUG*******************************************************/
// #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
// void _print(ll t) {cerr << t;}
// //void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}
// void display(ll a[],ll n){for(ll i=0; i<n; i++){cout<<a[i]<<" ";}cout<<endl;}
 
// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p)
// {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) 
// {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <typename T, typename U> inline bool chmax(T &a, U b) { return a < b ? (a = b, true) : false; }
// template <typename T, typename U> inline bool chmin(T &a, U b) { return a > b ? (a = b, true) : false; }
// bool testOverlap(int x1, int x2, int y1, int y2) {return (x1 >= y1 && x1 <= y2) ||(x2 >= y1 && x2 <= y2)
//     ||(y1 >= x1 && y1 <= x2) ||(y2 >= x1 && y2 <= x2);}
//     int gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
 
 
 
//Soution
 
   
void solve(){
   int n,x;
   cin>>n>>x;
   vector<int>dp(x+1,1e9);
   vector<int>v(n);
   for (int&c : v) cin >> c;
   dp[0]=0;
   rep(i,1,x+1){
    rep(j,0,n){
      if(i-v[j]>=0){
        dp[i]=min(dp[i],dp[i-v[j]]+1);
      }
    }
   }
   cout << (dp[x] == 1e9 ? -1 : dp[x]) << endl;
}
signed main(){
    fastio();
    int t=1;
    //cin>>t;
    while(t--)
    	solve();
}