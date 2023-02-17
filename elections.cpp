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
    int n ,m;
    cin>>n>>m;
    vector<vector<int>>vec(m);
    for (int i =0;i<m;i++){
        vector<int>temp(n);
        for (auto &j:temp){
            cin>>j;
        }
        vec[i]=temp;
    }


    vector<int> wins(n+1,0);
    for (int i =0;i<m;i++ ){
        int index=0, maxvotes=INT_MIN;
        for (int j = 0;j<n;j++){
            if(maxvotes<vec[i][j]){
                index =j;
                maxvotes= vec[i][j];
            }
        }
        wins[index+1]++;
    }

    int finalwinner , maxval =INT_MIN;
    // for (auto i:wins)cout<<i<<" "; 
    for (int i =1;i<=n;i++){
        if(wins[i]>maxval){
            maxval = wins[i];
            finalwinner=i;
        }
    }

    cout<<finalwinner<<"\n";

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