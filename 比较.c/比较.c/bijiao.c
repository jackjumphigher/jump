int main ()
{
	int a = 0;
	int b = 5;
	int max = 0;
	max = a > b ? a: b;
	//����һ��д��
	/*if (a > b)
		max = a;
	else 
		max = b;*/
	
	printf("%d\n",max);
	system("pause");
	return 0;
}