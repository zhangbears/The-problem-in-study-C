/*结构体和结构体指针,在输出结构体成员的时候时候可以用两种方法输出*/

#include <stdio.h>

struct student
{
	int age;
	char name[100];
	float score;
};

int main(void)
{
	struct student stu = {18,"李强",88.3f};
	struct student *pst;
	pst = &stu;

	printf("%d %s %.1f\n",stu.age,stu.name,stu.score);//结构体成员的输出方法一
	printf("%d %s %.1f\n",pst->age,pst->name,pst->score);//结构体成员的输出方法二

	return 0;
}