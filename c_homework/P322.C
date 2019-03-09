#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	int data1, data2, line = 0, panduan;
	char op, str[200];

	fp = fopen("Comp.txt", "r");
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}

	fgets(str, 200, fp); //���ļ��ж���һ���ַ�������ŵ�����str��
	while (!feof(fp)) //�ļ�δ����		
	{
		line++;  //����һ��
		panduan = sscanf(str, "%d %c %d", &data1, &op, &data2); //������str�е��ַ���ת���ɸ�ʽ��ָ�������ݲ�������Ӧ�ı���
		if (panduan == 3) //��һ����ʽ
		{
			if (op == '+') //�����Ϊ'+'
			{
				printf("Line %03d:  %5d + %-5d = %-6d\n", line, data1, data2, data1 + data2);
			}
			else if (op == '-') //�����Ϊ'-'
			{
				printf("Line %03d:  %5d - %-5d = %-6d\n", line, data1, data2, data1 - data2);
			}
			else //���������
			{
				printf("Line %03d: Error!\n", line);
			}
		}
		else if (panduan == EOF) //����
		{

		}
		else //������Ҫ�����ʽ
		{
			printf("Line %03d: Error!\n", line);
		}
		fgets(str, 200, fp); //���ļ��ж���һ���ַ�������ŵ�����str��

	}

	fclose(fp);

	return 0;
}