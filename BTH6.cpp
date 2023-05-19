#include<bits/stdc++.h>
using namespace std;

void NhapMang(char gt[],int tuoi,int mssv){
        for(int i=0;i<5;i++){
            cin>>mssv;
            cin>>tuoi;
            cin>>gt[i];
            //cout<<"\n";
        }
}
void XuatMang(char gt[],int tuoi,int mssv){
        for(int i=0;i<5;i++){
            cout<<mssv<<endl;
            cout<<tuoi<<endl;
            cout<<gt[i]<<endl;
        }


}

int main(){
        int tuoi,mssv;
        char gt[100];
        NhapMang(gt,tuoi,mssv);
        cout<<"\n";
        XuatMang(gt,tuoi,mssv);
        system("pause");
    return 0;
}