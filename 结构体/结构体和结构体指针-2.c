

#include <stdio.h>

struct student
{
	int age;
	char name[100];
	float score;
} stu1;


int main(void)
{
	//stu1 = {18,"��ʤ",87.2f};	error!	//�ṹ�帳��ֵʱ��,�����ڶ����ʱ��ֵ,Ҳ���ԶԵ����Ľṹ���Ա���и�ֵ,����������,�����帳ֵ��Ҫ���¶���ṹ����������帳ֵ
	struct student stu2 = {17,"lucy",85.4f};
	struct student stu1 = stu2;

	printf("%d %s %.1f\n",stu1.age,stu1.name,stu1.score);

	return 0;
}