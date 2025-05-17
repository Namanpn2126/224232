#include<stdio.h>
int main()
{
int x,y,z,n,i;
printf("enter the number 1,add\n 2,sub \n 3,multiply\n 4,div");
scanf("%d",&i);
switch(i)
{
	case 1 :
		n=x+y+z;
	        printf("sum is:%d ",n);
		break ;
        case 2 :
		n=x-y-z;
		printf("sub is:%d",n);
		break ;
	case 3 :
		n=x*y*z;
	        printf("multiplty is:%d",n);
                break;
	case 4:
		n=x/y;
		n=y/z;
		printf("div is:%d",n);
		break;
       default :
		printf("invalid input:");
}
return 0;
}
