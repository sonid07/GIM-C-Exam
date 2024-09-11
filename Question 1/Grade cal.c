#include<stdio.h>
int main(){
	int per;
	char grade;
	printf("Enter your Score:");
	scanf("%d",&per);
	grade=(per>=90)?'A':(per>=80)?'B':(per>=70)?'C':(per>=60)?'D':(per>=40)?'E':'F';
	printf("Your Grade is:%c\n",grade);
	
	switch(grade){
		case 'A':
			printf("Excellent work\n");
			break;
			case 'B':
			printf("Well Done\n");
			break;
			case 'C':
			printf("Good job\n");
			break;
			case 'D':
			printf("You passed, but you could do better\n");
			break;
			case 'E':
			printf("Need to work Hard\n");
			break;
			case 'F':
			printf("Sorry, you failed\n");
			break;
			default:
			printf("Invalid");
			break;	
	}
	if(grade!='F'){
		printf("Congratulations! You are eligible for the next level");
	}
	else{
		printf("Please try again next time");
	}
}
