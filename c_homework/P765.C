#include <stdio.h>
#include <stdlib.h>

/* User Code Begin(�������ڱ��к����Ӵ��룬��������) */

/* ����ṹ������struct student, ��Ϊstruct student��������ΪSTUDENT */
typedef struct student
{
	int  num;
	char name[20];
	int math, english, computer;
	float average;
} STUDENT;

void qiupj(STUDENT banji[], int n); 
void paixu(STUDENT banji[], int n);


/* User Code End(�������Ӵ������) */

int main(void)
{
	STUDENT myclass[5], *pStu = myclass;
	int i;
	const int N = 5;

	/* User Code Begin(�������ڱ��к����Ӵ��룬��������) */
		
	printf("Please input info of students:No Name Math English Computer\n");
	/* ����forѭ�����ܣ��Ӽ��̸�5��Ԫ���������� */
	for (i=0; i<5; i++) 
	{
		printf("%d:", i+1); //��ʾ���
		scanf("%d %s %d %d %d", &myclass[i].num, myclass[i].name,
			&myclass[i].math, &myclass[i].english, &myclass[i].computer);
	}

	qiupj(myclass, 5); //���ú������ѧ����ƽ����
	paixu(myclass, 5); //���ú�������ѧ�����ݰ�ƽ��������


	/* User Code End(�������Ӵ������) */
	
	printf("\nResult of sort:\n");
	printf("Num   Name                 Math     English  Computer Average\n");
	for (i=0; i<N; i++)
	{
		printf("%-5d %-20s %-8d %-8d %-8d %-.2f\n", (pStu+i)->num, (pStu+i)->name,
			(pStu+i)->math, (pStu+i)->english, (pStu+i)->computer, (pStu+i)->average);
	}

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */

/* ���º����Ĺ��ܣ����ѧ����ƽ���� */
void qiupj(STUDENT banji[], int n)
{
	int i;

	for (i=0; i<n; i++)
	{
		banji[i].average = (float)(banji[i].math + banji[i].english + banji[i].computer) / 3;
	}
}

/* ���º����Ĺ��ܣ�����ѧ�����ݰ�ƽ���ִӸߵ������� */
void paixu(STUDENT banji[], int n)
{
	STUDENT tmp;
	int i, j;

	/* ����forѭ�����ܣ�ð�ݷ����� */
	for (j = 1; j <= n-1; j++)
	{
		for (i = 1; i <= n - j; i++)
		{
			if (banji[i-1].average < banji[i].average) 
			{
				tmp = banji[i-1];
				banji[i-1] = banji[i];
				banji[i] = tmp;
			}
		}
	}
}