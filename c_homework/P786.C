#include<stdio.h>
#include<malloc.h>

#define LEN sizeof(struct student)

int sum = 0;
/* User Code Begin(�������ڱ��к����Ӵ��룬���������ʹ�õĽṹ�����͡������Զ��庯����ԭ�ͣ���������) */
struct student
{
	int num,score;
	struct student *next;
};

struct student *creat(void);
struct student *merge(struct student *ah,struct student *bh);

/* User Code End(�������Ӵ������) */

/* print�Թ涨�ĸ�ʽ��ɱ�����ʾָ�������� */
void print(struct student *Head);

int main(void)
{
	struct student *ah, *bh, *ac;
	
	printf("��������A��������ѧ�ż��ɼ�(������Ϊ0ʱ��ʾֹͣ)��\n");
	ah = creat();
	printf("\n��������B��������ѧ�ż��ɼ�(������Ϊ0ʱ��ʾֹͣ)��\n");
	bh = creat();

	printf("\n����A��");
	print(ah);
	printf("\n����B��");
	print(bh);
	
	ac = merge(ah, bh);
	printf("\n������������%d����\n����C��", sum);
	print(ac);
	
	return 0;
}

void print(struct student *Head)
{
	while (Head != NULL)
	{
		printf("%d,%d  ", Head->num, Head->score);
		Head = Head->next;
	}
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
struct student *creat(void)
{
	struct student *Head,*p1,*p2;
	int flag=0;

	Head=p1=p2=(struct student*)malloc(LEN);
	while(1)
	{
		sum++;
		printf("ѧ�� %d: ",sum);
		scanf("%d%d",&p1->num,&p1->score);
		if(p1->num==0 && p1->score==0)
		{
			break;
		}
		if(Head==NULL)
		{
			Head=p1;
		}
		else
		{
			p2->next=p1;
		}
		p2=p1;
		p1=(struct student*)malloc(LEN);
		flag=1;
	} 
	p2->next=NULL;

	if(flag==0)
	{
		return NULL;
	}
	return Head;
}

struct student *merge(struct student *ah, struct student *bh)
{
	int i, tmpnum, tmpscore;
	struct student *Head, *p0;
	if (ah == NULL && bh == NULL)
	{
		return NULL;
	}
	else if (ah != NULL && bh == NULL)
	{
		Head = ah;
	}
	else if (ah == NULL && bh != NULL)
	{
		Head = bh;
	}
	else
	{
		Head = p0 = ah;
		while (p0->next != NULL)
		{
			p0 = p0->next;
		}
		p0->next = bh;
	}
	for (i = 1; i < sum; i++)
	{
		p0 = Head;
		while (p0->next != NULL)
		{
			if (p0->num > p0->next->num)
			{
				tmpnum = p0->num;
				p0->num = p0->next->num;
				p0->next->num = tmpnum;

				tmpscore = p0->score;
				p0->score = p0->next->score;
				p0->next->score = tmpscore;
			}
			p0 = p0->next;
		}
	}
	return Head;
}