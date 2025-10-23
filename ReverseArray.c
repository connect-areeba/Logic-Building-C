#include<stdio.h>
int main(){
     int a[5], i;
     for(i=0; i<=4; i++){
	 printf("\nEnter element no %d:", i+1); 
	 scanf("%d", &a[i]);
	 }
	 for(i=4; i>=0; i--){
	
	 printf("%d ", a[i] );
     }
     return 0;

}