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
	int max;   
	max = a;     // tao gia tri max
    if ( max < b ) {
    	max = b;           
	} 
	   if ( max < c){ 
		   max = c;
	} 
    printf("max =  %d" , max);
   return 0;	
}
