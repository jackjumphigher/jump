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
	printf("��һҳ \n");
	printf("1�� PID������e=%.4f kp=%.4f ki=%.4f kd=%.4f\n", e, kp, ki, kd);
	printf("2���ٶ���Ϣ��v=%.2fm/s\n", v);
	printf("3�� GPS���꣺(%.2f,%.2f)\n", x, y);
 
	printf("����y������һҳ\n");
	fflush(stdin);//���������ڴ�
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
	printf("�ڶ�ҳ \n");
	printf("1��PID�趨\n");
	printf("2���ٶ��趨\n");
	printf("3�������趨\n");
	printf("4��������һҳ\n");
	 
	printf("���ձ��ѡ����еĲ�����\n");
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
	printf("pid���� \n");
	printf("����r������һҳ\n");
	printf("��ֱ�������Ҫ�趨��PID����e Kp Ki Kd:\n");
	t1 = e, t2 = kp, t3 = ki, t4 = kd;
	scanf("%f%f%f%f", &e, &kp, &ki, &kd);
	printf("�����仯����\n");
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
	printf("�趨�ٶ� \n");
	printf("����r������һҳ\n");
	printf("��������Ҫ�趨���ٶ�ֵ��(v)\n");
	t5 = v;
	scanf("%f", &v);
	printf("�ٶȱ仯����\n");
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
	printf("����ҳ \n");
	printf("����r������һҳ\n");
	 
	printf("��������Ҫ�궨�����꣺\n");
	t6 = x, t7 = y;
	scanf("%f%f", &x, &y);
	printf("����仯����\n");
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
