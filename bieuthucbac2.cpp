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
	int delta;   
	delta = b*b - 4*a*c;     // tinh delta
    if ( delta > 0 ) {
    float x1, x2;
	x1 = (-b - canbac(delta))/2;
	x2 = (-b + canbac(delta))/2;
    printf("x1 =  %f \n" , x1);
    printf("x2 =  %f \n" , x2);
   } else if ( delta < 0 ){
   	printf("vo nghiem");
   } else {
   	float x;
   	x = -b/(2*a);
   	printf("x =  %f \n" , x);
   }
   return 0;	
}
