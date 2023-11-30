#include<stdio.h>
int sumtwo(int a[5][5],int m,int n);
int main()
{
	int b=5,c=5,sum;
	int a[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	printf("所有元素之和:%d",sumtwo(a,b,c));
	return 0;
}

int sumtwo(int a[5][5],int m,int n)
{
	int sum=0,i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=sum+a[i][j];
		}
	}
	return sum;
}
