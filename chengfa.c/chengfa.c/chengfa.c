#include <stdio.h>
int main(void)
{
	int feet, fathoms;
	fathoms = 2;
	feet = 6*fathoms;
	printf("there are %d feet in %d fathoms!\n" ,feet,fathoms);
	printf("yes,I said %d feet\n",6*fathoms);
	system("pause");
	return 0;
}