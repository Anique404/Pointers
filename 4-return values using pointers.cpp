#include<iostream>
using namespace std;

int min(int a[],int size,int *min){
	 *min=a[0];
	for(int i=0;i<size;i++){
		if(a[i]<*min){
			*min=a[i];
		}
	}
	return *min;
}

int max(int a[],int size,int *max){
	*max=a[0];
	for(int i=0;i<size;i++){
		if(a[i]>*max){
			*max=a[i];
		}
	}
	return *max;
}



int main(){
	
	int array[5]={2,7,9,34,10};
	
	cout<<"*(Array+i) = ";
	for(int i=0;i<5;i++){
		cout<<*(array+i)<<"  ";
	}
	
	cout<<endl<<endl;
	
	int m,l;
	int smallest=min(array,5,&m);
	cout<<"The Minimum value is = "<<smallest<<endl;
	int largest=max(array,5,&l);
	cout<<"The Maximum value is = "<<largest<<endl;
	cout<<endl<<endl;
	

	
	

}
