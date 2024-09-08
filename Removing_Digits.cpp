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


#define F first
#define S second
#define sum(v) accumulate(v.begin(), v.end(), 0LL)
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define all(v) v.begin(), v.end()
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
       int n;
       cin >> n;

       vector<int> dp(n+1, INT_MAX);
       dp[n] = 0;

       for(int i = n; i > 0; i--){
        if(dp[i] == INT_MAX){
            continue;
        }
        int temp = i;
        // cout << i << endl;
        while(temp > 0){
            int s = temp%10;
            temp = temp/10;
            // cout << "s   : " << s << "  t  :  " << temp << endl;
            if(s <= i){
                dp[i-s] = min(dp[i-s], dp[i] + 1);
            }
        }
       }

       cout << (dp[0] < 1e9 ? dp[0] : -1) << endl;


       
    }  



    // digit : all digits iteration : 
