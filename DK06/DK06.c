#include <stdio.h>
int main(){
	double a, b;
	scanf("%lf%lf", &a, &b);
	if (a==0 && b!=0) printf("NO");
	else if (a==0 && b==0) printf("WOW");
	else printf("%.2lf", (double)-b/a);
}
