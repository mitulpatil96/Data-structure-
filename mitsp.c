#include<stdio.h>
int main()
{

int i,j,row=5;
printf("enter the numbers of rows");
scanf("%d",&row);

for( i= 1;i<=row;i++){
	for(j=1;j<=i;j++){
		printf("x");
	}
	printf("\n");
}
return 0;
}
