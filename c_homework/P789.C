#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
void deleteother(char *str);

int main(void)
{
	char str[100];

	printf("Please input the string : ");
	gets(str);

	deleteother(str);
	printf("\noutput: %s\n", str);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void deleteother(char *str)
{
	int i, j;

	for (i = 0, j = 0; *(str + i) != '\0'; i++)
	{
		if ((*(str + i) >= 'a' && *(str + i) <= 'z') || (*(str + i) >= 'A' && *(str + i) <= 'Z'))
		{
			*(str + j) = *(str + i);
			j++;
		}
	}
	*(str + j) = '\0';
}