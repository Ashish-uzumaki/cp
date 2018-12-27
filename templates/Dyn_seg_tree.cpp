for(lli i=0;i<m;i++){
        cin>>l>>r>>x;
        l--;r--;x--;
        while(1){
            set<lli>::iterator itr = v.lower_bound(l);
            if (itr == v.end() || *itr > r) break;
            if (*itr != x)
                    a[*itr] = x;
            v.erase(itr);
        }
        v.insert(x);
    }
    //356A
