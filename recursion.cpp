//#include <iostream>//5  
//using namespace std;
//int giaithua(int n){
//	if(n==0)
//	return 1;
//	else
//	{
//	cout<<"giaithua("<<n<<"-1)*"<<n<<endl; 
//	return giaithua(n-1)*n;
//    }
//} 
//int main(){
//	int n; 
//	cout<<"Input n: "<<endl;
//	cin>>n; 
//	cout<<giaithua(n)<<endl; 
//	return 0;
//	 
//} 
#include  <iostream>
using namespace std;
void input(int mang[], int n){
	for(int i=0;i<n;i++){
	 cout<<"Nhap phan tu ["<<i<<"] = ";
	 cin>>mang[i]; 
	}
} 
void output(int mang[], int n){
	for(int i=0;i<n;i++){
		cout<<"Phan tu a["<<i<<"] = "<<mang[i]<<endl; 
	} 
} 
void swap(int &a, int &b){
	int s=a;
	a=b;
	b=s; 
} 
void sort(int a[], int n){
	 for(int i=0;i<n;i++){
	 	for(int j=i;j<n-1;j++){
	 		if(a[i]>a[j+1]){
	 			swap(a[i], a[j+1]) ;
			 } 
		 } 
	 } 
} 
void dmang(int a[], int &n){//1 2  
	int mark=1, m=n, m1=0, n1=0;//1 1 2 2 3 3 3 3 4 5 5 6 
	int b[m]; 
	int u[50], y[50];
	int q=m/2;
	for(int i=0;i<m;i++){
		b[i]=a[i]; 
	}  
	for(int i=1;i<n;i++){
		if(b[i-1]!=b[i]){
			a[mark]=b[i];//1 2 3 4 5 6 7  
//			cout<<a[mark]<<endl; 
			mark++;  
		} 
	} 
	n=mark; 
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<m;j++){
			if(a[i]==b[j])
			count++;
		}
		if(count>=q){
			u[m1]=a[i];
			m1++;
		}
		else{
			y[n1]=a[i];
			n1++;
		}
	} 
	cout<<"Da so: ";
	for(int i=0;i<m1;i++){
		cout<<u[i]<<" "; 
	}
	cout<<"thieu so: ";
	for(int i=0;i<n1;i++){
		cout<<y[i]<<" "; 
	} 
}  
int main(){
	int n, x, vt;
	cout<<"Nhap so luong phan tu cua mang a[] :";
	cin>>n;
	int a[n]; 
	input(a, n); 
	sort(a, n);
	dmang(a, n); 
	
//	output(a, n); 
	return 0; 
} 
