#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main(){	
double l=0.00,in=0.00,ppy=0.00,inp,t,nb;
int y = 1;
cout<<"Enter initial loan: ";
cin>>l;
cout<<"Enter interest rate per year (%): ";
cin>>in;
cout<<"Enter amount you can pay per year: ";
cin>>ppy;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	for(;;){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << y; 
	cout << setw(13) << left << l;
	inp =in/100*l;
	cout << setw(13) << left << inp;
	t=inp+l;
	cout << setw(13) << left << t;
	if(ppy>t){
		ppy = t;
		cout << setw(13) << left << ppy;
	}else{
		cout << setw(13) << left << ppy;
	}	
	nb = t;
	nb -= ppy;
	cout << setw(13) << left << nb;
	l = nb;
	cout << "\n";
	y++;	
	if(nb < 1) break;
	}
	return 0;
}
