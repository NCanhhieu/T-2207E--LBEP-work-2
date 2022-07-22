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
	if ( a > b) {
		if ( a > c ) {
			printf ( "max = %d", a);
		} else {
			printf ( "max = %d", c);
		}
	} else {
		if ( b > c ) {
			printf ( "max = %d", b);
		} else {
			printf ( "max = %d", c);
		}
	}
   return 0;	
}
