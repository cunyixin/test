#define _CRT_SECURE_NO_WARNINGS 1
//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	//long long num1, num2, sum;
//	//scanf("%lld %lld %lld", &num1, &num2, &sum);
//	//printf("%lld", num2);
//	/*printf('\'');
//	printf("\"");*/
//	/*printf("\a");*/
//	//int a = 10;
//	//&a;
//	//printf("%zd", sizeof(int*));
//	//return 0;
//	//int i = 0;
//	//while (i < 100) {
//
//	//	i++;
//	//	printf("%d \n", i);
//	//}
//	//int n = 1;
//	//int m = 2;
//	//switch (n)
//	//{
//	//case 1:m++;
//	//case 2:n++;
//	//case 3:
//	//	switch (n)
//	//	{
//	//	case 1: n++;
//	//	case 2: m++; n++;
//	//	default:
//	//		break;
//	//	}
//	//case 4: m++;
//	//	break;
//	//default:
//	//	break;
//	//}
//	//printf("%d %d", m , n);
//	//int i = 1;
//	//while (i <= 10) 
//	//{
//	//	i++;
//	//	if (5 == i)
//	//		continue;
//
//	//	printf("%d ",i);
//	//}
//	//char ch;
//	//scanf("%c", &ch);
//	//int i, j;
//	//int n = 3;
//	//for (i = 1; i <= n; i++) 
//	//{
//	//	for (j = 0; j < n - i; j++)
//	//		printf(" ");
//	//	for (j = 0; j < 2 * i - 1; j++) 
//	//		printf("%c", ch);
//	//		printf("\n");
//	//}
//	//for (i = 1; i <n; i++)
//	//{
//	//	for (j = 0; j <  i; j++)
//	//		printf(" ");
//	//	for (j = 0; j < 2 *(n - i )- 1; j++)
//	//		printf("%c", ch);
//	//		printf("\n");
//	//}
//	 long long factorial(int n) {
//		if (n == 0 || n == 1) {
//			return 1;
//		}
//		else {
//			return n * factorial(n - 1);
//		}
//	}
//
//	 int main() {
//		 int i;
//		 long long sum = 0;
//
//		 for (i = 1; i <= 20; i++) {
//			 sum += factorial(i);
//		 }
//
//		 printf("Sum of factorials: %llu\n", sum);
//		 return 0;
//	 }
//}
//#include <stdio.h>
//
//long long factorial(int n) {
//    long long result = 1;
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    int n = 20;  // 最大的数字
//    long long sum = 0;
//    int i = 0;
//
//    for (int i = 1; i <= n; i++) {
//        sum += factorial(i);
//    }
//
//    printf("Sum of factorials: %lld\n", sum);
//
//    return 0;
//}
#include <stdio.h>
//int main() {
//	long long i = 1;
//	long long n = 0;
//	long long result = 1;
//	scanf("%lld", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		result = result * i;
//	}
//	printf("%lld", result);
//	return 0;
//}
//long long sum(int n) {
//	long long sum = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		sum = sum * i;
//	}
//	return sum;
//}
//int main() {
//	int i = 1;
//	int n = 20;
//	long long result = 0;
//	for (i = 1; i <= n; i++) {
//		result = result + sum(i);
//	}
//	printf("%lld\n", result);
//	return 0;
//	}
//int main() {
//	int n = 20;
//	int i = 0;
//	int res = 1;
//	int j = 0;
//	long long sum = 0;
//	for (i = 1; i <= 20; i++) {
//		res = res * i;
//		for (j = 1; j <= 20; j++) 
//			sum += res;
//	}
//	printf("%lld", sum);
//	return 0;
//}
//int main() {
//    int i;
//    long long sum = 0;
//    long long res = 1;
//    //计算1到20的乘阶
//    for (i = 1; i <= 20; i++) {
//        res = res * i;
//        sum += res;
//    }
//
//    printf("%lld", sum);
//
//    return 0;
//}
//int isPrime(int num) {
//    //if (num <= 1) {
//    //    return 0;  // 小于等于1的数不是质数
//    //}
//
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return 0;  // 能被其他数整除，不是质数
//        }
//    }
//
//    return 1;  // 是质数
//}
//
//int main() {
//    int count = 0;  // 质数个数的计数器
//
//    for (int num = 100; num <= 999; num++) {
//        if (isPrime(num)) {
//            count++;  // 如果是质数，计数器加1
//        }
//    }
//
//    printf("质数个数：%d\n", count);  // 输出质数个数
//
//    return 0;
//}
//int main() {
//    int i, j;
//    int n = 4;  // 菱形的高度
//
//    // 打印上半部分菱形
//    for (i = 1; i <= n; i++)
//    {
//        // 打印空格
//        for (j = 1; j <= n - i; j++)
//            printf(" ");
//
//        // 打印字符
//        for (j = 1; j <= 2 * i - 1; j++)
//            printf("*");
//
//        printf("\n");
//    }
//
//    // 打印下半部分菱形
//    for (i = 1; i < n; i++) {
//        // 打印空格
//        for (j = 1; j <= i; j++)
//            printf(" ");
//
//        // 打印字符
//        for (j = 1; j <= 2 * (n - i) - 1; j++)
//            printf("*");
//
//        printf("\n");
//    }
//
//    return 0;
//}
int num(int y) {
	if (y % 3 == 0 && y % 7 == 0) {
		return 0;
	}
	else {
		return y;
	}
}
int main() {
	int n = 0;
	int sum = 0;
	for (n = 1000; n <= 9900; n++) {
		sum += num(n);
	}
	printf("%d", sum);
	return 0;
}