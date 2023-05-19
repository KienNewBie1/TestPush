#include<bits/stdc++.h>
using namespace std;

void import(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}

void printArray(int a[],int n){
	cout<<endl;
//	cout<<"so nguyen lon thu 2 trong mang: "<<a[n-2];
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

//void swap(int &temp,int  &temp1){
//	int a = temp;
//	temp = temp1;
//	temp1= a;
//}

//void QuickSort(int a[], int L, int R)
//{ int i,j,x;
//x = a[(L+R)/2]; //ch?n ph?n t? gi?a làm m?c
//i =L; j = R;
//do {
//while(a[i] < x) i++;
//while(a[j] > x) j--;
//if(i <= j)
//{ swap(a[i],a[j]);
//i++ ; j--; }
//} while(i <= j);
//if(L < j) QuickSort(a,L,j);
//if(i < R) QuickSort(a,i,R);
//}

//void QuickSort(int a[], int L, int R){
//	int i,j,x;
//	x = a[(L+R)/2];
//	i = L;
//	j = R;
//	do{
//		while(a[i]<x) i++;
//		while(a[j]>x) j--;
//		if(i<=j){
//			int temp = a[j];
//			a[j] = a[i];
//			a[i] = temp;
//			i++;
//			j--;
//		}
//	} while (i<=j);
//	if(L<j) QuickSort(a,L,j);
//	if(i<R) QuickSort(a,i,R); 
//}

//void insertionSort(int a[],int n){
//	int i,j,x;
//	for(i=1;i<n;i++){
//		x=a[i];
//		j=i-1;
//		while(j>=0 && a[j] >x ){
//			a[j+1]=a[j];
//			j--;
//		}
//		a[j+1]=x;
//		j++;
//		cout<<"Insert value "<<x<<" from "<<i<<" into "<<j<<endl;
//	}
//}

//void selectionSort(int a[],int n){
//	int min;
//	for(int i=0;i<n-1;i++){
//		min = i;
//		for(int j=i+1;j<n;j++){
//			if(a[min]>a[j]){
//				min=j;
//				int temp = a[min];
//				a[min] = a[i];
//				a[i] = temp;
//			}
//		}
//	}
//}

void bubleSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i ;j--){
			if(a[j-1]>a[j]){
				int temp= a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}

//void interchangeSort(int a[], int n){
//	int k;
//	for(int i=0;i<n-1;i++){
//		for (int j=i+1;j<n;j++){
//			if(a[i]>a[j]){
//				k=a[i];
//				a[i]=a[j];
//				a[j]=k;
//			}
//		}
//	}
//}

int main (){
  int n,L,R;
  int a[100];
  cout<<"nhap n: ";
  cin>>n;
  import(a,n);
  bubleSort(a,n);
  printArray(a,n);
  return 0;
}
