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
    int n, s, k;
    cin>>n>>s>>k;
    vector<int> vec(k);
    for (auto &i:vec)cin>>i;
    sort(vec.begin(),vec.end());
    
    // for (auto i:vec)cout<<i<<" ";
    for (int i =0;i<=n;i++){
        int temp1 = s-i;
        int temp2 = s+i;

        if(temp1<=0)temp1 = vec[0];
        if(temp2>n) temp2 = vec[0];
        // cout<<temp1<<" "<<temp2<<endl;
        if(binary_search(vec.begin(),vec.end(),temp1)==false||binary_search(vec.begin(),vec.end(),temp2)==false){
            cout<<i<<"\n";
            break;
        }
        
    }

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