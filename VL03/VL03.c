#include <stdio.h>
int main(){
	int n, sum=0; scanf("%d", &n);
	for (int i=2; i<=n; i++) sum+=i;
	printf("%d", sum + 2*n);
}
