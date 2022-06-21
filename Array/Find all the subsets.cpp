// find all the possible subset of an array

for (int b=0; b < (1<<n) ; b++){ // the available subsets are (2^n)-1 
    vector < int > subset;
    for (int i=0;i<n;i++){
        if (b&(1<<i)) subset.push_back(v[i]);
    }
}

// with recursion
void search (int k)
{
    if (k == n){
        // process subset
    }
    else {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}