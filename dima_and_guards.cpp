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
//vector of maps 
//vector<map<int,int>>vec(3);
//vec[0] is the first map


void solve (){
    int n;
    cin>>n;    
    int a,b, c,d;
    bool check = false;
    for (int i =1;i<=4;i++){
        cin>>a>>b>>c>>d;
        // if((a<c && b<d)||(a>c && b>d)){
        //     continue;
        // }
        // cout<<"here"<<i<<endl; 
        int chocmin= min(a,b);
        int juicemin = min(c,d);
        if(n>=chocmin+juicemin){
            cout<<i<<" "<<chocmin<<" "<<n-chocmin<<"\n";
            // chocmin==a?cout<<chocmin<<" "<<n-chocmin:cout<<juicemin<<" "<<n-juicemin;
            // cout<<"\n";

            check = true;
            break;

        }
    }
    if(check==false)
    cout<<-1<<'\n';   
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