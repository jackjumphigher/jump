#include<stdio.h>
int main()
{
	int a,b,flag=0;
	char op;
	scanf("%d",&a);
	while(1)
	{
		scanf("%c",&op);
		if(op =='=')
		{
			break;
		}
		
		scanf("%d",&b);
		switch(op)
		{
			case '+':a=a+b;break;
			case '-':a=a-b;break;
			case '*':a=a*b;break;
			case '/':
				if(b==0) flag = 1;
				else a=a/b; break;
			default: flag = 1;   
		}
		if(flag==1)
		{
			break;
		}
	}
	if(flag==1)
	{
		printf("ERROR");
	}
	else
	{
		printf("%d",a);
	}
	system("pause");
	return 0;
}
//放到后面研究哈仅限整数