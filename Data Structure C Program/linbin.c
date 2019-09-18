#include<stdio.h>
void linearsearch(int);
void binarysearch(int);
int main()
{
int ch,array[20],search,i,num;
while(1)
{
printf("1.Linear Search\n");
printf("2.Binary search\n");
printf("3.Exit\n");
printf("Enter Your choice : \n");
scanf("%d",&ch);
switch(ch)
{
case 1: linearsearch();
	break;
case 2: binarysearch();
	break;
case 3:exit(0);
	break;
default: printf("Invalid Choice");
	break;
}
}
}
void linearsearch(int)
{
  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}
void binarysearch(int)
{
int c,first,last,middle,n,search,array[100];
printf("enter the number of elements");
scanf("%d",&n);
printf("enter %d elements in ascending order \n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("enter the value to find \n");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
if(array[middle]<search)
first=middle+1;
else if(array[middle]==search)
{
printf("%d found at location %d \n",search,middle+1);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("Not Found! %d is not present in the list \n",search);
return 0;
}

