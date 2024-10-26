#include<iostream>
using namespace std;
int main(){
	
	int array[5]={2,7,4,3,10};
	cout<<"Array ="<<array<<endl;
	cout<<"Array[0] ="<<array[0]<<endl;
	cout<<"&Array[0] ="<<&array[0]<<endl;
	cout<<"Array[2] ="<<array[2]<<endl;
	cout<<"*(Array+2) ="<<*(array+2)<<endl;
	cout<<endl<<endl;
	cout<<"Array[i] = ";
	for(int i=0;i<5;i++){
		cout<<array[i]<<"  ";
	}
	cout<<endl<<endl;
	cout<<"*(Array+i) = ";
	for(int i=0;i<5;i++){
		cout<<*(array+i)<<"  ";
	}
	
}
