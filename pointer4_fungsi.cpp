#include<iostream>

using namespace std;

double perkalian_2_bilangan(double a, double b){
	return a*b;
}

int main(){
	
	double x,y;
	double (*ptr) (double, double); //deklarasi pointer ke fungsi 
	
	ptr = &perkalian_2_bilangan;
	
	cout<<"masukan bilangan pertama : ";
	cin>>x;
	cout<<"masukan bilangan kedua : ";
	cin>>y;
	double hasil = ptr(x,y);
	cout<<endl;
	cout <<x<<" x "<<y<<" = "<<hasil;


return 0;	
}
