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
int n;cin>>n; 
vector<int> v1,v2;
for(int i=0;i<n;i++){
    int x; cin>>x;
    v1.push_back(x);
}
for(int i=0;i<n;i++){
    int x; cin>>x;
    v2.push_back(x);
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
int i=0,j=0;
bool flag=true;
while(i<n && j<n){
    if(v1[i]!=v2[j]){
       flag=false;
       break;
    }
    else{
        i++;
        j++;
    }
}
//? time complexity is O(nlogn) and sc is O(1)
(flag)?cout<<"Equal":cout<<"Not Equal";

 return 0;
}