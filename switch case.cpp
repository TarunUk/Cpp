
#include<iostream>
using namespace std;

void isEven(int num){
	if(num%2==0){
		cout<< num << " is even!"<<endl;
	}
	else{
		cout<< num << " is odd!"<<endl; 
	}
}

void signOfNumber(int num){
	if(num<0){
		cout<<num<<" is negative."<<endl;
	}
	else if(num>0){
		cout<<num<<" is positive."<<endl;
	}
	else{
		cout<<num<<" is zero."<<endl;
	}
}
int main(){
	int choice, num;
	cout<<"Enter 1. to check the number is even."<<endl;
	cout<<"Enter 2. to check the number is neg, pos or zero."<<endl;
	cout<<"Enter 3. to exit"<<endl;
	
	cin >> choice;
	switch(choice){
		case 1:
			cout << "Enter number: ";
			cin >> num ;
			isEven(num);
			break;
		
		case 2:
			cout << "Enter number: " << endl;
			cin >> num;
			signOfNumber(num);
			break;
			
		case 3:
			default: "YOU EXIT.";
				break;			
	}
	return 0;
}
