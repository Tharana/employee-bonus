#include<stdio.h>
int main(){

	double basic, bonus;
	int empno;

		printf("Input the Emp No,-1 to exit: ");
                scanf("%d", &empno);


	while(empno != -1){

		printf("Input the Salary: ");
		scanf("%lf", &basic);



	if(basic <= 100000){

		bonus = (basic*75)/100;
		printf("Employee Number: %d\n", empno);
		printf("Bonus amount is %.2lf\n", bonus);
	}

	else if(basic > 100000){

		bonus = (basic*50)/100;
		printf("Employee Number: %d\n", empno);
		printf("Bonus amount is %.2lf\n", bonus);
	}
	printf("Input the Emp No,-1 to exit: ");
	scanf("%d", &empno);

	}
	return 0;
}
