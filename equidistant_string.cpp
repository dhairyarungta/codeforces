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
    string s, t;
    cin>>s>>t;
    int dist = 0;
    set<int> index ;
    
    for (int i =0;i<s.size();i++){
        if(s[i]!=t[i])
        {
            dist++;
            index.insert(i);
        }
    } 
    // cout<<dist<<endl;   
    // cout<<index.size()<<endl;

    if(dist%2==1){
        cout<<"impossible\n";
        return;
    }
    string ans = s;
    // cout<<ans;
    for (int i =0;i<dist/2;i++){
        auto iter = index.begin();
        // cout<<*iter<<" ";
        ans[*iter]=t[*iter];
        index.erase(*iter);
    }

    cout<<ans<<"\n";
    // cout<<dist<<endl;

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