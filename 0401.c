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
//	printf("%d / %d�� ���� %d\n", c, b, mok);
//
//	namugi = c % b;
//	printf("%d %% %d�� �������� %d\n", c, b, namugi);
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
//	printf("%d == %d�� %d�̴�.\n", a, b, a == b);
//	printf("%d != %d�� %d�̴�.\n", a, b, a != b);
//	printf("%d >= %d�� %d�̴�.\n", a, b, a >= b);
//	printf("%d <= %d�� %d�̴�.\n", a, b, a <= b);
//	printf("%d > %d�� %d�̴�.\n", a, b, a > b);
//	printf("%d < %d�� %d�̴�.\n", a, b, a < b);
//
//	printf("%d = %d�� %d�̴�.\n", a, a, a = b);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 99;
//
//	printf(" AND ���� : %d\n", (a >= 100) && (a <= 200));
//	printf(" OR ���� : %d\n", (a >= 100) || (a <= 200));
//	printf(" NOT ���� : %d\n", !(a >= 100));
//
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 100.00, b = -200;
//
//	printf(" ����� AND ���� : %d\n", a && b);
//	printf(" ����� OR ���� : %d\n", a || b);
//	printf(" ����� NOT ���� : %d\n", !a);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	int a = 99;
//
//		if (a < 100)
//			printf("100���� �۱���..\n");
//		if (a > 100)
//			printf("100���� ũ����..\n");
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
//		printf("100���� �۱���..\n");
//		printf("�����̹Ƿ� �� ������ �� ���̰���?\n");
//	}
//
//	printf("���α׷� ��!\n");
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
//		printf("100���� �۱���..\n");
//		printf("���̸� �� ���嵵 ���̰���?\n");
//	}
//	else
//	{
//		printf("100���� ũ����..\n");
//		printf("�����̸� �� ���嵵 ���̰���?\n");
//	}
//	
//	printf("���α׷� ��!\n");
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a;
//
//	printf("������ �Է��ϼ��� : ");
//	scanf("%d", &a);
//
//	if (a % 2 == 0)
//	{
//		printf("¦���� �Է��߱���..\n");
//	}
//	else
//	{
//		printf("Ȧ���� �Է��߱���..\n");
//	}
//}