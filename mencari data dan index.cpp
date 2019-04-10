#include<iostream>
using namespace std;
int main(){
	int arr[50]={1,7,5,2,9,0,5,4,13,7,21,3,6,8,7,23},in;
	int idx[20],hsl=0;

	cout<<"masukan angka yang akan di cari  ";
	cin>>in;

	for(int i=0;i<50;i++){
        if(arr[i]==in){
            idx[hsl]=i;
            hsl++;
        }
	}
	cout<<"jumlah angka yang anda cari:  "<< hsl<<endl;
	cout<<"pada indeks ke  ";

	for(int j=0;j<hsl;j++){
        cout<<idx[j]<<"\t";
	}
}