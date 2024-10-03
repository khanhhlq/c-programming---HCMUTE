#include <stdio.h>

int main() {
	int n, tong=0;
	scanf("%d", &n);
	
	for (int i=1; i<=n; i++){
		int tam=1;
		for (int j=1; j<=i; j++) tam *=j;
		tong+=tam;
	}
	
	printf("%d", tong);
}
