/*输入学生的信息,按成绩排序后并输出*/
#include <stdio.h>
#include <malloc.h>
struct student
{
	int num;
	char name[50];
	float score;
};

//输入函数   
void input(struct student *p, int len)		//此时参数结构体指针p指向的就是数组的指针,所以传递参数的时候不用**p
{
	int i;
	for (i = 0;i < len;i++)
	{
		printf("请输入学生的学号:");
		scanf_s("%d", &p[i].num);
		printf("请输入学生的姓名:");
		scanf_s("%s", p[i].name, 49);
		printf("请输入学生的成绩:");
		scanf_s("%f", &p[i].score);
	}
}

//排序函数
void sort(struct student *p, int len)
{
	struct student t;
	int i, j;
	for (i = 0;i < len;i++)
	{
		for (j = 0;j < len - 1;j++)
		{
			if (p[j].score < p[j + 1].score)
			{
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}
}
int main(void)
{
	int len;
	int i;
	struct student *pArr;

	printf("请输入要录入学生信息的学生的个数\n");
	scanf_s("%d", &len);

	pArr = (struct student *)malloc(len * sizeof(struct student));

	input(pArr, len);   //调用函数

	//输出
	printf("学号\t姓名\t成绩\n");
	printf("------------------------------\n");
	for (i = 0;i < len;i++)
	{
		printf("%d\t%s\t%.2f\n", pArr[i].num, pArr[i].name, pArr[i].score);
	}

	sort(pArr, len);

	printf("按成绩排序\n");
	printf("学号\t姓名\t成绩\n");
	printf("------------------------------\n");
	for (i = 0;i < len;i++)
	{
		printf("%d\t%s\t%.2f\n", pArr[i].num, pArr[i].name, pArr[i].score);
	}

	return 0;
}