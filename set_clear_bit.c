#include<stdio.h>
int main()
{
    int c,num,n,m; 					//Initializing variables
    printf("Enter the number: ");	
    scanf("%d",&num);				//Reading input number from user
    printf("Enter 'N': ");
    scanf("%d",&n);					//Reading 'Nth' bit
    printf("Enter 'M': ");
    scanf("%d",&m);					//Reading 'M' bit
    if(num&(1<<n))					//Condition for checking Nth bit is set or not
    {
        c=num&(~(1<<m));			//Clearing Mth bit if Nth bit is set
        printf("Updated value of num is %d\n",c);
    }
    else
        printf("Updated value of num is %d\n",num);

    return 0;
}
