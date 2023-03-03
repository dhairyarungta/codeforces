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
void solve(){
    ll n;
    cin>>n;
    vector<int> a(n);
    for (auto &i:a)cin>>i;

    ll ans =0 ;
    priority_queue<ll>pq;
    for (int i =0;i<n;i++){
      
        if(a[i]==0){
            if(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
        }
        else{
            pq.push(a[i]);
        }

    }


    // for (auto iter = a.begin();iter!=a.end();iter++){
    //     if(*iter==0){
    //         auto it = max_element(a.begin(),iter);
    //         if(*it>0){
    //             ans+=*it;                
    //             // a.erase(it);
    //             *it=INT_MIN;
    //         }
    //     }
    // }
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