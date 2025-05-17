#include<stdio.h>
int main()
{
int a,b,c,d,i;
printf("enter the number 1,add\n 2,sub \n 3,multiply\n 4,div");
scanf("%d",&i);
switch(i)
{
	case 1 :
		c=a+b+d;
	        printf("sum is:%d ",c);
		break ;
        case 2 :
		c=a-b-d;
		printf("sub is:%d",c);
		break ;
	case 3 :
		c=a*b*d;
	        printf("multiplty is:%d",c);
                break;
	case 4:
		c=a/b;
		c=c/d;
		printf("div is:%d",c);
		break;
       default :
		printf("invalid input:");
}
return 0;
}
