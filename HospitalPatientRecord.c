#include<stdio.h>
#include<string.h>
struct address{
	int street;
	char city[20];
	int zipcode;
};
struct patient{
	char name[20];
	int age;
	char desease[20];
	struct address add;
};

void inputpatient(struct patient *p, int n){
	printf("Enter details of patient %d\n", n);
	printf("Name: ");
	scanf(" %[^\n]", p->name);
	
	printf("Age: ");
	scanf("%d", &p->age);
	
	printf("Desease: ");
	scanf(" %[^\n]", p->desease);
	
	printf("Street: ");
	scanf("%d",&p->add.street);
	
	printf("city: ");
	scanf(" %[^\n]",p->add.city);
	
	printf("Zipcode: ");
	scanf("%d", &p->add.zipcode);
}

struct patient* Maxage(struct patient p[], int n){
	int Maxage = 0;
	for(int i=1;i<n;i++){
		if(p[i].age > p[Maxage].age){
			Maxage = i;
		}
	}
	return &p[Maxage];
}

void samecity(struct patient p[], int n){
	printf("\n=====PATIENTS OF SAME CITY=====\n\n");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(p[i].add.city , p[j].add.city)==0){
				printf("%s and %s live in same city %s!", p[i].name, p[j].name, p[i].add.city);
			}
		}
	}
}

int main(){
	struct patient p[3];
	for(int i=0; i<3; i++){
		inputpatient(&p[i],i+1);
		printf("\n");
	}
	struct patient* Maxp = Maxage(p,3);
	printf("\n=====PATIENT WITH MAX AGE=====\n\n");
	printf("Patient %s has Max age -> %d", Maxp->name, Maxp->age);
	
	samecity(p,3);
	
	return 0;
	
}








































