#define mod             998244353
const int N = 2e3 + 5;
ll fact[N], invf[N];
 
/// Bigmod of power(a,b)
ll qexp(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
 
 
/// inverse factorial in O(n)
void precompute()
{
    fact[0]=1;
    for(int i = 1 ; i<N ; i++){
        fact[i] = fact[i-1]*i%mod;
    }
    invf[N-1]=qexp(fact[N-1],mod-2);
    for(int i=N-2;i>=0;i--)
    {
        invf[i]=(i+1)*invf[i+1]%mod;
        /// invf[i] = (i+1) * ( 1/(i+1)! ) = 1/i!
    }
}
ll nck(ll n, ll k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * invf[k] % mod * invf[n - k] % mod;
}
