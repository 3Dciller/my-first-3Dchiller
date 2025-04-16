//#include <stdio.h>	
//void main()
//{
//	int a = 2, b = 3, c = 4;
//	int result1, mok, namugi;
//	float result2;
//
//	result1 = a + b - c;
//	printf("%d + %d - %d = %d\n", a, b, c, result1);
//
//	result1 = a + b * c;
//	printf("%d + %d * %d = %d\n", a, b, c, result1);
//
//	result2 = a * b / (float)c;
//	printf("%d + %d / %f = %f\n", a, b, (float)c, result2);
//
//	mok = c / b;
//	printf("%d / %d의 몫은 %d\n", c, b, mok);
//
//	namugi = c % b;
//	printf("%d %% %d의 나머지는 %d\n", c, b, namugi);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 10;
//
//	a++;
//	printf(" a++ ==> %d\n", a);
//
//	a--;
//	printf(" a-- ==> %d\n", a);
//
//	a += 10;
//	printf(" a += 10 ==> %d\n", a);
//
//	a -= 10;
//	printf(" a -= 10 ==> %d\n", a);
//
//	a *= 10;
//	printf(" a *= 10 ==> %d\n", a);
//
//	a /= 10;
//	printf(" a /= 10 ==> %d\n", a);
//
//	a %= 5;
//	printf(" a %%= 5 ==> %d\n", a);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 100, b = 200;
//
//	printf("%d == %d는 %d이다.\n", a, b, a == b);
//	printf("%d != %d는 %d이다.\n", a, b, a != b);
//	printf("%d >= %d는 %d이다.\n", a, b, a >= b);
//	printf("%d <= %d는 %d이다.\n", a, b, a <= b);
//	printf("%d > %d는 %d이다.\n", a, b, a > b);
//	printf("%d < %d는 %d이다.\n", a, b, a < b);
//
//	printf("%d = %d는 %d이다.\n", a, a, a = b);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 99;
//
//	printf(" AND 연산 : %d\n", (a >= 100) && (a <= 200));
//	printf(" OR 연산 : %d\n", (a >= 100) || (a <= 200));
//	printf(" NOT 연산 : %d\n", !(a >= 100));
//
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 100.00, b = -200;
//
//	printf(" 상수의 AND 연산 : %d\n", a && b);
//	printf(" 상수의 OR 연산 : %d\n", a || b);
//	printf(" 상수의 NOT 연산 : %d\n", !a);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 99;
//
//		if (a < 100)
//			printf("100보다 작군요..\n");
//		if (a > 100)
//			printf("100보다 크군요..\n");
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 50;
//
//	if (a < 100)
//	{
//		printf("100보다 작군요..\n");
//		printf("거짓이므로 이 문장은 안 보이겠죠?\n");
//	}
//
//	printf("프로그램 끝!\n");
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 200;
//
//	if (a < 100)
//	{
//		printf("100보다 작군요..\n");
//		printf("참이면 이 문장도 보이겠죠?\n");
//	}
//	else
//	{
//		printf("100보다 크군요..\n");
//		printf("거짓이면 이 문장도 보이겠죠?\n");
//	}
//	
//	printf("프로그램 끝!\n");
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a;
//
//	printf("정수를 입력하세요 : ");
//	scanf("%d", &a);
//
//	if (a % 2 == 0)
//	{
//		printf("짝수를 입력했군요..\n");
//	}
//	else
//	{
//		printf("홀수를 입력했군요..\n");
//	}
//}