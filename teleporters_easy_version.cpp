#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fr(i,a,b) for (int i =a;i<b;i++)
#define loop(x,n) for (int x = 0;x<n;++x)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()

using namespace std;

void precal(){

}

bool comp(const pair<int,int> &a, const pair<int,int> &b){
    return (a.first+a.second)<=(b.first+b.second);
}
void solve (){
    int n, c;
    cin>>n>>c;
    vector<pair<int,int>> vec(n);
    //pair->first the cost to teleport
    int temp = 1;

    for (auto &[i,j]:vec){
            cin>>i;
            j = temp++;
        }
    
    sort(vec.begin(),vec.end(),comp);
    int ans = 0;
    for (auto [i,j]:vec){
        if(c-(i+j)>=0){
            ans++;
            c-=i+j;
        }
        else break;
    }

cout<<ans<<"\n";
}

int main(){
    fast_io;
    cout<<fixed;
    cout<< setprecision(10);
    precal();
    int t =1;
    cin>> t ;
    for (int i =1;i<=t;i++){
        // cout<< "Case #"<<i<<": ";
        solve();
    }

    return 0;

}