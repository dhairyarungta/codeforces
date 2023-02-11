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
    cin>>n;

    int twentyfive = 0, fifty= 0,hundred=0;
    while(n--){
        int temp ;
        cin>>temp;

        switch (temp)
        {
        case 25:
            twentyfive++;
            break;
        case 50: 
            fifty++;
            break;
        case 100: 
            hundred++;
            break;
        }

        int change =  temp-25;
        switch (change)
        {
        case 0:
            break;
        
        case 25:
        if(twentyfive<=0){
            cout<<"NO"<<"\n";
            return;
        }
        else {
            twentyfive--;
        }
            break;

        case 75:
        if(fifty>=1 && twentyfive>=1){
            fifty--;twentyfive--;
        }   
        else if(twentyfive>=3){
            twentyfive-=3;
        }    
        else {
            cout<<"NO"<<"\n";
            return;
        }
            break;
        }


    }
    cout<<"YES"<<"\n";
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