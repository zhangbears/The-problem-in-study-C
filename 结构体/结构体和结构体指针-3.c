/*输入学生的信息并将成绩排序*/

#include <stdio.h>
#include <malloc.h>

struct student
{
	int num;
	char name[50];
	float score;
};

void create_stu(struct student **p, int len)
{
	int i;
	*p = (struct student *)malloc(len * sizeof(struct student));
	for (i = 0;i < len;i++)
	{		
		printf("请输入学生的学号");
		scanf_s("%d", &p[i+1]->num);
		printf("请输入学生的姓名");
		scanf_s("%s", p[i+1]->name, 49);
		printf("请输入学生的成绩");
		scanf_s("%f", &p[i+1]->score);
	}
}


void output(struct student **p,int len)
{
	int i;
	for (i = 0;i < len;i++)
	{
		printf("%d\t%s\t%.2f\n", p[i]->num, p[i]->name, p[i]->score);
	}
}

int main(void)
{
	struct student *pArr;
	int len;
	printf("请输入要学生的数量");
	scanf_s("%d",&len);
	create_stu(&pArr,len);
	

	printf("学号\t姓名\t成绩\n");
	printf("----------------------------------------\n");
	output(&pArr,len);

	return 0;
}