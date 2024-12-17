#include <stdio.h>
int main(){
	float a, b;
	char c;
	scanf("%f %c %f",&a,&c,&b);
	if (c=='+') printf("%.2f", a+b);
	if (c=='-') printf("%.2f", a-b);
	if (c=='*') printf("%.2f", a*b);
	if (c=='/'){
		if (b==0) printf("Math Error");
		else printf("%.2f", a/b);
	}
}
