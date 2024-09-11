#include<stdio.h>
int main(){
	int num,i;
	
//	Input of number from user
	printf("Enter any number:");
	scanf("%d",&num);
	while(num>=1){
			if(num%2!=0){
				printf("%d\n",num);
			}
			num--;
	}
}
