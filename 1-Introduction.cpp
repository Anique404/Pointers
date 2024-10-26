#include<iostream>
using namespace std;
int main(){
	
	int a=5;
	
	cout<<"a="<<a<<endl;
	cout<<"&a="<<&a<<endl;
	int *ptr=&a;
	cout<<"&a="<<&a<<endl;
	cout<<"ptr="<<ptr<<endl;
	cout<<"*ptr="<<*ptr<<endl;
	cout<<"a="<<a<<endl;
	cout<<"&ptr="<<&ptr<<endl;
	
	cout<<endl<<endl<<endl;
// int *ptr=7;   This is wrong because ptr has no address itself

	int v;
	int *ptr2=&v;
	*ptr2=7;
	cout<<"&v="<<&v<<endl;
	cout<<"ptr2="<<ptr2<<endl;
	cout<<"v="<<v<<endl;
	cout<<"*ptr2="<<*ptr2<<endl;
	cout<<"&ptr2="<<&ptr2<<endl;
	
}
