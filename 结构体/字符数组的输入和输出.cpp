/*scanf_s����
scanf_s������scanf_s("�����ʽ",�洢����,int �洢��С)*/
#include <stdio.h>


int main(void)
{
	char name[20];

	scanf_s("%s",name,19);
	//gets_s(name);
	printf("%s\n",name);
	return 0;
}