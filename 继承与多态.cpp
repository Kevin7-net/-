#include <iostream>
using namespace std;

class Parent
{
	public:

Parent(){
	
	cout << "Parent's no-arg constructor is invoked" <<endl;	
}

~Parent()

{
	cout << "Parent's destructor is invoked"<<endl;
}

};



class Child: public Parent
{
	
public :

Child()
{	
	cout << "Child's no-arg constructor is invoked" << endl ;	
}

~Child()
{ 

cout << "Child's destructor is invoked" << endl;

}

};

int main(){
	
	Child cl;
//	Child c2;

	return 0;
}


