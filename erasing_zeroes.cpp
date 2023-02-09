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
    string s;
    cin>>s;
    int  n =s.size();

    int firstindex = INT_MAX,lastindex =INT_MIN;
    for (int i =0;i<n;i++){
        if(s[i]=='1'){
            firstindex=min(firstindex,i);
            lastindex= max(lastindex,i);
        }
    }

    if(firstindex==INT_MAX){
        cout<<0<<"\n";
        return ;
    }
    int zerocount = 0;
    for(int i =firstindex;i<=lastindex;i++){
        if(s[i]=='0')
            zerocount++;
    }
    cout<<zerocount<<"\n";
    // cout<<firstindex<<" "<<lastindex<<endl;
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