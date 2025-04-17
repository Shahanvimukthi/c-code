#include<stdio.h>
	
	int main(){
	char x;
	int p,q;
	
	printf("enter letter:");
	scanf("%c", &x);
	
	printf("enter number1:");
	scanf("%d", &p);
	
	printf("enter number2:");
	scanf("%d", &q);
	
	switch(x){
 	 case '+':
		printf("%d\n", p+q);
		break;
 	 case '-':
		printf("%d\n", p-q);
		break;
	case '*':
		printf("%.2f\n", (float) p*q);	 //integer convert to float
		break;
	case '/':
		printf("%.2f\n", (float) p/q);	//integer convert to float
		break;
	}

return 0;
} 

