#include<iostream>
using namespace std;
#include<string>

class Building
{
	friend void goodGay(Building* building);

public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
void goodGay(Building* building)
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void test01()
{
	Building building;
	goodGay(&building);
}
int main()
{
	test01();
	return 0;
}