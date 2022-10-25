#include<iostream>

using namespace std;

int main(){
	int x = 25;
	
	int *ptr = &x;
	int a = *ptr;
	
	
	cout<<"nilai x = "<<x<<endl;
	cout<<"alamat memori x = "<<&x<<endl;
	
	cout<<"ptr berisi alamat memori x = "<< ptr<<endl;
	cout<<"isi dari a adalah = "<<a<<endl;
	
	x = x + 5;
	cout<<"nilai x yang baru = "<<x<<endl;
	*ptr = *ptr + 10;
	cout<<"nilai ptr yang baru = "<<*ptr<<endl;
	
	
	
	return 0;
}
