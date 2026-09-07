#include <stdio.h>

int main(){
	char name[50];
	int age;
	float height;
	char grade[20];
	
	printf("Enter Your Name : ");
	scanf("%s", name);
	printf("Enter your Age : ");
	scanf("%d", &age);
	printf("What's your Height : ");
	scanf("%f", &height);
	printf("What's your grade : ");
	scanf("%s", grade);
	printf("\n Your information \n");
	printf("your name is : %s\n", name);
	printf("your age is : %d\n", age);
	printf("your height is : %f\n", height);
	printf("your grade is : %s\n", grade);
}



