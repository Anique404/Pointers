#include<iostream>
using namespace std;

void printnum(int *n){
	cout<<*n<<endl;
}
void printletter(char *l){
	cout<<*l<<endl;
}

void print(void *ptr,char type){
	switch(type){
		case 'i':// i means integer *
		cout<<*((int*)ptr)<<endl;		
		break;
		
		case 'c':// c means character *
		cout<<*((char*)ptr);	
		break;
	}
}

int main(){
	
    int number=5;
    char letter='a';

    printnum(&number);
    printletter(&letter); 
    cout<<endl;
    
    cout<<"Now void Pointer is"<<endl<<endl;
    
    print(&number,'i');
    print(&letter,'c');
    
}
