#include <iostream>
using namespace std;
struct info{
	char hoten[100];
	char mssv[100];
	float diem; 
}; 
//void swap(info &a, info &b){
//	char tam1[100]=a.hoten;
//	char tam2[100]=a.mssv;
//	float tam3=a.diem;
//	a.hoten=b.hoten;
//	a.mssv=b.mssv; 
//	a.diem=b.diem;
//	b.diem=tam3;
//	b.mssv=tam2; 
//	b.hoten=tam1; 
//} 
int main(){
	int n;
	cout<<"Nhap so sinh vien can nhap thong tin: ";
	cin>>n;
	info sinhvien[n];
	for(int i=0;i<n;i++){
		cout<<"Sinh vien "<<i<<endl; 
		cout<<"Nhap ten sinh vien: ";
		cin.ignore();  
		cin.getline(sinhvien[i].hoten, 100);
		cout<<"Nhap ma so sinh vien: ";
		cin>>sinhvien[i].mssv;
		cout<<"Nhap diem: ";
		cin>>sinhvien[i].diem; 
	} 
//	float S=0; 
//	for(int i=0;i<n;i++){
//		cout<<"Ten sinh vien: "<<sinhvien[i].hoten<<"       ||MSSV: "<<sinhvien[i].mssv<<"       ||Diem: "<<sinhvien[i].diem<<endl;
//		S=S+sinhvien[i].diem; 
//	} 
//	cout<<"Diem trung binh: "<<S/n; 
	for(int i=0;i<n-1;i++){
		for(int j=0;j<=n-i-1;j++){
			if(sinhvien[j].diem>sinhvien[j+1].diem) {
				info tamp=sinhvien[j+1]; 
				sinhvien[j+1]=sinhvien[j];		
				sinhvien[j]=tamp;		 		 
			}
		} 
	}
	for(int i=0;i<n;i++){
		cout<<"Ten sinh vien: "<<sinhvien[i].hoten<<"       ||MSSV: "<<sinhvien[i].mssv<<"       ||Diem: "<<sinhvien[i].diem<<endl;
	} 
	return 0; 
} 
