#include <stdio.h>
#include <math.h>
int main(){
	unsigned long long int n; scanf("%llu", &n);
	unsigned long long int k=sqrt(n);
	if ((k * k == n) && n>=0) printf("YES"); else printf("NO");
}
