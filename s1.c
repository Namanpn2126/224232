#include<stdio.h>
int main()
{
int a,b,c,i;
printf("enter the number 1,add\n 2,sub \n 3,multiply\n 4,div");
scanf("%d",&i);
printf("hello wrold:");
switch(i)
{
	case 1 :
		printf("enter two number");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("sum is:%d ",c);
		break ;
        case 2 :
		 printf("enter two number");
                scanf("%d%d",&a,&b);
		c=a-b;
		printf("sub is:%d",c);
		break ;
	case 3 :
		 printf("enter two number");
                scanf("%d%d",&a,&b);
		c=a*b;
	        printf("multiplty is:%d",c);
                break;
	case 4:
		 printf("enter two number");
                scanf("%d%d",&a,&b);
		c=a/b;
		printf("div is:%d",c);
		break;
       default :
		printf("invalid input:");
}
//prog has been ended 
return 0;
}
