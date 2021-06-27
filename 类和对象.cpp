#include<iostream>
using namespace std;

class student{
	public:
		int num;
		string name;
	string Name(){
		return name;
	}
	int Num(){
		return num;
	}
};
int main()
{
	student H;
	H.num=2024240079;
	H.name="Eric";
	cout<<H.Name()<<endl<<H.Num();
	return 0;
}
