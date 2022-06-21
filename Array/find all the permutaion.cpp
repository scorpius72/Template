// Generation permutation

void search()
{
    if (permutation.size()==n){
        // process permutaion
    }
    else {
        for (int i = 0 ; i < n ; i++){
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(v[i]);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

// built in function 
do {
    // process permutaion
} while (next_permutation(permutation.begin(),permutation.end()));