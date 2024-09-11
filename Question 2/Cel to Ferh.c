#include<stdio.h>
int main(){
	float C,F,formulae;
	
//	input Temperature in Celcius
	printf("The Temperature in Celcius:");
	scanf("%f",&C);
	
//	Conversion of Celcius to Fahrenheit via formulae
	formulae=F=((C*9)/5)+32;
	
//	Fahrenheit is being printed
	printf("The Temperature in Fahrenheit=%.2f",F);
}
