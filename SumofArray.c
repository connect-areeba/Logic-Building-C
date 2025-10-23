#include <stdio.h>
int main(){
	int c[6] = {1,2,3,4,5,56}, i, sum=0;
	for(i=0; i<=5; i++){
		sum = sum+c[i];
	}
		printf("%d", sum);
	
	
	return 0;
}