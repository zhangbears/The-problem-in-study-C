/*����ѧ������Ϣ�����ɼ�����*/

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
	printf("������ѧ����ѧ��");
	scanf_s("%d",&p->num);
	printf("������ѧ��������");
	strcpy(&p->name,getchar());
	printf("������ѧ���ĳɼ�");
	scanf_s("%f", &p->score);
}
*/

void output(struct student *p)
{
	printf("ѧ��\t����\t�ɼ�\n");
	printf("----------------------------------------");
	printf("%d\t%s\t%.2f\n",p->num,p->name,p->score);	
}
int main(void)
{
	struct student stu1,stu2,stu3;

	printf("������ѧ����ѧ��");
	scanf_s("%d", &stu1.num);
	
	//printf("%d",stu1.num);

	printf("������ѧ��������");
	scanf_s("%s",stu1.name);
	printf("������ѧ���ĳɼ�");
	scanf_s("%f", stu1.score);

	//input(&stu1);
	//input(&stu2);
	//input(&stu3);

	//output(&stu1);
	//output(&stu2);
	//output(&stu3);

	return 0;
}