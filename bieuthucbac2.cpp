#include <stdio.h>
#define EPSILON 0.0000000001f

using namespace std;
double fabs ( double K ) {
	if ( K < 0 ) {
		K = 0 - K;	
	}
	return K;
}
double canbac(int N){
	double kq = 1.0f;
    while (( fabs( kq * kq - N) / N )>= EPSILON ){
		kq = (N / kq  - kq) / 2 + kq;
	
}
	return kq;
}
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
	   
	if (a == 0) {
	    if ( b == 0 )
	    { 	if ( c == 0) 
			{  printf("vo so nghiem"); 
			}
			else {
			   printf("vo nghiem"); 
			}
		} else  { 
		    double x0;
		    x0 = -c/b;
		    printf("x0 =  %lf \n" , x0);
		}
		}
	else {
	int delta;
	delta = b*b - 4*a*c;     // tinh delta
    if ( delta > 0 ) {
    float x1, x2;
	x1 = (-b - canbac(delta))/(2*a);
	x2 = (-b + canbac(delta))/(2*a);
    printf("x1 =  %f \n" , x1);
    printf("x2 =  %f \n" , x2);
   } else if ( delta > 0 ){
   	printf("vo nghiem");
   	printf("a = %d va b = %d", a,b);
   } else {
   	float x;
   	x = -b/(2*a);
   	printf("x =  %f \n" , x);
   }
}
   return 0;	
}
