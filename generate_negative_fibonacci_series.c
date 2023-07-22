#include<stdio.h>
int main()
{
	int i=1, num, prev = 0, curr = 1, nxt_tr = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("Invalid input\n");
		return 0;
	}
	while(nxt_tr >= num && -nxt_tr >= num)
	{
		printf("%d ",nxt_tr);
		prev = curr;
		curr = nxt_tr;
		nxt_tr = prev - curr;

	}
	printf("\n");
	return 0;

}
