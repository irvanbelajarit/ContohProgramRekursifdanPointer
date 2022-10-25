#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int *p;
	p = (int *) malloc(5*sizeof(int)); //alokasi 5 ruang memory tipe int
	
	cout<<"isi ruang memory yang dialokasikan " <<endl<<endl;
	
	for (int i=0;i<5;i++){
		p[i] = (i+1)*10;   //isi ruang memori yang sudah dialokasikan
		cout<<p[i]<<endl;
	}
	free(p);
	
	cout <<endl;
	for(int i=0;i<5;i++){
		cout<<p[i]<<endl;   //isi memori setelah
	}
	
	return 0;
}
