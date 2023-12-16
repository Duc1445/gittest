#include <iostream>
using namespace std;
void input(int mang[100][100], int &x, int &y){
	cout<<"Nhap chieu x cua mang: ";
	cin>>x;
	cout<<"Nhap chieu y cua mang: ";
	cin>>y;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<"Nhap phan tu cho mang["<<i<<"]["<<j<<"]: ";
			cin>>mang[i][j]; 
		} 
	} 
	cout<<endl; 
} 
void output(int mang[100][100], int x, int y){
	for(int i=0;i<x;i++){ 
		for(int j=0;j<y;j++){
			cout<<"Phan tu cua mang["<<i<<"]["<<j<<"] = "<<mang[i][j]<<endl;
		} 
	} 
	cout<<endl; 
} 
void findmang(int a[100][100], int x, int y){
	int phantutimkiem;
	bool check=false; 
	cout<<"Nhap phan tu ban muon tim: ";
	cin>>phantutimkiem; 
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(a[i][j]==phantutimkiem){
				cout<<"a["<<i<<"]["<<j<<"] ";
				check=true; 
			} 
		} 
	}  
	if(check==false) 
	cout<<"Phan tu khong co trong mang!";
	else
	cout<<"la cac vi tri chua phan tu ban tim kiem."; 
} 
void maxmang(int a[100][100], int x, int y){
	int Max=a[0][0];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(Max<a[i][j])
			Max=a[i][j]; 
		} 
	}  
	cout<<"Phan tu lon nhat trong mang la "<<Max<<endl; 
} 
void timsonguyento(int a[100][100], int x, int y){ 
	int nguyento[x*y];
	int vitringuyento=0; 
	bool kiemtra=false; 
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			 bool check=true;
			 if(a[i][j]<2)
			 check=false;
			 else{
			 	for(int uocso=2;uocso<a[i][j];uocso++){
			 		if(a[i][j]%uocso==0){
			 			check=false;
						break; 
					 } 
				 } 
			 } 
			 if(check==true){
			 	nguyento[vitringuyento]=a[i][j]; 
			 	vitringuyento++; 
			 	kiemtra=true; 
			 }
		} 
	}  
	if(kiemtra==true){
		cout<<"Cac phan tu la so nguyen to la: " ;//6 4 3 2 1    forx:00=6 00=6 01=5 02=4 10=3 11=2 12=1  
		for(int i=0;i<vitringuyento;i++) {//
			cout<<nguyento[i]<<" "; //
		}
	}
	else
	cout<<"Khong co so nguyen to trong mang!";
	cout<<endl;                
} 
void doigiatri(int &a, int &b){
	int bientam=a;
	a=b;
	b=bientam; 
} 
void xapxepphantu(int a[100][100], int x, int y){
	int b[x*y];
	int vitriphantu=0; 
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			b[vitriphantu]=a[i][j];
			vitriphantu++; 
		} 
	}  
	for(int i=0;i<x*y-1;i++){
        for(int j=i+1;j<x*y;j++) {
            if(b[i]>b[j])
 			doigiatri(b[i],b[j]); 
        }
    }
    vitriphantu=0; 
   	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			 a[i][j]=b[vitriphantu];
			 vitriphantu++; 
		} 
	}  
} 
int main(){
	int mang[100][100], x, y;
	input(mang,x,y);
//	maxmang(mang,x,y);
	xapxepphantu(mang,x,y); 
	output(mang,x,y);
//	timsonguyento(mang,x,y); 
//	findmang(mang,x,y); 
	return 0; 
} 
