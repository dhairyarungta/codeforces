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
    cin>> n;
    vector<int>vec(n+1);
    for (int i =1;i<=n;i++){
        int temp ;
        cin>> temp;
        vec[temp]=i;
    }
    for(int i=1;i<=n;i++)cout<<vec[i]<<" ";

    cout<<"\n";
}

void solve1 (){
    int n ;
    cin>>n;
    vector<int>vec(n+1);
    vec[0]=0;

    for (int i =1;i<=n;i++)cin>>vec[i];
    vector<int>ans(n+1,0);

    for (int i=1;i<=n;i++){
        ans[vec[i]]=i;
    }
    for (int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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