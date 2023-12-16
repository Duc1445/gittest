#include <bits/stdc++.h> 


using namespace std;


struct SinhVien {

   char hoTen[100]; char mssv[20]; double diemTrungBinh;

};

int main()  {
	int avg;
   SinhVien dssv[1000]; int soLuongSV;

   cout << "Nhap so luong sinh vien: "; cin >> soLuongSV;

   for(int i = 1; i <= soLuongSV; i++) {

    	cout << "- Nhap SV thu " << i << ":" << endl;
    	
    	cin.ignore();
    	
    	cout << "+ Ho ten: ";

		cin.getline(dssv[i].hoTen, 100);

//		cin.ignore();

    	cout << "+ MSSV: ";

        cin.getline(dssv[i].mssv, 20);

    	cout << "+ Diem trung binh: "; cin >> dssv[i].diemTrungBinh;
   }
   for (int i=1;i<=soLuongSV;i++){
		avg+=dssv[i].diemTrungBinh;
   }
   avg/=soLuongSV;
   cout<<"Diem Trung Binh : "<<avg<<endl;
	ofstream fs;
	fs.open("C:\\Users\\nguye\\Documents\\Zalo Received Files\\Files\\Struct1.txt") ;
	for (int i=1;i<=soLuongSV;i++){
		fs<<i<<"."<<endl;
		fs<<dssv[i].hoTen<<endl;
		fs<<dssv[i].mssv<<endl;
		fs<<dssv[i].diemTrungBinh<<endl;
	}
	fs<<"Diem Trung Binh : "<<avg<<" ."<<endl;
	fs.close();
	return 0;
}
