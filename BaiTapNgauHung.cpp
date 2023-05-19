#include<bits/stdc++.h>
using namespace std;
 int main(){
    float StartHour;
    float EndHour;
    float SogioSuDung;
    float ThreeHuor;
    cout<<"Nhap StartHour: ";
    cin>>StartHour;
    cout<<"Nhap EndHour: ";
    cin>>EndHour;
    SogioSuDung = EndHour - StartHour;
    ThreeHuor = 3*30000;
    if(SogioSuDung <=3){
        cout<<"So Tien Phai Tra: "<<SogioSuDung*30000;
    }
    else {
        float tien = (SogioSuDung-3)*(30000*0.7);
        cout<<"So Tien Phai Tra: "<<ThreeHuor+tien<<endl; 
    }
    system("pause");
    return 0;
 }