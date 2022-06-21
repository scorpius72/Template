// coin change problem and which coins are being used here
// amra minimun koyta coin use kore akta number make korte pari

// let we want to find that we can make want_number from here

int first[N];

// main section start from here
value[0];
for (int x=1;x<=want_number;x++){
    value[x] = INF;
    for (auto c:coins){
        if (x-c>=0 && value[x-c]+1<value[x]){
            value[x] = value[x-c]+1;
            first[x] = c;
        }
    }
}

// find which coins is being used here
while (n>0){
    cout << first[n] << " ";
    n-=first[x];
 }
