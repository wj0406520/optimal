#include <stdio.h>
#include <string.h>
int reverseNum(char *str)
{
	int n=0;
	int m[10]={0,0,0,0,0,0,0,0,0,0};
	int length = strlen(str);
	for (int j = 0; j < length; ++j)
	{
		int num = str[j] - '0';
		m[num]+=1;
		switch(num) {
		   case 9:
		   		n-=m[9];
		   case 8:
		   		n-=m[8];
		   case 7:
		   		n-=m[7];
		   case 6:
		   		n-=m[6];
		   case 5:
		   		n-=m[5];
		   case 4:
		   		n-=m[4];
		   case 3:
		   		n-=m[3];
		   case 2:
		   		n-=m[2];
		   case 1:
		   		n-=m[1];
				n+=length-j;
		}
	}
	return n;
}

int main()
{
	char str[] = "123401";
	int num = reverseNum(str);
	printf("%d\n", num);
	return 0;
}
