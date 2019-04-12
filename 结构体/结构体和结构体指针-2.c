

#include <stdio.h>

struct student
{
	int age;
	char name[100];
	float score;
} stu1;


int main(void)
{
	//stu1 = {18,"李胜",87.2f};	error!	//结构体赋初值时候,可以在定义的时候赋值,也可以对单个的结构体成员进行赋值,如果定义完毕,想整体赋值就要重新定义结构体变量并整体赋值
	struct student stu2 = {17,"lucy",85.4f};
	struct student stu1 = stu2;

	printf("%d %s %.1f\n",stu1.age,stu1.name,stu1.score);

	return 0;
}