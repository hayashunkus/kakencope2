#include <stdio.h>

/*int main(void)
{
	int a, b;
	scanf_s("%d  %d", &a, &b);
	if (a > b) printf("%d\n", a);
	else printf("%d\n", b);

	return 0;

}*/
//1-1

/*int main(void)
{
	int n, i, s;
	scanf_s("%d", &n);
	if (n < 0) {
		printf("error\n");
		return 0;
	}
	s = 1;
	for (i = 1; i <= n; i++) s = s * i;
	printf("%d\n", s);
	return 0;
}*/
//1-2

/*int main(void)
{
	int n;
	for (; ; ) {
		scanf_s("%d", &n);
		if (n == 0) return 0;
		else if (n < 0) printf("negative\n");
		else printf("positive\n");
	}
}*/
//1-3

/*int main(void)
{
	int i;
	i = 10;
	printf("i=%d\n", i);
	printf("i=%d\n", i++);
	printf("i=%d\n", i);
	printf("i=%d\n", ++i);
	printf("i=%d\n", i);
	printf("i=%d\n", i--);
	printf("i=%d\n", i);
	printf("i=%d\n", --i);
	printf("i=%d\n", i);
	return 0;
}*/
//1-4

/*int main(void)
{
	int a, b, c, d, x ;
	float y;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &x);
	y =  ((2 * a + 3 * b) * x / 5.0) + ((7 * c - d) / 3.0);
	printf("y=%.6f\n", y);
	return 0;

}*/
//1-5

/*void printDate(int year, int month, int day)
{
	printf("%d”N@%dŒŽ@%d“ú\n", year, month, day);
}
int main(void)
{
	printDate(2023, 12, 27);
	return 0;

}*/
//1-6