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
        cout<<"\n";
}

void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
int partition(int a[], int low, int high){
    int pivot = a[high];     // Chọn pivot là phần tử cuối cùng
    int right = high-1, left = low;    // Chọn left, right
    while(true){                         // Trong khi còn đúng (left < right)
        while(left<=right && a[left]<pivot) left++;     // Tìm left thích hợp
        while(right>=left && a[right]>pivot) right--;   // Tìm right thích hợp
        if(left>=right)              // left >= right dừng
            break;
        swap(a[left], a[right]);     // Đổi chỗ
        left++;                     // Xét phần tử tiếp theo
        right--;
    }
    swap(a[left], a[high]);            // Đổi chỗ pivot về giữa mảng
    return left;                       // Trả về vị trí của pivot  
}
// Hàm quick sort
void QuickSort(int a[], int low, int high,int n){
    if(low < high)  //Mảng có nhiều hơn 0 phần tử
    {
        int pivot = partition(a, low, high); 
        XuatMang(a,n); // Chia đôi mảng
        QuickSort(a,low, pivot-1,n);           // Đệ quy bên trái
        QuickSort(a, pivot+1, high,n);         // Đệ quy bên phải
    }    
}
int main(){
        int n;
        int a[100];
        cin>>n;
        NhapMang(a,n);
        QuickSort(a,0,n-1,n);
        //XuatMang(a,n);
        system("pause");
    return 0;
}