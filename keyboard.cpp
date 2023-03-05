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
    string m ,s;
    cin>>m>>s;
    string ans = "";
    vector<string>vec ={"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
    vector<pair<ll,ll>>pos(257);
    for (auto &i:pos){
        i.first=0;
        i.second=0;
    }

    for (int i =0;i<vec.size();i++){
        for (int j =0 ;j<vec[i].size();j++){
            pos[vec[i][j]]={i,j};
        }
    }

    if(m=="R"){
        for (auto i:s){
            ans.push_back(vec[pos[i].first][pos[i].second-1]);
        }
    }
    else {
        for (auto i:s){
            ans.push_back(vec[pos[i].first][pos[i].second+1]);
        }
    }
    cout<<ans;
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