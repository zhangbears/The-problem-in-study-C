/*����ѧ������Ϣ,���ɼ���������*/
#include <stdio.h>
#include <malloc.h>
struct student
{
	int num;
	char name[50];
	float score;
};

//���뺯��   
void input(struct student *p, int len)		//��ʱ�����ṹ��ָ��pָ��ľ��������ָ��,���Դ��ݲ�����ʱ����**p
{
	int i;
	for (i = 0;i < len;i++)
	{
		printf("������ѧ����ѧ��:");
		scanf_s("%d", &p[i].num);
		printf("������ѧ��������:");
		scanf_s("%s", p[i].name, 49);
		printf("������ѧ���ĳɼ�:");
		scanf_s("%f", &p[i].score);
	}
}

//������
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

	printf("������Ҫ¼��ѧ����Ϣ��ѧ���ĸ���\n");
	scanf_s("%d", &len);

	pArr = (struct student *)malloc(len * sizeof(struct student));

	input(pArr, len);   //���ú���

	//���
	printf("ѧ��\t����\t�ɼ�\n");
	printf("------------------------------\n");
	for (i = 0;i < len;i++)
	{
		printf("%d\t%s\t%.2f\n", pArr[i].num, pArr[i].name, pArr[i].score);
	}

	sort(pArr, len);

	printf("���ɼ�����\n");
	printf("ѧ��\t����\t�ɼ�\n");
	printf("------------------------------\n");
	for (i = 0;i < len;i++)
	{
		printf("%d\t%s\t%.2f\n", pArr[i].num, pArr[i].name, pArr[i].score);
	}

	return 0;
}