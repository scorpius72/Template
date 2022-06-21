// this is for finding the prime number //

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

// this must be in the global section // this is the range

int maximumPrimeNumberCount = 1e6+10;

// now in integer main section

SieveOfEratosthenes(maximumPrimeNumberCount);
    vector < int > prime;
 
    for (int i = 1; i <= maximumPrimeNumberCount; i++) {
        if (i == 2){
            cout << i << ' ';
            prime.push_back(i);
        }
             
        else if (i % 2 == 1 && Primes[i / 2] == 0){
            cout << i << ' ';
            prime.push_back(i);
        } 
    }
    cout << endl;
    see(prime.size());
    
