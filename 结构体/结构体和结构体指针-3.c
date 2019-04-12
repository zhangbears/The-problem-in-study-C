/*输入学生的信息并将成绩排序*/

#include <stdio.h>
#include <string.h>



struct student
{
	int num;
	char name[50];
	float score;
};
/*
void input(struct student *p)
{
	printf("请输入学生的学号");
	scanf_s("%d",&p->num);
	printf("请输入学生的姓名");
	strcpy(&p->name,getchar());
	printf("请输入学生的成绩");
	scanf_s("%f", &p->score);
}
*/

void output(struct student *p)
{
	printf("学号\t姓名\t成绩\n");
	printf("----------------------------------------");
	printf("%d\t%s\t%.2f\n",p->num,p->name,p->score);	
}
int main(void)
{
	struct student stu1,stu2,stu3;

	printf("请输入学生的学号");
	scanf_s("%d", &stu1.num);
	
	//printf("%d",stu1.num);

	printf("请输入学生的姓名");
	scanf_s("%s",stu1.name);
	printf("请输入学生的成绩");
	scanf_s("%f", stu1.score);

	//input(&stu1);
	//input(&stu2);
	//input(&stu3);

	//output(&stu1);
	//output(&stu2);
	//output(&stu3);

	return 0;
}