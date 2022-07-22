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
    if ( a+b> c && a+c > b && b+c > a){
    	int P, P2;
    	P = a +b + c;
    	P2 = P/2;
    	float S;
    	S = canbac(P2*(P2-a)*(P2-b)*(P2-c));
    	printf(" chu vi = %d \n", P);
    	printf(" dien tich = %f \n", S);
    	} else {
    		printf(" khong phai la tam giac " );
		}
	return 0;
	}
		
