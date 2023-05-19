#include<bits/stdc++.h>
#include<math.h>
using namespace  std;

int main(){
	float Gio;
	float DoiGioThanhGiay;
	int giaphong;
	float Sau1H;
	cin>>Gio;
	giaphong=100;
	DoiGioThanhGiay= 3600*Gio;
	Sau1H= giaphong + (30*(Gio-1));
	//cout<<DoiGioThanhGiay;
//	if (DoiGioThanhGiay<3600){
//		cout<<" Gia Phong = "<<Gio*100;
//	}
//	else if(DoiGioThanhGiay = 3600){
//	 	cout<<" Gia Phong = "<<"100"; 
//	}
//	else {
//		cout<<" Gia Phong = "<<Sau1H;
//	}
 	if(DoiGioThanhGiay<=3600){
 		if(DoiGioThanhGiay=3600){
 		 	cout<<" Gia Phong = "<<giaphong;
 		}
 		else(DoiGioThanhGiay<3600);{
 			cout<<" Gia Phong = "<<Gio*100;
 		}
	 }
	 else{
	 	cout<<" Gia Phong = "<<Sau1H;
	 }
 return 0;
}
