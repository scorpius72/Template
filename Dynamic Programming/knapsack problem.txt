// knapsack problems
// we can only choose the values that are available in the weight array and find the maximum value that we can make using only those weight

possible[0] = true;
for (int k=1;k<=n;k++){
    for (int x=Weight_want;x>=0;x--){
        if (possible[x]) possible[x+w[k]] = true; // w is the weight array
    }
}