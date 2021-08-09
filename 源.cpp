#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//����һ���˵Ľṹ��
struct Person {
	string m_Name;
	int m_Sex=0;
	int m_Age=0;
	string m_Phone;
	string m_Addr;
};
//����һ��ͨѶ¼�Ľṹ�壬������ʵ������һ��ͨѶ¼
struct Addressbooks {
	struct Person personArray[MAX];
	int m_size=0;
};
// 1�������ϵ��
void addPerson(Addressbooks* abs)
{
	if (abs->m_size == MAX) {
		cout << "ͨѶ¼�������޷����: " << endl;
		return;
	}
	else {
		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;

		//�Ա�
		cout << "�������Ա� " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true) {
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArray[abs->m_size].m_Sex = sex;
			break;
			}
		cout << "������������������" << endl;
		}

		//����
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_size].m_Age = age;

		//�绰
		cout << "������绰�� " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;

		//��ͥ��ַ
		cout << "�������ͥ��ַ�� " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_Addr = address;
	}

	abs->m_size++;
	cout << "��ӳɹ�" << endl;

	system("pause");
	system("cls");  //��������
}

// 2����ʾ������ϵ����Ϣ
void showPerson(Addressbooks * abs)
{
	if (abs->m_size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout <<" ���� "<< abs->personArray[i].m_Name << "\t";
			cout <<" �Ա� "<<abs->personArray[i].m_Sex << "\t";
			cout <<" ���� "<< abs->personArray[i].m_Age << "\t";
			cout <<" �绰 "<< abs->personArray[i].m_Phone << "\t";
			cout << " סַ " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

// �ж���ϵ���Ƿ����
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

//3��ɾ����ϵ��

void deletePerson(Addressbooks * abs)
{
	cout << "�������Ҫɾ������ϵ�ˣ� " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret==-1) {
		cout << "���޴���" << endl;
	}
	else {
		for (int i = ret; i < abs->m_size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}	
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");  
	system("cls");
}

// 4��������ϵ��
void findPerson(Addressbooks * abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ� " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs,name);
	if (ret != -1) {
		cout << " ���� " << abs->personArray[ret].m_Name << "\t";
		cout << " �Ա� " << abs->personArray[ret].m_Sex << "\t";
		cout << " ���� " << abs->personArray[ret].m_Age << "\t";
		cout << " �绰 " << abs->personArray[ret].m_Phone << "\t";
		cout << " סַ " << abs->personArray[ret].m_Addr << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

// 5���޸���ϵ��
void modifyPerson(Addressbooks * abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ������" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs,name);
	if (ret != -1) {
		cout << "����������" << endl;
		cin >> abs->personArray[ret].m_Name;
		cout << "�������Ա�" << endl;
		cin >> abs->personArray[ret].m_Sex;
		cout << "����������" << endl;
		cin >> abs->personArray[ret].m_Age;
		cout << "������绰" << endl;
		cin >> abs->personArray[ret].m_Phone;
		cout << "������סַ" << endl;
		cin >> abs->personArray[ret].m_Addr;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

// 6�������ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->m_size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

// Ŀ¼
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
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
			cout << "��ӭ���ٴ�ʹ��" << endl;
			system("pause");
			return 0;
			//break;
		default:
			break;
		}
	}
	return 0;
}