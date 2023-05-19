#include<bits/stdc++.h>
using namespace std;

void import(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

void selectionsort(int a[],int n){
  int i,j,min;
   for(i=0;i<n-1;i++){
      for(j=n+1;j<n;j++){
	if(a[i]>a[j]){
	int temp = a[j];
	a[j] = a[i];
	a[i] = temp;
			}
		}
	}
}

//void sapsep(int a[],int n){
//	int o;
//	for (int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]>a[j])
//			{
//				o=a[j];
//				a[j]=a[i];
//				a[i]=o;
//			}
//		}
//}
//}
// int Dk(int a[],int n){
// 	for(int i=0;i<n;i++){
//       if(a[n-2]-a[n-1]>10){
//   		return 0;
// 	   }
//     n--;
//   }
//     return 1;
// }
//int Dk(int a[], int n)
//{
//	for (int i = 0; i < n-1; i++)
//	{
//		if ((a[i + 1] - a[i]) > 10)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
int main()
{
	int a[100];
	int n;
	cout<<"nhap n: ";
	cin>>n;
	import(a,n);
//	xuat(a,n);
	selectionsort(a,n);
	print(a,n);
	//cout<<Dk(a,n);
	return 0;
}
