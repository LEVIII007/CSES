#include <bits/stdc++.h>
using namespace std;

#define yes      cout<<"YES"<<"\n"
#define no       cout<<"NO"<<"\n"
#define printfirst cout << "first" << "\n"
#define printsecond cout << "second" << "\n"
#define couts(n) cout<<n<<" "
#define coutn(n) cout<<n<<nl


#define endl '\n'
#define int long long
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef unordered_map<int,int> mapii;
typedef unordered_map<int,char> mapic;
typedef unordered_map<char,int> mapci;
typedef unordered_map<char,char> mapcc;
typedef set<int> seti;
typedef set<char> setc;
template <class T> istream & operator>> (istream &in, vector<T> &v) {
    for (auto &vi : v) {   in >> vi;} return in;}
void printvec(vector<int>&v){for(int i  =0 ; i < v.size(); i++){  cout << v[i] << " ";}cout << endl;}

const int MOD = 1e9 + 7;


#define F first
#define S second
#define sum(v) accumulate(v.begin(), v.end(), 0LL)
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define all(v) v.begin(), v.end()
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}


signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);


       int n, target;
       cin >> n >> target;
       vector<int> a(n);
       f(i,n) cin >> a[i];
        vector<vector<int>> dp(n+1, vector<int>(x+1));
        for(int i=0; i < n; i++) dp[i][0] = 1;              // sum = 0, 

        for(int i = n-1; i >= 0; i--){
            for(int sum = 1; sum <= x; sum++){
                int skipping = dp[i+1][sum];
                int picking = 0;
                if(a[i] <= sum){
                    picking = dp[i][sum - a[i]];
                }
            }
        }

    }


// 0    +1
// num     +num
// 2
// 4

