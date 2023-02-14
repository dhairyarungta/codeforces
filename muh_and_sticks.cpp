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
    int len[10]={0};
    for(int i =0;i<6;i++){
        int temp ;
        cin>>temp;
        len[temp]++;
    }
    bool check =false;
    for (int i =1;i<=9;i++){
        if(len[i]>=4){
            len[i]-=4;
            check = true;
        }
    }

    if (check ==false){
        cout<<"Alien\n";
        return;
    }
    for (int i =1;i<=9;i++){
        if(len[i]==2){
            cout<<"Elephant\n";
            return;
        }
    }
    cout<<"Bear\n";
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