#include<stdio.h>
int main() {
	int i=0, a[100];
	int max = a[0];
	int n = 3;
	while (i < n ) {
		if (i == 0) {
			printf("Enter first number : ");
			scanf_s("%d", &a[i]);
			i++;
		}
		else if (i == 1) {
			printf("Enter second number : ");
			scanf_s("%d", &a[i]);
			i++;
		}
		else if (i == 2) {
			printf("Enter third number : ");
			scanf_s("%d", &a[i]);
			i++;
		}
	}
	for (i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("The most valuable number is : %d",max);
	return 0;
}