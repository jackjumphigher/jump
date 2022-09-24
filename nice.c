
//生成随机数并排序

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

	int a [10];
	int i,max,min,j,x;
	int add = 0;
	float ave;
	 
	printf("随机生成十个数：\n\n");

	srand(time(0));//更为方便
	 //srand((unsigned)time(NULL));


	for (i = 0; i <=9; i++)

 a[i] = 100+rand()%101;

	for (i = 0; i <=9; i++)
	printf("%d  ", a[i]);
	printf("\n\n\n\n");
	
 max=a[0];

	  min=a[0];
	

   for (i=0;i<=9;i++)
   {
	   if (max<a[i])
		   max=a[i];
	   
   }
		for(i=0;i<=9;i++)
		{
	if(min>a[i])
		min=a[i];
	
		}
            printf("最大值为%d\n",max);

			 printf("最小值为%d\n",min);

		printf("去除最大值和最小值后：\n");

for (i=0;i<=9;i++ )

{

	if (a[i]!=max && a[i]!=min )
	{
		 
		printf("%d  ",a[i] );

	}

}
 for (i=0;i<=7;i++)
 {
	 add+=a[i];
 }
 

ave=(float)add/8;
printf("\n");
printf("\n均值为：%.2f  \n",ave);

printf("\n");
printf("从大到小进行排序后得到：\n");

for (i=0;i<=7;i++)
	for (j=i+1;j<=8;j++)
{
	if (a[i]<a[j])
	{
		x=a[i];
	a[i]=a[j];
	   a[j]=x;
	}
}
	for (i=0;i<=7;i++)

	 printf("  %d",   a[i]);

	printf("\n");

	system("pause");
	return 0;
}