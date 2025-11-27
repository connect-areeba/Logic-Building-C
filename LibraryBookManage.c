#include<stdio.h>
struct Books{
	char title[50];
	char author[20];
	float price;
	int copies;
};

void inputBooks(struct Books *b, int num){
	
	printf("Enter title of book %d: ", num);
	scanf(" %[^\n]", b->title);
	
	printf("Enter author name: ");
	scanf(" %[^\n]",b->author);
	
	printf("Enter  price: ");
	scanf("%f", &b->price);
	
	printf("Enter no of copies: ");
	scanf("%d", &b->copies);
}

struct Books* highestPrice(struct Books b[], int n){
	
	int top = 0;
	for(int i=1; i<n; i++){
		if(b[i].price > b[top].price)
		top = i;
	}
	return &b[top];
}

void lowCopies(struct Books b[], int n){
	for(int i=0; i<n; i++){
		if(b[i].copies < 5)
		printf("\n%s has only %d copies", b[i].title, b[i].copies);
	}
}

int main(){
	struct Books b[3];
	
	for(int i=0; i<3; i++){
		inputBooks(&b[i], i+1);
		printf("\n");
	}
	
	struct Books *MostExpensive = highestPrice(b,3);
	printf("\n=====MOST EXPENSIVE BOOK=====\n");
	printf("\nMost expensive books: %s -> Rs: %.2f\n", MostExpensive->title, MostExpensive->price);
	
	lowCopies(b,3);
	
	return 0;
	
}














