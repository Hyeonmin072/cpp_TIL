#include <stdio.h>

int main()
{
	int y, m, d, sum;

	scanf("%d %d %d",&y, &m, &d);
	sum = y + m + d;

	if (sum % 10 == 0)
		printf("운수대통");
	else
		printf("노력하세요");

}
