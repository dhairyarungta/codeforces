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
    vector<int> vec(n);
    for (auto &i:vec)cin>>i;
    int t =0, mincost =INT_MAX;


    for (int i = 1;i<=100;i++){
        int cur = 0;
        for (int j =0;j<n;j++){
            if(i!=1 && i!=100){

                int val = min({(int)abs(vec[j]-i),(int)abs(vec[j]-i-1),(int)abs(vec[j]-i+1)});
                cur+=val;

            }
            else if(i==1){
                int val2 = min((int)abs(vec[j]-1),(int)abs(vec[j]-i-1));
                cur+=val2;
            }
            else if(i==100){
                int val3 = min((int)abs(vec[j]-1),(int)abs(vec[j]-i+1));
                cur+=val3;
            }
        }
        if(cur<mincost){
            mincost=cur;
            t=i;
        }

    }
    cout<<t<<" "<<mincost<<"\n";
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