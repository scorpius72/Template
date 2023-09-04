struct dsu{
    vector<int> p, lvl;

    dsu(int n){
        p.resize(n);
        lvl.assign(n, 0);
        iota(all(p), 0);
    }

    int get(int i){
        if(i == p[i]) return i;
        return p[i] = get(p[i]);
    }

    bool unite(int a, int b){
        a = get(a);
        b = get(b);
        if(a == b){
            return false;
        }
        if(lvl[a] < lvl[b])swap(a, b);
        p[b] = a;
        if(lvl[a] == lvl[b]){
            ++lvl[a];
        }
        return true;
    }

    bool reachable(int a, int b){
        return get(a) == get(b);
    }
};


// main fn
dsu graph(n);
