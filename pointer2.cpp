#include<iostream>

using namespace std;

int main(){
int i =10;
float f = 0.25;
double d = 123.123;

void *p = NULL;

p=&i;   //alamat ke i
cout <<"p menunjuk ke alamat i"<<endl;
cout<<"nilai *p = "<<*((int*)p)<<endl; //casting variable
cout <<"nilai p = "<<p<<endl<<endl;

p=&f;

cout <<"p menunjuk ke alamat i"<<endl;
cout<<"nilai *p = "<<*((float*)p)<<endl; //casting variable
cout <<"nilai p = "<<p<<endl<<endl;

p=&d;

cout <<"p menunjuk ke alamat i"<<endl;
cout<<"nilai *p = "<<*((double*)p)<<endl; //casting variable
cout <<"nilai p = "<<p<<endl<<endl;
return 0;	
}
