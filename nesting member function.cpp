//write a program using nesting member function concept to calculate simple interest.
#include<iostream>
using namespace std;
class simple{
	private:
	 float p,t,r;
	public:
		void set();
		void display();
		float calculate();
		
};
void simple::set()
{
	cout<<"enter principle,time,rate:"<<endl;
	cin>>p>>t>>r;
}
float  simple::calculate() {
	float sum;
	sum=(p*t*r)/100;
	
}
void simple::display(){
	cout<<"value= "<<calculate();
}


int main()
{
	simple x;
	x.set();
	x.display();
	return 0;
	
}
