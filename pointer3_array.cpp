#include<iostream>

using namespace std;

int main(){

int a[5]={10,20,30,40,50};
int *p;

p=a;
for (int i=0;i<5;i++){
	cout<<p[i]<<" ";
}

cout<<endl<<endl<<"alamat a[0] adalah dengan a :"<<a<<endl;

cout<<"alamat a[0] adalah dengan p :"<<p+1<<endl;

cout<<"alamat a[0] adalah dengan a[0] :"<<&a[1]<<endl;

return 0;	
}
