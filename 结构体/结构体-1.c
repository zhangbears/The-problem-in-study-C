/*�ṹ��Ķ��弰ʹ��
�ڶ���ṹ��ʱ�ķ�����һ������,���õ��ǵ�һ��,�ڶ��ֺ͵����ֲ�����;��Ϊ���Ͻ�
1.struct �ṹ������
{
	�ṹ���Ա1;
	�ṹ���Ա2;
	����
};
2.struct �ṹ������
{
	�ṹ���Ա1;
	�ṹ���Ա2;
	����
} �ṹ���������;

3.struct 
{
	�ṹ���Ա1;
	�ṹ���Ա2;
	����
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
	struct student stu = {"����",18,86.5f};

	printf("%s %d, %.1f\n",stu.name,stu.age,stu.score);

	return 0;
}