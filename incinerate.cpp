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

bool cmp (int a , pair<int,int> b){
    return a<b.first;
}

void solve (){
     int n ,k;
     cin>>n>>k;
     vector<pair<int,int>> vec(n);

     //first member of pair is health
    for (auto &i:vec) cin>>i.first;
    for(auto &i:vec) cin>>i.second;

     sort(vec.begin(),vec.end());
     multimap<int, int> mp;
     for (auto [i,j]:vec)mp.insert(pair<int,int>(j,i));


     auto i = vec.begin();
    
     int total =k;
    while(i!=vec.end() && k>0){
        i  =upper_bound(vec.begin(),vec.end(),total,cmp);        
        if(i==vec.end()){
            cout<<"YES\n";
            return;
        }
        
        int minval = INT_MAX;
        for (auto iter= i;iter!=vec.end();iter++){
            minval=min(minval,(*iter).second);
        }
        k -=minval;
        total+=k;
    
     }

     cout<<"NO\n";
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