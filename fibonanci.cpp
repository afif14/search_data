#include<iostream>
using namespace std;

int main(){

    unsigned int arr[100]={0,1},i,in;
    cout<<"masukan suku ke-";
    cin>>in;

    for (i = 2; i < in; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    for (i = 0; i < in; i++) {
        cout<<arr[i]<<" ";
    }
}