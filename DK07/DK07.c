#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c; scanf("%lf%lf%lf", &a, &b, &c);
	double delta=b*b-4*a*c;
	if (a==0){
		if (b==0){
			if (c==0) printf("WOW");
			else printf("NO");
		}
		else printf("%.2lf", -c/b);
	}
	else {
		if (delta < 0) printf("NO");
		else if (delta == 0) printf("%.2lf ", -b/2*a);
		else {
			float x1 = (-b + sqrt(delta))/(2*a);
			float x2 = (-b - sqrt(delta))/(2*a);
			if (x1 > x2) printf("%.2lf %.2lf", x2,x1);
			else printf("%.2lf %.2lf", x1,x2);
		}
	}
}
