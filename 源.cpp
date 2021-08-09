#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//创建一个人的结构体
struct Person {
	string m_Name;
	int m_Sex=0;
	int m_Age=0;
	string m_Phone;
	string m_Addr;
};
//创建一个通讯录的结构体，下面在实例化出一个通讯录
struct Addressbooks {
	struct Person personArray[MAX];
	int m_size=0;
};
// 1、添加联系人
void addPerson(Addressbooks* abs)
{
	if (abs->m_size == MAX) {
		cout << "通讯录已满，无法添加: " << endl;
		return;
	}
	else {
		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;

		//性别
		cout << "请输入性别： " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		while (true) {
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArray[abs->m_size].m_Sex = sex;
			break;
			}
		cout << "输入有误，请重新输入" << endl;
		}

		//年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_size].m_Age = age;

		//电话
		cout << "请输入电话： " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;

		//家庭地址
		cout << "请输入家庭地址： " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_Addr = address;
	}

	abs->m_size++;
	cout << "添加成功" << endl;

	system("pause");
	system("cls");  //清屏操作
}

// 2、显示所以联系人信息
void showPerson(Addressbooks * abs)
{
	if (abs->m_size == 0) {
		cout << "当前记录为零" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout <<" 姓名 "<< abs->personArray[i].m_Name << "\t";
			cout <<" 性别 "<<abs->personArray[i].m_Sex << "\t";
			cout <<" 年龄 "<< abs->personArray[i].m_Age << "\t";
			cout <<" 电话 "<< abs->personArray[i].m_Phone << "\t";
			cout << " 住址 " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

// 判断联系人是否存在
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

//3、删除联系人

void deletePerson(Addressbooks * abs)
{
	cout << "请输出您要删除的联系人： " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret==-1) {
		cout << "查无此人" << endl;
	}
	else {
		for (int i = ret; i < abs->m_size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}	
		abs->m_size--;
		cout << "删除成功" << endl;
	}
	system("pause");  
	system("cls");
}

// 4、查找联系人
void findPerson(Addressbooks * abs)
{
	cout << "请输入您要查找的联系人： " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs,name);
	if (ret != -1) {
		cout << " 姓名 " << abs->personArray[ret].m_Name << "\t";
		cout << " 性别 " << abs->personArray[ret].m_Sex << "\t";
		cout << " 年龄 " << abs->personArray[ret].m_Age << "\t";
		cout << " 电话 " << abs->personArray[ret].m_Phone << "\t";
		cout << " 住址 " << abs->personArray[ret].m_Addr << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

// 5、修改联系人
void modifyPerson(Addressbooks * abs)
{
	cout << "请输入您要修改的联系人姓名" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs,name);
	if (ret != -1) {
		cout << "请输入姓名" << endl;
		cin >> abs->personArray[ret].m_Name;
		cout << "请输入性别" << endl;
		cin >> abs->personArray[ret].m_Sex;
		cout << "请输入年龄" << endl;
		cin >> abs->personArray[ret].m_Age;
		cout << "请输入电话" << endl;
		cin >> abs->personArray[ret].m_Phone;
		cout << "请输入住址" << endl;
		cin >> abs->personArray[ret].m_Addr;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

// 6、清空联系人
void cleanPerson(Addressbooks* abs)
{
	abs->m_size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

// 目录
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}

int main()
{
	Addressbooks abs;
	abs.m_size = 0;

	int select = 0;
	while (true) { 
		showMenu();
		cin >> select;
		switch (select) {
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎您再次使用" << endl;
			system("pause");
			return 0;
			//break;
		default:
			break;
		}
	}
	return 0;
}