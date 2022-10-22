#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
float e = 0, kp = 0, ki = 0, kd = 0, v = 0, x = 0, y = 0;
float t1, t2, t3, t4, t5, t6, t7;
int choice;
char arr; 
void A(), B(), C1(), C2(), C3();
void A()
{
	system("cls");
	printf("第一页 \n");
	printf("1、 PID参数：e=%.4f kp=%.4f ki=%.4f kd=%.4f\n", e, kp, ki, kd);
	printf("2、速度信息：v=%.2fm/s\n", v);
	printf("3、 GPS坐标：(%.2f,%.2f)\n", x, y);
 
	printf("输入y进入下一页\n");
	fflush(stdin);//清理缓冲区内存
	scanf("%c", &arr);
	while (arr != 'y')
	{
		printf("error\n");
		scanf("%c", &arr);
	}
	 B();
}
void B()
{
	system("cls");
	printf("第二页 \n");
	printf("1、PID设定\n");
	printf("2、速度设定\n");
	printf("3、坐标设定\n");
	printf("4、返回上一页\n");
	 
	printf("按照标号选择进行的操作：\n");
	fflush(stdin);
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:C1(); break;
	case 2:C2(); break;
	case 3:C3(); break;
	case 4: A(); break;
	default: B(); break;
	}
}
void C1()
{
	system("cls");
	printf("pid参数 \n");
	printf("输入r返回上一页\n");
	printf("请分别输入你要设定的PID参数e Kp Ki Kd:\n");
	t1 = e, t2 = kp, t3 = ki, t4 = kd;
	scanf("%f%f%f%f", &e, &kp, &ki, &kd);
	printf("参数变化量：\n");
	printf("e:%f\nkp:%f\nki:%f\nkd:%f\n", e - t1, kp - t2, ki - t3, kd - t4);
 
	 
	fflush(stdin);
	scanf("%c", &arr);
	while (arr != 'r')
	{
		printf("error \n");
		scanf("%c", &arr);
	}
	 B();
}
void C2()
{
	system("cls");
	printf("设定速度 \n");
	printf("输入r返回上一页\n");
	printf("请输入你要设定的速度值：(v)\n");
	t5 = v;
	scanf("%f", &v);
	printf("速度变化量：\n");
	printf("v:%f\n", v - t5);
	 
	 
	fflush(stdin);
	scanf("%c", &arr);
	while (arr != 'r')
	{
		printf("error\n");
		scanf("%c", &arr);
	}
	B();
}
void C3()
{
	system("cls");
	printf("第三页 \n");
	printf("输入r返回上一页\n");
	 
	printf("请输入你要标定的坐标：\n");
	t6 = x, t7 = y;
	scanf("%f%f", &x, &y);
	printf("坐标变化量：\n");
	printf("(x:%f  y:%f)\n", x - t6, y - t7);
	 
	 
	fflush(stdin);
	scanf("%c", &arr);
	while (arr != 'r')
	{
		printf("error\n");
		scanf("%c", &arr);
	}
	B();
}
int main(void)
{
	A();

	return 0;
}
