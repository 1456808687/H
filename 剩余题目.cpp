#include<stdio.h>
//第二十题
/*#define Π 3.14
void main()
{
	float r, l, s;
	scanf("%f", &r);
	l = 2 * r * Π;
	s = Π * r * r;
	printf("%.2f,%.2f", l, s);
}

//第十九题
/*#include<math.h>
void main()
{
	float a, b, c, p ;
	float s;
	scanf("%f%f%f", &a, &b, &c);
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.2f", s);
}


//第十八题
/*void main()
{
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
	{
		printf("0");
	}
	else {
		printf("1");
	}

}


//第十七题
/*void main()
{
	char  a;
	scanf("%c", &a);
	if (a == 'y' || a == 'Y')
	{
		printf("agree");
	}
	else if (a =='n'|| a == 'N')
	{
		printf("disagree");
	}
	else {
		printf("lose");
	}

}


//第十六题
/*void main()
{
	int x, y;
	scanf("%d", &x);
	if (-5 < x && x < 0)
	{
		y = x;
		printf("%d", y);
	}
	else if (x == 0)
	{
		y = x - 1;
		printf("%d", y);
	}
	else if (0 < x && x < 10)
	{
		y = x + 1;
		printf("%d", y);
	}
}

//第十五题
/*#include<math.h>
void main()
{
	int a, b;
	float c, d;
	scanf("%d%d", &a, &b);

	if (a< b) {
		printf("error!");
	}
	c = sqrt(a + b);
	d = sqrt(a - b);
	if ((int)c == c && (int)d == d)
	{
		printf("1");
	}
	else {
		printf("0");
	}

}

//第十四题
/*void main()
{

	char  s;
	scanf("%d", &s);
	if (s=='A')
	{
		printf("85-100");
	}
	else if (s =='B')
	{
		printf("70-84");
	}
	else if (s == 'C' )
	{
		printf("60-69");
	}
	else if (s == 'D' )
	{
		printf("0-60");
	}
}


//第十三题
/*void main()
{
	float s, money;
	printf("请输入运输距离：\n");
	scanf("%f", &s);
	if (s < 0)
	{
		printf("error!");
	}
	else if (0 <= s &&s< 250)
	{
		money = s * 10;
		printf("%.2f", money);
	}
	else if (250 <= s &&s< 500)
	{
		money = s * 10 * (1 - 0.02);
		printf("%.2f", money);
	}
	else if (500 <= s&&s< 1000)
	{
		money = s * 10 * (1 - 0.05);
		printf("%.2f", money);
	}
	else if (1000 <= s&&s< 2000)
	{
		money = s * 10 * (1 - 0.08);
		printf("%.2f", money);
	}
	else if (2000 <= s&&s  < 3000)
	{
		money = s * 10 * (1 - 0.1);
		printf("%.2f", money);
	}
	else if (3000 <= s)
	{
		money = s * 10 * (1 - 0.15);
		printf("%.2f", money);
	}
}

//第十二题
/*#include<math.h>
void main()
{
	int a, b, c, d, x1, x2;
	scanf("%d%d%d", &a, &b, &c);
	if (a!=	0)
	{
		d = sqrt(b * b - 4 * a * c);
		x1 = (-b + d) /( 2 * a);
		x2 = (-b - d) /( 2 * a);
		if (x1 == x2)
		{
			printf("1");
		}
		else printf("2");
	}
	else {
		printf("error");
	}
}



//第十一题
/*void main()
{
	int a;
	printf("请输入2017年的月份");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("31"); break;
	case 2:
		printf("28"); break;
	case 3:
		printf("31"); break;
	case 4:
		printf("30"); break;
	case 5:
		printf("31"); break;
	case 6:
		printf("30"); break;
	case 7:
		printf("31"); break;
	case 8:
		printf("31"); break;
	case 9:
		printf("30"); break;
	case 10:
		printf("31"); break;
	case 11:
		printf("30"); break;
	case 12:
		printf("31"); break;

	}
}

//第十题
/*void main()
{
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 1 || year % 400 == 0)
	{
		printf("1");
	}
	else {
		printf("0");
	}
}

//第九题
/*void main()
{
	int a, b;
	scanf("%d", &a);

	if (a >= 1 && a <= 20)
	{
		b = a * a *a;
		printf("%d", b);
	}
	else {
		printf("-1");
	}
}


//第八题
/*void main()
{
	int a, b;
	scanf("%d", &a);

	if (a >= 1 && a <= 100)
	{
		b = a * a;
		printf("%d", b);
	}
	else {
		printf("-1");
	}
}

//第七题
/*#include<math.h>
void main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a == b && a == c)
	{
		printf("1");
	}
	if (a == b || a == c || b == c)
	{
		printf("2");
	}
	if (a* a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
	{
		printf("3");
	}
	if (a + b > c || a + c > b || b + c > a)
	{
		printf("0");
	}
	else printf("error!");

}



//第六题
/*void main()
{

		printf("请数输入一个字符：");
		char ch = getchar();
		if (ch >= 'a' && ch <= 'z'||ch >= 'A' && ch <= 'Z')
			printf("It is an alphabetic character.");


		else if (ch >= '0' && ch <= '9')
			printf("It is a digit");
		else
			printf("It is other character");
		printf("\n");
}

//第五题
/*void main()
{
	float x, y;
	printf("请输入数字X=");
	scanf("%f", &x);
	if (x < 1)
	{
		y = x * x + 2 * x + sin(x);
		printf("y=%.2f", y);
	}
	if (1 <= x && x <= 10)
	{
		y = 2 * x - 1;
		printf("y=%.2f", y);
	}
	if (x > 10)
	{
		y = sqrt(2 * x * x * x - 11);
		printf("y=%.2f", y);
	}

}


//第四题
void main()
{
	int money, h;
	float g;
	printf("请输入利润（万元）");
	scanf("%d", &money);
	h = money / 100000;
	switch (h)
	{
	case 0:
		g = money * 0.1;
		printf("%.2f", g);
		break;
	case 1:
		g = 100000 * 0.1 + (money - 100000) * 0.075;
		printf("%.2f", g);
		break;
	case 2:
	case 3:
		g = 100000 * 0.1 + (money - 100000) * 0.075 + (money - 200000) * 0.05;
		printf("%.2f", g);
		break;
	case 4:
	case 5:
		g = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (money - 400000) * 0.03;
		printf("%.2f", g);
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		g = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + (money - 600000) * 0.015;
		printf("%.2f", g);
		break;
	case 10:
		g = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (money - 1000000) * 0.01;
		printf("%.2f", g);
		break;
	}
}

//第三题
/*void main()
{
	float a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	if ((int)c == c)
	{

		if (c == 0 && b != 0)
		{
			printf("%d%d", b, a);
		}
		else if (c == 0 && b == 0)
		{
			printf("%d", a);
		}
	}
	else {
			printf("error");
		}

}

//第二题
/*void main()
{
int g, h;
scanf("%d", &g);
h = g / 10;
switch (h)
{
case 10:
case 9:	printf("A");
	break;
case 8:
	printf("B");
	break;
case 7:
	printf("C");
	break;
case 6:
	printf("D");
	break;
case 5:
case 0:
	printf("E");
	break;
}
}*/
