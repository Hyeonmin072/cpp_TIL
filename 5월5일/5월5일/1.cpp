#include <stdio.h>

int main()
{
	/*int a, b, c, d; 분수 크기 비교
	double e, f;
	scanf("%d %d %d %d", &a, &b, &c, &d);


	e = ((double)a / b);
	f = ((double)c / d);

	if (e > f)
		printf("1");
	else if (e == f)
		printf("0");
	else
		printf("-1");
	return 0;*/

	/*int y1, y2, y3; 지하차도
	scanf("%d %d %d", &y1, &y2, &y3);
	int crash;
	if (y1 < 168) {
		printf("CRASH %d", y1);
	}
	else if (y2 < 168) {
		printf("CRASH %d", y2);
	}
	else if (y3 < 168) {
		printf("CRASH %d", y3);
	}


	else
		printf("NO CRASH");
	return 0;*/

	/*int m, n; 약수 판별
	scanf("%d %d", &m, &n);
	if (m == 0)
		printf("%d !| %d", m, n);
	else if (n % m == 0)
		printf("%d | %d", m, n);
	else
		printf("%d !| %d", m, n);

	return 0;*/

	/*int a; ATM 기
	double b;
	double result;
	scanf("%d %lf", &a, &b);
	double sum = b - 0.5;
	result = sum - a;

	if ((double)a == b || a % 5 != 0 || a > b || result < 0)
		printf("%.2lf", b);
	else
		printf("%.2lf", result);

	return 0;*/

	//int a, b, c; 중간에 위치한 수 출력하기
	//int temp;
	//scanf("%d%d%d", &a, &b, &c); //9 8 10
	//if (a < b) {
	//	temp = a;
	//	a = b;
	//	b = temp;
	//}
	//if (a < c) {
	//	temp = a;
	//	a = c;
	//	c = temp;
	//}
	//if (b < c) {
	//	temp = b;
	//	b = c;
	//	c = temp;
	//}
	//printf("%d", b);
	//return 0;

	/*double a; 팀 구성하기
	int b, c;
	int i = 0;
	scanf("%lf%d%d", &a, &b, &c);
	if (a <= 4.5 && b >= 150 && c >= 200) {
		i = 1;
		printf("Wide Receiver ");
	}
	if (a <= 6.0 && b >= 300 && c >= 500) {
		i = 1;
		printf("Lineman ");
	}
	if (a <= 5.0 && b >= 200 && c >= 300) {
		i = 1;
		printf("Quarterback ");
	}
	if (i == 0)
		printf("No positions");

	return 0;*/

	/*int a, b, temp; 두 수 사이의 수 출력

	scanf("%d%d", &a, &b);

	if (b < a) {
		temp = b;
		b = a;
		a = temp;
	}

	for (int i = a; i <= b; i++)
		printf("%d ", i);
	return 0;*/


	/*int a = 0; 끼리끼리합
	int b = 0;
	int c = 0;
	int input =0;

	for (int i = 0; i < 7; i++) {
		scanf("%d", &input);

		if (input < 10)
			a += input;
		else if (input >= 10 && input < 100)
			b += input;
		else
			c += input;
	}
	printf("%d %d %d", a, b, c);
	return 0;*/
}
