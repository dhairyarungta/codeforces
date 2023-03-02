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
#define ansmod 998244353
using namespace std;
int arr[1000002]={0};
void precal(){
    ll count = 0;
    for (auto &i:arr){
        i = count;
        count++;
    }
}

void solve (){
    ll l,r;
    cin>>l>>r;
    ll numsets=0;
    ll maxsize = 1;
    int temp =l;
    while(temp<=r){
        temp*=2;
        if(temp<=r)maxsize++;
    }
    if(maxsize==1){
        cout<<maxsize<<" "<<(r-l+1)<<"\n";
        return;

    }
    // cout<<maxsize<<endl;
    ll multi = pow(2,maxsize-1); 
    ll upperlimit = r/multi;
    
    
    ll upperlimit2 = r/((multi/2)*3);

    upperlimit2<l?upperlimit2 = l-1:upperlimit2;    
     numsets = ((((maxsize-1)%ansmod)*((upperlimit2-l+1)%ansmod))%ansmod+((upperlimit-l+1)%ansmod))%ansmod;
    cout<<maxsize<<" "<<numsets<<"\n";


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