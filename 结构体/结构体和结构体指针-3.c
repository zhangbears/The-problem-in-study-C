/*����ѧ������Ϣ�����ɼ�����*/

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
		printf("������ѧ����ѧ��");
		scanf_s("%d", &p[i+1]->num);
		printf("������ѧ��������");
		scanf_s("%s", p[i+1]->name, 49);
		printf("������ѧ���ĳɼ�");
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
	printf("������Ҫѧ��������");
	scanf_s("%d",&len);
	create_stu(&pArr,len);
	

	printf("ѧ��\t����\t�ɼ�\n");
	printf("----------------------------------------\n");
	output(&pArr,len);

	return 0;
}