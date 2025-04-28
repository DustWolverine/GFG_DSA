#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


int main()
{
 fast_cin();

#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif

int n; cin>>n; 
vector<int> v1,v2;
for(int i=0;i<n;i++){
    int no; cin>>no;
    v1.push_back(no);
}
for(int i=0;i<n;i++){
    int x; cin>>x; 
    v2.push_back(x);
}

unordered_map<int,int> mpp;
for(auto it:v1){
    mpp[it]++;
}

bool flag=true;
for(auto it:v2){
    mpp[it]--;
}
for(auto it:mpp){
    if(it.second!=0){
        flag=false;
        break;
    }
}
//? time complexity is O(3n)=O(n) and space comlexity is O(n) in worst case it is O(n^2) in case of collison 
//? if there is collison we will switch to ordered_map in c++ then worst case in O(nlogn+2n)=O(nlogn) and space complexity is O(n)
(flag)?cout<<"Equal":cout<<"Not Equal";
 return 0;
}