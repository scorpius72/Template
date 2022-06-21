// after finding all the prime number range (sqrt(n)) then

    		int ans = 1;
		int k = n;
		
		for (int x=0;prime[x]*prime[x]<=n && x<(ll)prime.size() && n;x++){
			int c = 0;
			if (prime[x]>=k) break;
			while (n%prime[x]==0){
				c++;
				n/=prime[x];
			}
			ans*=(c+1);
		}
    
    		if (n>1){
			ans*=2;
		}
    
   //here ans is the number of factors of n//
    
    
