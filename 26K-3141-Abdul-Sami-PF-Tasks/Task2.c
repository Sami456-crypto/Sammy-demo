#include <stdio.h>
int main(){
	int age;
	float temprature;
	double percentage;
	char grade[20];
	printf("Enter your Age : ");
	scanf("%d", &age);
	printf("What's Temprature : ");
	scanf("%f", &temprature);
	printf("Enter your Percentage : ");
	scanf("%f", &percentage);
	printf("Enter your grade : ");
	scanf("%s", grade);
	printf("\n Your information! \n\n");
	printf("your Age is : %d\n", age);
	printf("Temprature is : %f\n", temprature);
	printf("your percentage is : %f\n", percentage);
	printf("your grade is : %s\n", grade);
}

