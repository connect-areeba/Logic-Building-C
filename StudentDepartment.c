#include <stdio.h>
#include <string.h>
struct department{
	char depname[50];
	char building[50];
};
struct Student{
	char name[20];
	int Roll;
	float Cgpa;
	struct department dpt;
};

void inputStudent(struct Student *stu, int n){
	
	printf("Enter name of student %d: ", n);
	scanf(" %[^\n]", stu->name);
	
	printf("Enter Roll num: ");
	scanf("%d", &stu->Roll);
	
	printf("Enter Cgpa: ");
	scanf("%f", &stu->Cgpa);
	
	printf("Enter department: " );
	scanf(" %[^\n]", stu->dpt.depname);
	
	printf("Enter building: ");
	scanf(" %[^\n]", stu->dpt.building);
}

struct Student* HighestCgpa(struct Student stu[], int n){
	int top = 0;
 	for(int i=1; i<n; i++){
		if(stu[i].Cgpa > stu[top].Cgpa)
		top = i;
	}
	return &stu[top];
}

void sameDepartment(struct Student stu[], int n){
	
	printf("\n=======Student of Same Department======\n\n");
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(stu[i].dpt.depname, stu[j].dpt.depname) == 0){
				printf("%s and %s are in %s department!\n", stu[i].name, stu[j].name, stu[i].dpt.depname);
			}
		}
	}
}

int main(){
	struct Student stu[3];
	
	for(int i=0; i<3; i++){
		inputStudent(&stu[i],i+1);
		printf("\n");
	}
	
	struct Student *best = HighestCgpa(stu,3);
	printf("\n======BEST STUDENT======\n\n");
	printf("Student with highest Cgpa is: %s -> (%.2f)\n", best->name, best->Cgpa);
	
	sameDepartment(stu,3);
	 
	 return 0;
}



















