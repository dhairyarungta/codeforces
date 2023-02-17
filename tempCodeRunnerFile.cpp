
    vector<int> wins(n+1,0);
    for (int i =0;i<m;i++ ){
        int index=0, maxvotes=INT_MIN;
        for (int j = 0;j<n;j++){
            if(maxvotes){
                index =i;
                maxvotes= vec[i][j];
            }
        }
        wins[index+1]++;
    }

    int finalwinner , maxval =INT_MIN;
    for (int i =1;i<=n;i++){
        if(wins[i]>maxval){
            maxval = wins[i];
            finalwinner=i;
        }
    }

    cout<<finalwinner<<"\n";
