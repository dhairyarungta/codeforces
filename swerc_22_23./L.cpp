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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int q ;
    cin>>q;
    vector<pair<int,int>>vec(q);
    for(auto &[i,j]:vec){
        cin>>i;
        cin>>j;
    }

        int plus = 0, minus =0;
        for (auto i :s){
            if(i=='+')plus++;
            else minus++;
        }   
    // cout<<plus<<" "<<minus;
    for (int i =0;i<q;i++){
        ll  a = min(vec[i].first,vec[i].second);
        ll  b = max(vec[i].first,vec[i].second);
        if(plus==minus){
            cout<<"YES\n";
            // return;
            continue;
        }
        int dif =abs(plus-minus);
        // cout<<a<<" "<<b;
        if(b==a && plus!=minus){
            cout<<"NO\n";
            continue;
        }


        ll valdiff = a*dif;
        ll valdiff2 = b*dif;

        // cout<<valdiff<<" "<<b-a<<endl;
        if((valdiff)%(b-a)==0 && (valdiff/(b-a))<=min(plus,minus)){
            cout<<"YES\n";
            
        }
        // else if(valdiff2%(b-a)==0){
        //     cout<<"YES\n";
            
        // }

        else {
            cout<<"NO\n";
        }


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