//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//		printf("안녕하세요\n");
//		printf("안녕하세요\n");
//		printf("안녕하세요\n");
//		return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//		printf("사과 1개\n");
//		return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//		int apple = 1;
//		printf("사과 %d개\n", apple );
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//		printf("키보드 3개\n");
//		printf("마우스 2개\n");
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d개\n", keyboard);
//	printf("마우스: %d개\n", mouse);
//	return 0;
//}
//int main()
//{
//		int coin1 = 500;
//		int coin2 = 1000;
//		printf("%d + %d= %d\n",
//			coin1, coin2, coin1 + coin2);
//		return 0;
//}
//int main()
//{
//	char Alpha;
//	Alpha = 'A';
//	printf("A = %c, A = %d\n", Alpha, Alpha);
//	return 0;
//}
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}
//int main()
//{
//	int radius = 5;
//	double pi;
//	pi = 3.14;
//	float area;
//	//반지름*반지름*3.14
//	area = radius * radius * pi;
//	printf("원의넓이=%f\n" ,area);
//	return 0;
//
//
//}
//int main()
//{
//	int bottom_side;
//	int upper_edge;
//	int high;
//	bottom_side = 3;
//	upper_edge = 5;
//	high = 7;
//	float area;
//	area = ((bottom_side + upper_edge) * high) / 2;
//	printf("사다리꼴의 넓이 = %f\n", area);
//	return 0;
//}
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 :");
//	scanf("%d", &k); //vs: scanf_s
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 두개 입력:");
//	scanf("%d %d", &y, &x); //scanf_s
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두개 입력:");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;

//}
//#include <stdio.h>
//int main()
//{
//	int r;
//	printf("반지름 길이 입력:");
//	scanf("%d", &r);
//	float area;
//	area = r * r * 3.14;
//	printf("원의넓의는=%f\n", area);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	float w1;
//	float w2;
//	float h;
//	printf("숫자 3개 입력:");
//	scanf("%f%f%f", &w1, &w2, &h);
//	float area;
//	area = ((w1 + w2) * h) / 2.0f;
//	printf("사다리꼴의 넓의:%f\n", area);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n",number);
//	number -= 2;		 printf("%2d\n", number);
//	number--;			 printf("%2d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a++);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	printf("숫자 두개를 입력:");
//	scanf("%d%d", &a, &b);
//	printf("%d + %d = %d\n",a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n",a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d =number1%%4\n", number1 % 4);
//	printf("%d =number2%%3\n", number2 % 3);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d =2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number1;
//	printf("숫자 입력:");
//	scanf("%d", &number1);
//	int value = number1 % 50;
//	printf("%d %% 50=%d\n", number1, value);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d =6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d =6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d =6/4\n", data3);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개,", coin10000);
//	printf("오천원권 %d개,", coin5000);
//	printf("천원권 %d개,", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int A;
//	int price;
//	int coin = 1000;
//	printf("가격을 입력하시요");
//	scanf("%d", &price);
//	int change = coin - price;
//	int coin500= change / 500;
//	A = change % 500;
//	int coin100 = A / 100;
//	A = A % 100;
//	int coin50 = A / 50;
//	A = A % 50;
//	int coin10 = A / 10;
//	printf("500원 동전은 %d개 입니다\n", coin500);
//	printf("100원 동전은 %d개 입니다\n", coin100);
//	printf("50원 동전은 %d개 입니다\n", coin50);
//	printf("10원 동전은 %d개 입니다\n", coin10);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 :%d\n", randInt);
//	printf("다음숫자 :%d\n", nextInt);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자 : %d\n", randInt);//0 ~9
//	printf("다음숫자 : %d\n", nextInt);//50~59
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//	
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//		printf("%d원이다.\n", myMoney);
//		int coin500 = rand() % 4 * 500; //0~3 0~1500
//		int coin100 = rand() % 5000; //0~4999
//		coin100 = coin100 / 100 * 100; // 0-4900
// 		printf("그리고 과좌의 가격은");
//		printf("%d원이다.", coin500 + coin100);
//		printf("\n나는 과자를 살수 있을까?");
//		return 0;
//	}
//int main()

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 4 * 500; //50~59
//	int nextInt = (rand() % 10+1)*1000;  //1000-10000
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple은 15개가 있습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
// }
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) // apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	printf("숫자를 입력하시오");
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("양수입니다");
//	}
//	else if (a < 0)
//	{
//		printf("음수입니다");
//	}
//	else
//	{
//		printf("0입니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("숫자를 입력하시오");
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//	{
//		printf("input은 두자리 숫자입니다");
//	}
//	else
//	{
//		printf("input은 두자리숫자가 아닙니다.");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 170)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160이상입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	printf("나이를 입력하시오.");
//	scanf("%d", &y_age);
//	if (y_age > 0)
//	{
//		printf("전체 관람가\n");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int money;
//	printf("지폐로 교환할 돈은?\n");
//	scanf("%d", &money);
//	int a=50000;
//	int b=10000;
//	int c=5000;
//	int d=1000;
//	int result;
//	result = money / a;//15, 777777, 50000
//	printf("오만 원짜리 =>%d\n", result);
//	result = money % a;//277777, 777777,50000
//	money = result / b;//2, 27777, 10000
//	printf("만 원 짜리 =>%d\n", money);
//	result = result % b;//7777, 27777, 10000
//	money = result / c;//1, 7777, 5000
//	printf("오천 원 짜리 =>%d\n", money);
//	money = result % c;//2777, 7777, 5000
//	result = money / d;//2, 2777 , 1000
//	printf("천 원짜리 =>%d\n", result);
//	result = money % d;//777, 2777, 1000
//	printf("지폐로 바꾸지 못한 잔돈=>%d", result);
//}
//#include <stdio.h>
//
//int main()
//{
//	int num = 100;
//	num++;
//	printf("%d", num);
//	++num;
//	printf("%d", num);
//	printf("%d", num++);
//	printf("%d", ++num);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char initial;
//	printf("영어 하나를 입력하시오\n");
//	scanf("%c", &initial);//'A':65
//	if ('A' <= initial && 'Z' >= initial)
//	{
//		printf("대문자");
//	}
//	else if ('a' <= initial && 'z' >= initial)
//	{
//		printf("소문자");
//	}
//	return 0;
//	
//
//}
//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급 입니다\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급압니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number는 양수입니다");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다");
//	}
//	else {
//		printf("number는 0입니다");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다");
//	}
//	else
//	{
//		printf("number는 홀수입니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arrow;
//	printf("방향키 하나를 입력하시오\n");
//	scanf("%c", &arrow);
//	if (arrow == 0x77) {
//		printf("위 방향키를 입력하셨습니다");
//	}
//	if (arrow == 0x61) {
//		printf("좌 방향키를 입력하셨습니다");
//	}
//	if (arrow == 0x64) {
//		printf("우 방향키를 입력하셨습니다");
//	}
//	if (arrow == 0x73) {
//		printf("아래 방향키를 입력하셨습니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	printf("0~100사이의 수를 입력하시오\n");
//	scanf("%d", &gauge);
//	if (45 <= gauge && gauge<=55) {
//		printf("Perfect");
//	}
//	else if (35 <= gauge && gauge <= 65) {
//		printf("Exelent");
//	}
//	else
//	{
//		printf("good");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int input, cnt=1;
//	srand((unsigned int)time(NULL));
//	int random = rand() % 2000 + 1;
//	for (; cnt<=12; cnt++)
//	{
//		printf("값을 입력하시오\n");
//		scanf("%d", &input);
//		if (input > rand()) {
//			printf("up\n");
//		}
//		else if (input < rand()) {
//			printf("down\n");
//		}
//		else
//		{
//			printf("perfect\n");
//			break;
//		}
//	}
//	if (cnt >= 13) {
//		printf("실패\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("값을 입력하시요\n");
//	scanf("%d", &input);
//	if (input % 3 == 0) {
//		printf("input은3의 배수입니다.\n");
//		if (input % 6 == 0) {
//			printf("input은6의 배수입니다.\n");
//		}
//		if (input % 9 == 0) {
//			printf("input은9의 배수입니다.\n");
//		}
//	}
//	else {
//		printf(".");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//
//	switch(command)
//	{
//	case 'i':
//		printf("아임템창 오픈\n");
//	}
//	return 0;
//}
#include <stdio.h>

//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//				break;
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커멘드를 압력하세요:\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//				break;
//	case 'm':	printf("지도창 오픈\n");
//				break;
//	default: printf("지정된 기능이 없습니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1:printf("two\n");	break;
//	case 2:printf("one\n");	break;
//	case 3:printf("three\n");	break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("숫자두개를 입력하시오\n");
//	printf("기호 한개를 입력하시오\n");
//	scanf("%d %d %c", &input1, &input2, & oper);
//	switch (oper)
//	{
//	case'+':printf("%d + %d = %d\n", input1, input2, input1 + input2);	break;
//	case'-':printf("%d - %d = %d\n", input1, input2, input1 - input2);	break;
//	case'*':printf("%d * %d = %d\n", input1, input2, input1 * input2);	break;
//	case'/':printf("%d / %d = %d\n", input1, input2, input1 / input2);	break;
//	case'%':printf("%d %% %d = %d\n", input1, input2, input1 % input2);	break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int month;
//	printf("1~12중에 하나를 입력하시요\n");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:printf("January\n");		break;
//	case 2:printf("February\n");	break;
//	case 3:printf("March\n");	break;
//	case 4:printf("April\n");	break;
//	case 5:printf("May\n");	break;
//	case 6:printf("June\n");	break;
//	case 7:printf("July\n");	break;
//	case 8:printf("Agust\n");	break;
//	case 9:printf("september\n");	break;
//	case 10:printf("Octuber\n");	break;
//	case 11:printf("November\n");	break;
//	case 12:printf("Decenber\n");	break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<' :
//	case 'a' :
//		printf("왼쪽으로 이동합니다\n");
//		break;
//	case '>': case'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	const int option = 3;
//	printf("메뉴를 선택하세요.");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작\n");
//		break;
//	case 2:
//		printf("세이브 테이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default :
//		printf("저장된 기능이 없습니다.\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0부터9사이의 숫자를 고르시요\n");
//	scanf("%d", &number);
//	switch(number)
//	{
//	case 3:
//	case 6:
//	case 9:
//		printf("짝\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x':	printf("알파벳 x 입력.\n");
//		break;
//	case 'X':	printf("엑스표 입력\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	int multi = 1;
//	while (1)
//	{
//		multi = number * multi;
//		if (multi >= 50000)
//		{
//			printf("%d", number);
//			break;
//		}
//		number ++;
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	char alphabet='A';
//	while (alphabet <= 'Z')
//	{
//		if (alphabet != 'F')
//		{
//			printf("%c\n", alphabet);
//		}
//		alphabet++;
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int input= 0;
//	int total = 0;
//	int turn = 0;
//	while (1)
//	{
//		printf("%c:", 'A' + turn);
//		scanf("%d", &input);
//		if (input > 3 || input < 1)
//		{
//			printf("다시입력해주세요\n");
//			continue;
//		}
//		total += input;
//		printf("=> %d\n", total);
//
//		//turn = !turn;
//
//		if (total >= 31)
//		{
//			break;
//		}
//		turn++;
//		turn %= 5;
//	}
//	/*if (turn == 0)
//	{
//		printf("A가 졌습니다\n");
//	}
//	else
//	{
//		printf("B가 졌습니다\n");
//	}
//	*/
//	printf("%c가 졌습니다\n", 'A' + turn);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int temperature = 30;
//	do
//	{
//		printf("현재 온도 :%d도\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//	enum { GAMEOVER, NEWGAME, LOADGAME, OPTION };
//	do {
//		printf("\n메뉴를 선택하세요\n");
//		printf("1.새 게암 2.이어하기 3.옵션(0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("게임을 종료합니다\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int select;
//	do {
//	printf("메뉴를 선택해주세요\n");
//	printf("1.로그인 2.회원가입 3.옵션 4.만든 사람들\n");
//	scanf("%d", &select);
//	switch (select)
//	{
//	case 1:
//		printf("로그인\n");
//		break;
//	case 2:
//		printf("회원가입\n");
//		break;
//	case 3:
//		printf("옵션\n");
//		break;
//	case 4:
//		printf("만든 사람들\n");
//		break;
//	}
//	} while (select>=1 && select<=4);
//
//	printf("out\n");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int sport = 0;
//	int singing = 0;
//	int reading = 0;
//	do {
//		printf("\n%d번쨰 날 !\n", ++day);
//		printf("오늘도 뭐 할까요?\n");
//		printf("1. 코딩공부한다.\n");
//		printf("2. 운동한다.\n");
//		printf("3. 노래한다.\n");
//		printf("4. 책읽는다.\n");
//		printf("5. 그외 끝낸다.\n>>");
//		scanf("%d", &command);
//		int randInt = rand() % 5 + 1;
//		if (command == 1)
//		{	
//			switch (randInt)
//			{
//			case 1:
//				printf("기분아 좋네요\n");
//			case 3:
//				printf("도서관에서. ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//			}
//			printf("코딩 공부합니다\n");
//			study++;
//		}
//		else if (command == 2)
//		{
//			switch (randInt)
//			{
//			case 1:
//				printf("기분이 좋아요\n");
//			case 2:
//				printf("헬스장에서 ");
//				break;
//			case 3:
//				printf("기분이 안좋아요\n");
//			case 4:
//				printf("집에서 ");
//				break;
//			}
//			printf("운동합니다\n");
//			sport++;
//		}
//		else if (command == 3)
//		{
//			switch (randInt)
//			{
//			case 1:
//				printf("기분이 나빠요\n");
//			case 3:
//				printf("집에서 ");
//				break;
//			case 2:
//				printf("기분이 좋아요\n");
//			case 4:
//				printf("음악실에서 ");
//				break;
//			}
//			printf("노래를 부릅니다\n");
//			singing++;
//		}
//		else if (command == 4)
//		{
//			switch (randInt)
//			{
//			case 3:
//				printf("기분이 좋네요\n");
//			case 1:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요\n");
//			case 4:
//				printf("집에서 ");
//				break;
//			}
//			printf("책을 읽습니다\n");
//			reading++;
//		}
//		else{
//			break;
//		}
//	} while (1);
//	if (day <= 3){
//		printf("그대로입니다...\n");
//	}
//	else {
//		if (study > sport && study > reading && study > singing)
//		{
//		int level = study / 8;
//			switch (level) {
//
//			case 0:
//				printf("코딩새싹이 되었습니다\n");
//				break;
//			case 1:
//				printf("프로그래머가 되었습니다\n");
//				break;
//			case 2:
//				printf("FrontEnd 개발자가 되었습니다\n");
//				break;
//			case 3:
//				printf("BackEnd 개발자가 되었습니다\n");
//				break;
//			default:
//				printf("풀스택 개발자가 되었습니다\n");
//				break;
//			}
//		}
//		else if (sport > study && sport > reading && sport > singing)
//		{
//		int level = sport / 8;
//			switch (level)
//			{
//			case 1:
//				printf("헬스새싹이 되었습니다\n");
//				break;
//			case 2:
//				printf("헬스 마스터가 되었습니다\n");
//				break;
//			case 3:
//				printf("헬스 트레이너가 되었습니다\n");
//				break;
//			}
//		}
//		else if (singing > study && singing > sport && singing > reading)
//		{
//		int level = singing / 8;
//			switch (level)
//			{
//			case 1:
//				printf("노래새싹이 되었습니다\n");
//				break;
//			case 2:
//				printf("노래 장인이 되었습니다\n");
//				break;
//			case 3:
//				printf("음악 선생님이 되었습니다\n");
//				break;
//			}
//		}
//		else if (reading > study && reading > sport && reading > singing)
//		{
//		int level = reading / 8;
//			switch (level)
//			{
//			case 1:
//				printf("책새싹이 되었습니다\n");
//				break;
//			case 2:
//				printf("책 애호가가 되었습니다\n");
//				break;
//			case 3:
//				printf("작가가 되었습니다\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (number = 10; number <100; number++)
//	{
//		printf("%d\n",number);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	int store=1;
//	for (number = 3; number <= 8; number++)
//	{
//		store = store*number;
//	}
//	printf("%d", store);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (number = 3; number <= 50; number++)
//	{
//		int ten = number / 10;
//		int first_digit = number % 10;
//
//		if (ten == 3 || first_digit == 3 || first_digit == 6 || first_digit == 9)
//		{
//			printf("%d\n", number);
//		}
//
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}
//#include <stdio.h> 
//
//int main(){
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었디\n");
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int start, end, i;
//	printf("시작값 ==>");
//	scanf("%d", &start);
//	printf("끝값 ==>");
//	scanf("%d", &end);
//	i = end - start + 1;
//	if (i < 0)
//	{
//		while (end <= start)
//		{
//			if (end % 2 == 1) {
//				printf("%d\n", end);
//			}
//			end++;
//		}
//	}
//	else
//	{
//		while (start <= end)
//		{
//			if (start % 2 == 1)
//			{
//				printf("%d\n", start);
//			}
//			start++;
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number,turn = 0,digit = 1;
//	int a,b;
//	printf("숫자를 여러개 입력:");
//	scanf("%d", &number);
//	int number1 = number;
//	while (number > 10) {
//		//printf("%d\n", number);
//		number = number / 10;
//		turn++;
//		digit *= 10;
//	}
//	//printf("%d\n", digit);
//
//	while (number1>0) {
//		b = number1 / digit;
//		while (b>0) {
//			printf("\u2665\u2665");
//			b--;
//		}
//		printf("\n");
//		number1 = number1 % digit;
//		digit = digit / 10;
//	}
//		
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양%d마리\n", sheep);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep%10==0)
//		{
//			printf("깜빡 졸았다\n");
//			continue;
//		}
//		printf("양%d마리\n", sheep);
//		if (sheep == 45) {
//			break;
//		}
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++) {
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요\n");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (number = 10; number < 100; number++) {
//		printf("%d\n", number);
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int number,sum_number=0;
//	for (number = 3; number <= 8; number++)
//	{
//		sum_number = number + sum_number;
//	}
//	printf("%d", sum_number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number,number1=0,number2=0;
//	for (number = 1; number <= 50; number++)
//	{
//		number1 = number % 10;
//		number2 = number / 10;
//		if (number1 == 0)
//		{
//			continue;
//		}
//		if (number2 == 3 || number1 % 3 == 0)
//		{
//			printf("%d\n",number);
//		}
//		else {}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100이하의 제곱수를 출력합니다\n");
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("100이하의 7의 배수를 출력합니다\n");
//
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char input;
//	for (; ; )
//	{
//		scanf("%c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int exitFor, number,count=1;
//	printf("1부터 10까지 곱한 수 출력 :");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor,exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//	printf("1부터 10까지 곱한 수 출력:");
//	for (int number = 10, int exitFor = number - 1; exitFor; number * exitFor, exitFor)
//	{
//		
//	}
//	printf("%d\n", number1);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (number = 0; number <= 200; number+=11)
//	{
//		//if (number % 11 == 0)
//		//{
//		printf("%d\n", number);
//		//}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float sqLine;
//	for (sqLine = 0.1; (sqLine * 4) <= 21; sqLine+=0.1)
//	{
//		printf("%.1lf\n", sqLine);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
////}
//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("d%반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	myClass++;
//	for(student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번\n", myClass, student);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++)
//	{
//		for (student = 1; student <= 30; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number,number1;
//		for (number = 2; number <= 9; number++)
//		{
//			for (number1 = 1; number1 <= 9; number1++)
//			{
//				printf("%d * %d = %d\n", number, number1, number * number1);
//			}
//		}
//}
//#include <stdio.h>
//int main()
//{
//	int number, number2;
//	for (number = 2; number <= 9; number++)
//	{
//		if (number == 3)
//		{
//			continue;
//		}
//		for (number2 = 1; number2 <= 9; number2++)
//		{
//			printf("%d * %d = %d\n", number, number2, number * number2);
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	for (number1 = 1; number1 <= 4; number1++)
//	{
//		for (number2 = 1; number2 <= 6; number2++)
//		{
//			printf("4면: %d, 6면: %d \n", number1, number2);
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번쨰 내부 반복문 탈출\n\n",outer);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < outer + 1; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (outer = 0; outer < 5; outer++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y = 1;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y +=1;
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	
//	for (int y = 1; y <= 3; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y += 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

	/*printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("\n");
	for (int x = 1; x <= 4; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 3; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 2; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 1; x++)
	{
		printf("*");
	}
	printf("\n");
	*/
	//int y = 4;
	/*for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 3; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 2; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 1; x++)
	{
		printf("*");
	}
	printf("\n");*/


	/*int y = 4;
	for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");
	y--;
	for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");
	y--;
	for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");
	y--;
	for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");*/

	/*int y = 4;*/
	/*for (; y >= 1;)
	{
		for (int x = 1; x <= y; x++)
		{
			printf("*");
		}
		printf("\n");
		y -= 1;
	}*/
	//for (int y = 4; y >= 1; y -= 1)
	//{
	//	for (int x = 1; x <= y; x++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//int LINE=1;
	//for (int y = 4; y >= LINE; y--)
	//{
	//	for (int x = 1; x <= y; x++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	// 
//#include <stdio.h>
//int main()
//{
//	int LINE=0;
//	scanf("%d",&LINE);
//	for (int y = LINE; y >= 1; y--)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//}
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i < 4; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i < 2; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 1; i < 3; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i < 4; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 1; i < 2; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i < 6; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 1; i < 1; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i < 8; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3;
//	int y = 1;
//
//
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--; 
//	y+=2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--;
//	y += 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--;
//	y += 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--;
//	y += 2;
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3, y = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int LINE = 5;
//	int x = LINE - 1, y = 1;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{		
//		printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//		printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int LINE = 4;
//	scanf("%d", &LINE);
//	int x = LINE - 1, y = 1;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//}
//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 1; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 2; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 1; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 1; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 2; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 1; i++)
//	{
//		printf("*");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3;
//	int y = 1;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--; y += 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--; y += 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x++; y -= 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x++; y -= 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3, y = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//	x = 1; y = 5;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x++; y -= 2;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3, y = 1, LINE = 6/2;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//	x = 1; y = 5;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x++; y -= 2;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int LINE = 0;
//	scanf("%d", &LINE);
//	int x = LINE-1, y=1;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//	x++; y -= 2;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x++; y -= 2;
//	}
//	return 0;
//}
	//	printf(" ");
	//	printf(" ");
	//	printf(" ");
	//	printf("1");
	//	printf("\n");
	//	printf(" ");
	//	printf(" ");
	//	printf("2");
	//	printf("2");
	//	printf("\n");
	//	printf(" ");
	//	printf("3");
	//	printf("3");
	//	printf("3");
	//	printf("\n");
	//	printf("4");
	//	printf("4");
	//	printf("4");
	//	printf("4");
		//for (int i = 0; i < 3; i++)
		//{
		//	printf(" ");
		//}
		//for (int i = 0; i < 1; i++)
		//{
		//	printf("1");
		//}
		//printf("\n");
		//for (int i = 0; i < 2; i++)
		//{
		//	printf(" ");
		//}
		//for (int i = 0; i < 2; i++)
		//{
		//	printf("2");
		//}
		//printf("\n");
		//for (int i = 0; i < 1; i++)
		//{
		//	printf(" ");
		//}
		//for (int i = 0; i < 3; i++)
		//{
		//	printf("3");
		//}
		//printf("\n");
		//for (int i = 0; i < 0; i++)
		//{
		//	printf(" ");
		//}
		//for (int i = 0; i < 4; i++)
		//{
		//	printf("4");
		//}
		//printf("\n");

	//for (int i = 0; i < x; i++)
	//{
	//	printf(" ");
	//}
	//for (int i = 0; i < y; i++)
	//{
	//	printf("%d", y);
	//}
	//printf("\n");
	//x--; y++;
	//for (int i = 0; i < x; i++)
	//{
	//	printf(" ");
	//}
	//for (int i = 0; i < y; i++)
	//{
	//	printf("%d", y);
	//}
	//printf("\n");
	//x--; y++;
	//for (int i = 0; i < x; i++)
	//{
	//	printf(" ");
	//}
	//for (int i = 0; i < y; i++)
	//{
	//	printf("%d", y);
	//}
	//printf("\n");
	//x--; y++;
	//for (int i = 0; i < x; i++)
	//{
	//	printf(" ");
	//}
	//for (int i = 0; i < y; i++)
	//{
	//	printf("%d", y);
	//}
	//printf("\n");
	//x--; y++;
//int x = 3, y = 1, LINE = 4;
//for (int i = 0; i < LINE; i++)
//{
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("%d", y);
//	}
//	printf("\n");
//	x--; y++;
//}
//}
//#include <stdio.h>
//int main()
//{
//	int LINE=0;
//	scanf("%d", &LINE);
//	int x = LINE - 1, y = 1;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("%d", y);
//		}
//		printf("\n");
//		x--; y++;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int turn = 0;
//	int A = 0, B = 0;
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	while (1)
//	{
//		char X;
//		
//			X = 0;
//			for (int i = 0; i < 3; i++)
//			{
//				printf("%c :", 'A' + X);
//				scanf("%d", &A);
//				X++;
//			}
//			turn += X;
//			printf("턴이 넘어갑니다\n");
//			for(int i = 0; i < 3; i ++)
//			{
//				printf("%c :", 'A' + X);
//				scanf("%d", &B);
//				X--;
//			}
//			turn -= X;
//			printf("턴이 넘어갑니다\n");
//	}
//}