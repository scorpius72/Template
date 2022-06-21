/// phi(m) = m (1-i/p1)(1-1/p2) ......

const int MAX = 5e6+10;
int phi[MAX];

void sievephi()
{
	int i,j;
	for (i=2;i<MAX;i++){
		if (phi[i]==0){
			phi[i] = i-1;
			for (j=i+i;j<MAX;j+=i){
				if (phi[j]==0){
					phi[j] = j;
				}
				phi[j]/= i;
				phi[j]*=(i-1);
			}
		}
	}
}
