/*scanf_s函数
scanf_s函数中scanf_s("输入格式",存储变量,int 存储大小)*/
#include <stdio.h>


int main(void)
{
	char name[20];

	scanf_s("%s",name,19);
	//gets_s(name);
	printf("%s\n",name);
	return 0;
}