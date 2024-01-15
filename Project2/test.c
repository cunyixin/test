#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
int main()
{
	//long long num1, num2, sum;
	//scanf("%lld %lld %lld", &num1, &num2, &sum);
	//printf("%lld", num2);
	/*printf('\'');
	printf("\"");*/
	/*printf("\a");*/
	//int a = 10;
	//&a;
	//printf("%zd", sizeof(int*));
	//return 0;
	//int i = 0;
	//while (i < 100) {

	//	i++;
	//	printf("%d \n", i);
	//}
	//int n = 1;
	//int m = 2;
	//switch (n)
	//{
	//case 1:m++;
	//case 2:n++;
	//case 3:
	//	switch (n)
	//	{
	//	case 1: n++;
	//	case 2: m++; n++;
	//	default:
	//		break;
	//	}
	//case 4: m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("%d %d", m , n);
	int i = 1;
	while (i <= 10) 
	{
		i++;
		if (5 == i)
			continue;

		printf("%d ",i);
	}

	return 0;
}