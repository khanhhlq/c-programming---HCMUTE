#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	float sum=0;
	for (float i=2; i<=n; i++){
		sum+=1/i;
	}
	printf("%.4f", sum);
}
