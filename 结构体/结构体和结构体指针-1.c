/*�ṹ��ͽṹ��ָ��,������ṹ���Ա��ʱ��ʱ����������ַ������*/

#include <stdio.h>

struct student
{
	int age;
	char name[100];
	float score;
};

int main(void)
{
	struct student stu = {18,"��ǿ",88.3f};
	struct student *pst;
	pst = &stu;

	printf("%d %s %.1f\n",stu.age,stu.name,stu.score);//�ṹ���Ա���������һ
	printf("%d %s %.1f\n",pst->age,pst->name,pst->score);//�ṹ���Ա�����������

	return 0;
}