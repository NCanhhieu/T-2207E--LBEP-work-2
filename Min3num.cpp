#include <stdio.h>

int main(){
	//freopen("input.txt", "r" , stdin);
     printf(" nhap  so a :");   
	int a;   // nhap num a
    scanf("%d", &a);
    printf(" nhap  so b :");
	int b;  //nhap num b
    scanf("%d", &b);
	printf(" nhap  so c :");
	int c;  //nhap num c
    scanf("%d", &c);
	int min;   
	min = a;     // tao gia tri min
    if ( min >b ) {
    	min = b;           
	} 
	   if ( min > c){ 
		   min = c;
	} 
    printf("min =  %d" , min);
   return 0;	
}
