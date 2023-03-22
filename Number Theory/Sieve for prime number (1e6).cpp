bitset<500000001> Primes;
void SieveOfEratosthenes(int n)
{
    Primes[0] = 1;
    for (int i = 3; i <= n; i += 2) {
        if (Primes[i / 2] == 0) {
            for (int j = 3 * i; j <= n; j += 2 * i)
                Primes[j / 2] = 1;
        }
    }
}

int maximumPrimeNumberCount = 1e6+10;

void solve()
{

    SieveOfEratosthenes(maximumPrimeNumberCount);
    vector < int > prime;
 
    for (int i = 1; i <= maximumPrimeNumberCount; i++) {
        if (i == 2){
            //cout << i << ' ';
            prime.push_back(i);
        }
             
        else if (i % 2 == 1 && Primes[i / 2] == 0){
            //cout << i << ' ';
            prime.push_back(i);
        } 
    }
    //cout << endl;
    //see(prime.size());

}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);



    int ca; cin >> ca;
    int tttt = 0;
    while (ca--){
        tttt++;
        //cout << "Case :"<< tttt <<" ";
        solve();
    }
}
