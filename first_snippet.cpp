//You have struggled your way here with no guidance from anyone,keep the faith
//You have practiced a hell lot of questions,have faith in yourself
//Dont just stare at the problem use that damn pen and paper
//Write down whats in ur head!
//AFTER STRUGGLE,PEACE RESIDES,WORK HARD TODAY FOR THE BETTER TOMORROW !
#include<ext/pb_ds/assoc_container.hpp>//ordered set in increasing order but with indecies
//indexed_set s;s.insert(3);auto x=s.find_by_order(2)//return iterator of element present at index 2//cout<<*x<<endl;//cout<<s.order_of_key(6)<<endl;//return index of 6// if the element is not present then it will return the index where it would have been in the set
#include<bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define ff first
#define ss second
#define all(a) (a).begin(), (a).end()
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexe_set;
typedef vector<int> vint;
typedef vector<vint> vvint;
typedef map<int,int> mint;
typedef stack<int> sint;
typedef queue<int> qint;
const int M=1e9+7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
void vout(vint v){
  for(auto it: v) cout<<it<<' ';
  cout<<endl;
}
void vin(vint &v,int n){
  for(int i=0;i<n;i++){
    int x;cin>>x;
    v.push_back(x);
  }
}
void printmap(mint m){
  for(auto it: m){
    cout<<it.first<<' '<<it.second<<endl;
  }
}
bool iseven(int n){
  if(n&1){
    return false;
  }
  return true;
}
ll power(int a,int p){
  ll prod=1;
  for(int i=0;i<p;i++){
    prod*=a;
  }
  return prod;
}
ll nCr(int n, int r) {
  if (r > n)
    return 0;
  if (r == 0 || r == n)
    return 1;
  return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
int fact(int n) {
  int res = 1;
  for (int i = 2; i <= n; i++)
  {
    res = (res * i) % M;
  }
  return res % M;
}
bool isPrime(int n) {
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  return true;
}
vint commonElement(vint a,vint b,vint c){//O(n1+n2+n3)
  int n1=a.size(),n2=b.size(),n3=c.size();
  vint v;
  int i=0,j=0,k=0;
  while(i<n1 && j<n2 && k<n3){
    if(a[i]==b[j] && b[j]==c[k]){
      v.push_back(a[i]);
      i++;j++;k++;
    }
    else if(a[i]<b[j]) i++;
    else if(b[j]<c[k]) j++;
    else k++;
    int xx=a[i-1];
    while(a[i]==xx) i++;
    int yy=b[j-1];
    while(b[j]==yy) j++;
    int zz=c[k-1];
    while(c[k]==zz) k++;
  }
  if(v.size()==0) return {-1};
  return v;
}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
//ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
  int tc;
  cin>>tc;
  while(tc--)
  {
    //Lets Code It !!
    
    
  }
  return 0;
}