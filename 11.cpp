#include<conio.h>
#include<stdio.h>
#include<math.h>
#define MAX 100
void nhapmatran(int a[][MAX], int &n);
void xuatmatran(int a[][MAX], int n);
double Tongtamgiactren(int a[][MAX], int n);
void main()
{
	int a[MAX][MAX],n;
	nhapmatran(a,n);
	printf("\nNoi dung cua ma tran\n");
	xuatmatran(a,n);
	double kq=Tongtamgiactren(a,n);
	printf("\nTong cac phan tam giac tren la  %8.2f",kq);
	getch();
	return 0;
}
void nhapmatran(int a[][MAX], int &n)
{
	do
	{
		printf("\nNhap n: ");
		scanf("%d",&n);
	}while(n<=0 || n>100);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			printf("\nSo phan tu a[%d][%d] la: ",i,j);
			scanf("%d",&a[i][j]);
		}
}
void xuatmatran(int a[][MAX], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
double Tongtamgiactren(int a[][MAX], int n)
{
	double sum=0;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1;j++)
			if(i<j)
				sum=sum+a[i][j];
	return sum;
}
