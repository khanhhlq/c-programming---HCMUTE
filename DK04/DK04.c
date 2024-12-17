#include <stdio.h>
#include <math.h>
int main(){
	double n; scanf("%lf", &n);
	int b = (int)n;
	double c = n-b;
	if (b<0){
		if (c<=-0.5) printf("%d", b-1); else printf("%d", b);
	} else {
		if (c>=0.5) printf("%d", b+1); else printf("%d", b);
	}
}
