cout<<ans<<endl;
    for(int i=mxi+1;i<n;i++){
        ll x=1<<t[i];
        ans+=x;
        int y=ctz(ans);
        if(y<t[i]){
            while(y<t[i]){
                ll z=1<<y;
                ans+=z;
                y=ctz(ans);
            }
        }
    }