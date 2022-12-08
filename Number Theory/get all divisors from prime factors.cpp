// this is the recursion section
void fn (vector < pair < int , int > > &v , int node , int cur)
{
    if (node>=v.size()){
        m[cur]++; // cur is the divisor
        return;
    }
 
    int c = 1;
    for (int x=0;x<=v[node].second;x++){
        fn(v,node+1,c*cur);
        c*= v[node].first;
        
    }
}

// this is the part of main section
    for (int x=0;x<n;x++){
        vector < pair < int,int > > demo;
        for (int i=0;i<prime.size();i++){
            if (v[x]%prime[i]) continue;
            int c = 0;
            while (v[x]%prime[i]==0){
                c++;
                v[x]/=prime[i];
            }
            demo.push_back({prime[i],c});
        }
        if (v[x]>1){
            demo.push_back({v[x],1});
        }
        if (demo.size()){
            fn(demo,0,1);
        }
    }
