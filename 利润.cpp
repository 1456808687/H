//#include<stdio.h>
//void main()
//{
//	int money, h;
//	float g;
//	printf("请输入利润（万元）");
//	scanf("%d", &money);
//	h = money / 100000;
//	switch (h)
//	{
//	case 0:
//		g = money * 0.1;
//		printf("%.2f", g);
//		break;
//	case 1:
//		g = 100000 * 0.1 + (money - 100000) * 0.075;
//		printf("%.2f", g);
//		break;
//	case 2:
//	case 3:
//		g = 100000 * 0.1 + (money - 100000) * 0.075 + (money - 200000) * 0.05;
//		printf("%.2f", g);
//		break;
//	case 4:
//	case 5:
//		g = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (money - 400000) * 0.03;
//		printf("%.2f", g);
//		break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		g = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + (money - 600000) * 0.015;
//		printf("%.2f", g);
//		break;
//	case 10:
//		g = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (money - 1000000) * 0.01;
//		printf("%.2f", g);
//		break;
//	}
//}