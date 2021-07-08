#include<stdio.h>
int main(){
	int odd_numbers=0,even_numbers=0,i=0,num;
	while(i<10){
		scanf("enter the number: %d",&num);
		if(num%2 == 0){
			even_numbers++;
		}
		else{
			odd_numbers++;
		}
		i++;
	}	
	printf("number of odd numbers are %d , even numbers are %d",odd_numbers,even_numbers);
}