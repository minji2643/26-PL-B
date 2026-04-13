#include <stdio.h>

int calcTriangleArea(int a, int b);
int calcRectangleArea(int a, int b);

int main() {
	int a,b;
	scanf("%d %d", &a, &b);

	int triArea = calcTriangleArea(a,b);
	int recArea = calcRectangleArea(a,b);
	printf("triangle Area = %d\n", triArea);
	printf("rectangle Area = %d\n", recArea);
}
