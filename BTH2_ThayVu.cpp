#include<bits/stdc++.h>
using namespace std;

void NhapMang(int a[],int n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
}
void XuatMang(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

}
// void Selectionsort(int a[],int n){
//     int temp;
//         for (int i=0;i<n-1;i++){
//             min=i;
// 		    for(int j=i+1;j<n;j++){
//                 if(a[min]>a[j]){
//                 min=j;
//             }
//             temp=a[j];
//                 a[j]=a[i];
//                 a[i]=temp;
//                 XuatMang(a,n); 
//                 cout<<"\n";

//         }
//     }
// }
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
void selectionSort(int a[], int n)
{
    int i, j, min_idx,temp;
    for (i = 0; i < n-1; i++)
    {
    min_idx = i;
    for (j = i+1; j < n; j++){
        if (a[j] < a[min_idx])
            {
             min_idx = j;
            }

    }
    swap(a[min_idx], a[i]);
     XuatMang(a,n); 
        cout<<"\n";
    }

}
int main(){
        int n;
        int a[100];
        cin>>n;
        NhapMang(a,n);
        XuatMang(a,n);
        cout<<"\n";
        selectionSort(a,n);
        //XuatMang(a,n);
    system("pause");
    return 0;
}