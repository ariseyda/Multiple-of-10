#include<stdio.h>

//Kullan�c�n�n girdi�i say�n�n 10 un kat� olup olmad���n� kontrol et.
//A computer program receives an integer and displays whether the entered number is multiple of 10 or not.

int main(){
	
	int n;
	
	printf("Please enter an integer:");
	scanf("%d",&n);
	

		
		if(n%10==0){
		
		printf("The entered number is multiple of 10.");
	}
	
		else 
		 printf("The entered number is not multiple of 10.");
		

	

	
	return 0;
}
