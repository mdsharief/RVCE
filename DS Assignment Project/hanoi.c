#include<stdio.h>
void towers(int,char,char,char);
int main()
{
	int num;
	printf("\n Enter The Number Of Disks : ");
	scanf("%d",&num);
	printf("The Sequence of Moves Involved In The Tower Of Hanoi Are : \n");
	towers(num,'A','C','B');
	return 0;
}
void towers(int num,char frompeg,char topeg,char auxpeg)
{
	if(num==1)
	{
		printf("\n Move Disk 1 From Peg %c To Peg %c\n",frompeg,topeg);
		return;
	}
	towers(num-1,frompeg,auxpeg,topeg);
	printf("\n Move Disk %d From Peg %c To Peg %c\n",num,frompeg,topeg);
	towers(num-1,auxpeg,topeg,frompeg);
}

