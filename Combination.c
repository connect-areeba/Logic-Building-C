#include <stdio.h>
int main(){
	int n, r;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter r: ");
	scanf("%d", &r);
	
	int nfact=1;
	int rfact=1;
	int nrfact=1;
	
	for(int i=1; i<=n; i++){
		nfact=nfact*i;
	}
	for(int i=1; i<=r; i++){
	rfact=rfact*i;
	}
	for(int i=1; i<=n-r; i++){
	nrfact=nrfact*i;
	}
	int ncr = nfact / (rfact*nrfact);
	printf("nCr = %d", ncr);
	return 0;
}