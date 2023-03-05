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
     ll a, b, c, d;
     cin>>a>>b>>c>>d;

    if(b==d){
        cout<<b<<"\n";
        return;
    }

    for (int i  =0;i<1000000;i++){
        if(b==d){
            cout<<b<<endl;
            return;

        }
        if(b<d)b+=a;
        else d+=c;

    }
    cout<<-1<<endl;
    



    //  if(abs(dif1)<=abs(dif2)){
    //     for (int i =1;i<abs(dif1);i++){
    //         ll temp1 =b+i*a;
    //         ll temp2 = d+(abs(dif1)-i)*c;
    //         if(temp1==temp2){
    //             cout<<temp1;
    //             return;
    //         }
    //     }
    //  }
    //  else{
    //     cout<<-1<<"\n";
    //  }


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