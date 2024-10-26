#include<iostream>
using namespace std;
int main(){
	int **matrix,rows,cols;
	cout<<"Enter no rows=";
	cin>>rows;
	cout<<"Enter no cols=";
	cin>>cols;
	cout<<endl;
	matrix=new int *[rows];
	
	for(int r=0;r<rows;r++){
		matrix[r]=new int[cols];
		for(int c=0;c<cols;c++){
			cout<<"Enter "<<r<<" Row and "<<c<<" Colunms=";
			cin>>matrix[r][c];
			
		}
	}
	cout<<endl;
	cout<<"********* MATRIX ************"<<endl;
	cout<<endl;
	
	for(int r=0;r<rows;r++){
		for(int c=0;c<cols;c++){
			cout<<matrix[r][c]<<"   ";
		}
		cout<<endl;
	}
	
		for(int r=0;r<rows;r++){
			delete[] matrix[r];
		}
		delete[] matrix;
		matrix=NULL;
		
		
		
	
}
