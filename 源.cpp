#include<iostream>
#include<string>
using namespace std;

class Building
{
	friend class goodGay;

public:
	Building()
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "����";
	}

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

class goodGay
{
public:
	goodGay()
	{
		building = new Building;
	}
	void visit()
	{
		cout << "�û������ڷ���" << building->m_SittingRoom << endl;
		cout << "�û������ڷ���" << building->m_BedRoom << endl;
	}
private:
	Building* building;
};
//
//class Building
//{
//	friend class goodGay;
//
//public:
//	Building()
//	{
//		this->m_SittingRoom = "����";
//		this->m_BedRoom = "����";
//	}
//
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};

//Building::Building()
//{
//	this->m_SittingRoom = "����";
//	this->m_BedRoom = "����";
//}

//goodGay::goodGay()
//{
//	building = new Building;
//}

//void goodGay::visit()
//{
//	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
//	cout << "�û������ڷ���" << building->m_BedRoom << endl;
//}

void text01()
{
	goodGay gg;
	gg.visit();
}
int main()
{
	text01();
	return 0;
}