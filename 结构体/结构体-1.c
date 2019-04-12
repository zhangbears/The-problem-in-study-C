/*结构体的定义及使用
在定义结构体时的方法有一下三种,常用的是第一种,第二种和第三种不常用;因为不严谨
1.struct 结构体名称
{
	结构体成员1;
	结构体成员2;
	……
};
2.struct 结构体名称
{
	结构体成员1;
	结构体成员2;
	……
} 结构体变量名称;

3.struct 
{
	结构体成员1;
	结构体成员2;
	……
};
*/

#include <stdio.h>

struct student 
{
	char name[100];
	int age;
	float score;
};

int main(void)
{
	struct student stu = {"张三",18,86.5f};

	printf("%s %d, %.1f\n",stu.name,stu.age,stu.score);

	return 0;
}