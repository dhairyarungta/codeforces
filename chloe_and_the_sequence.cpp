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

void solve (){
     ll n, k;
     cin>>n>>k;
     if(k%2==1){
        cout<<1<<"\n";
        return;
     }

     ll maxval= pow(2,(double)n);
     ll curval = k%(ll)maxval;
     if(curval==0){
        cout<<n;
        return;

     }
     ll temp = 4;
    // cout<<curval<<endl;
     for (int i =2;i<=n;i++){
        
        ll start = pow(2,i-1);
        // for (int j =0;j<=(ll)maxval;j++){
        //     if(start+(j*temp)==curval){
        //         cout<<i;
        //         return;

        //     }
        // }
        if(k%temp==start){
            cout<<i;
            return;
            
        }
        temp*=2;
     }

}

int main(){
    fast_io;
    cout<<fixed;
    cout<< setprecision(10);
    precal();
    int t =1;
    // cin>> t ;
    for (int i =1;i<=t;i++){
        // cout<< "Case #"<<i<<": ";
        solve();
    }

    return 0;

}