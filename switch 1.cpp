#include <iostream>
using namespace std;

int main(){
	int num1,num2,option;
	
	cout<<"Enter two Numbers:";
	cin>>num1;
	cin>> num2;
	
	cout<<"choose your Options"<<endl;
	cout<<"1 = addition"<<endl;
	cout<<"2 = subtraction"<<endl; 
	cout<<"3 = multiplication"<<endl ;
	cout<<"4 = division"<<endl;
	
	cin>>option;
	
	cout<<"Your entered option is "<<option << endl;
	cout<<"---------------------------------------"<<endl;
	


	
	switch(option)
	{

		case 1:
			cout<<"Option entered is 1 for addion and result is "<<(num1+num2)<<endl;
			break;
		
		case 2:
			cout<<"Option entered is 2 for subtraction and result is "<<(num1-num2)<<endl;
			break;
		case 3:
			cout<<"Option entered is 3 for multiplication and result is "<<(num1*num2)<<endl;
			break;
		case 4:
			cout<<"Option entered is 4 for division and result is "<<(num1/num2)<<endl;
			break;
			
		default:
			cout<<"You entered a wrong choice"<<endl;
				
	}

return 0;
}

