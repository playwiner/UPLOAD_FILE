#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* User Code Begin(考生可在本行后添加代码，定义程序中使用的结构体类型，行数不限) */
struct goods
{
	char pinming[21];
	char guige[11];
	float danjia;
	long shuliang;
};
/* User Code End(考生添加代码结束) */

int main(void)
{
	int n;
	char sppm[21];
	FILE *fp;
	struct goods SP;

	printf("Please input shang pin pin ming:");
	gets(sppm);

	fp = fopen("d:\\cExam\\sp.txt", "r");
	if (NULL == fp)
	{
		printf("file open error!");
		exit(0);
	}

	n = 0;
	printf("\ncha zhao qing kuang:");
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	while (fscanf(fp, "%s%s%f%ld", SP.pinming, SP.guige, &SP.danjia, &SP.shuliang) == 4)
	{	
	/* User Code End(考生添加代码结束) */
		if (strcmp(sppm, SP.pinming) == 0)
		{
			n++;
			printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
		}
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	}
	if (0 == n)
	{
		printf("\nmei you shang pin :%s", sppm);
	}
	

	/* User Code End(考生添加代码结束) */

	return 0;
}
