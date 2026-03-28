//#include <stdio.h>
//void main()
//{
//	int i, k;
//
//	for (i = 0; 1 < 3; i++)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			for (k = 0; k < 2; k++)
//			{
//				printf("중첩 for문 입니다.(i값: %d, k값: %d)\n", i, k);
//			}
//		}
//	}
//}
//#include <stdio.h>
//void main()
//{
//	int i, k;
//
//	for (i = 2;i <= 9;i++)
//	{
//		for (k = 1;k <= 9;k++)
//		{
//			printf("%d X %d = %d\n", i, k, i * k);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//void mian()
//{
//	int i, k;
//	for (i = 1;i <= 9;i++)
//	{
//		for (k = 2; k <= 9; k++)
//		{
//			printf("%d X %d = %d\n", i, k, i * k);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//    int number = 0;
//    scanf("%d", &number);
//    for (int i = 1; i <= 9; i++)
//    {
//        printf("%d * %d = %d\n", number, i, number * i);
//    }
//}
//#include <stdio.h>
//int main()
//{
//	int X;
//	scanf("%d", &X);
//	int N;
//	scanf("%d", &N);
//	int sum=0;
//	for (int i = 0; i < N; i++)
//	{
//		int a,b;
//		scanf("%d %d", &a, &b);
//		sum = (a * b) + sum;
//	}
//	if (X == sum)
//		printf("Yes");
//	else
//		printf("No");
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	scanf("%d", &number);
//	for (int i = 0; i < number; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		printf("%d\n", a + b);
//	}
//}
//#include <stdio.h>
//
//void main()
//{
//	int i, k;
//
//	for (i = 1, k = 1; i <= 9; i++, k++)
//	{
//		printf("%d x %d = %d\n", i, k, i + k);
//	}
//}
//#include <stdio.h>
//
//void main()
//{
//	int i;
//	i = 0;
//	for (; ;)
//	{
//		printf("%d \n", i);
//		i++;
//	}
//}
//#include <stdio.h>
//
//void main()
//{
//	int i;
//
//	for (i = 0; i < 128;i++)
//	{
//		if (i % 16 == 0)
//		{
//			printf("---------------\n");
//			printf("10진수 16진수 문자\n");
//			printf("---------------\n");
//		}
//		printf("%5d %5x %5c\n", i, i, i);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int line = 0; 
//	scanf("%d", &line);
//	int number = 1,space = line - 1;
//	for (int i = 0; line > i; i++)
//	{
//		for (int i = 0; space > i; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; number > i; i++)
//		{
//			printf("*");
//		}
//		space--; number++;
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for(int i = 0; i>5; i++)
//	{
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a + b);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int A = 0, B = 0;
//	scanf("%d %d", &A, &B);
//	printf("%d\n", A + B);
//	printf("%d\n", A - B);
//	printf("%d\n", A * B);
//	printf("%d\n", A / B);
//	printf("%d\n", A % B);
//}
//#include <stdio.h>
//int main()
//{
//	int A = 0, B = 0, C = 0;
//	scanf("%d %d %d", &A, &B, &C);
//	printf("%d\n", (A + B) % C);
//	printf("%d\n", ((A % C) + (B + C)) % C);
//	printf("%d\n", (A * B) % C);
//	printf("%d\n", ((A % C) * (B % C)) % C);
//}
//#include <stdio.h>
//int main()
//{
//	int A = 0, B = 0;
//	scanf("%d %d", &A, &B);
//	printf("%.9f", (double)A / B);
//}
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 ){
//		printf("%d", 1);
//	}
//	else if (year % 400 == 0) {
//		printf("%d", 1);
//	}
//	else {
//		printf("%d", 0);
//	}
//
//}
//#include <stdio.h>
//int main()
//{
//	int input1 = 0, input2 = 0;
//	scanf("%d %d", &input1, &input2);
//	int one_hundred_digit = input2 / 100;
//	int store = input2 % 100;
//	int ten_digit = store / 10;
//	store %= 10;
//	int one_digit = store;
//	printf("%d\n", input1 * one_digit);
//	printf("%d\n", input1 * ten_digit);
//	printf("%d\n", input1 * one_hundred_digit);
//	printf("%d\n", input1 * input2);
//}
//#include <stdio.h>
//int main()
//{
//	int hour = 0, minute = 0;
//	scanf("%d %d", &hour, &minute);
//	if (hour >= 24) {
//		hour = hour - 24;
//	}
//	if (minute - 45 < 0) {
//		minute = 60 + (minute - 45);
//		if (hour == 0) {
//			hour = 23;
//		}
//		else {
//			hour--;
//		}
//		printf("%d %d", hour, minute);
//	}
//	else {
//		printf("%d %d", hour, minute - 45);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number = 0,num = 0;
//	scanf("%d", &number);
//	scanf("%d", &num);
//	int max = num;
//	int min = num;
//	for (int i = 1; number > i; i++)
//	{
//		scanf("%d", &num);
//		if (max < num) {
//			max = num;
//		}
//		if (min > num) {
//			min = num;
//		}
//	}
//	printf("%d %d", min, max);
//}
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	printf("%d", year - 543);
//}
#include <stdio.h>
int main()
{
	int subject = 0, score = 0,score_sum = 0,max = 0;
	scanf("%d", &subject);
	scanf("%d", &score);
	max = score;
	for (int i = 1; subject > i; i++)
	{
		scanf("%d", &score);
		if (max < score) {
			max = score;
		}
	}
	for (int i = 0; subject; i++) {
		score_sum = (score / max) * 100;
	}
	printf("%d", score_sum /subject);
}
//백준 11546번문제