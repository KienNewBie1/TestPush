#include<bits/stdc++.h>
using namespace std;

void NhapMang(string gt,int tuoi,int mssv){
        for(int i=0;i<5;i++){
            cin>>mssv;
            cin>>tuoi;
            getline(cin,gt);
            //cout<<"\n";
        }
}
void XuatMang(string gt,int tuoi,int mssv){
        for(int i=0;i<5;i++){
            cout<<mssv<<endl;
            cout<<tuoi<<endl;
            cout<<gt;
        }
}
int main(){
        int n;
       string gt;
        cin>>n;
        NhapMang(gt,tuoi,mssv);
        cout<<"\n";
        XuatMang(gt,tuoi,mssv);
    return 0;
}