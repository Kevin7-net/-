#include <iostream>
using namespace std;
int main()
{
    int number[10] = { 0 }, test[10]={ 0 }, list[10]={ 0 };
    int a = 0,b=0;
    for (int i = 0; i < 10; i++)//����ʮ������
    {
        cin >> number[i];
    }
    for (int i = 0; i < 10; i++)
    {
        int flag = 1;
        for (int j = 0; j < a; j++)//�ж��Ƿ��ظ�
        {
            if (number[i] == test[j])
            {   
                flag = 0;
                break;
            }
        }
        
        if (flag)//�����г��ֵ���������
        {
            test[a] = number[i];
            //cout << number[i];
            a++;
        }
    }
    for (int i = 0; i < a; i++)//�����ֵĴ���������
    {
        for (int j = 0; j < 10; j++)
        {
            if (test[i] == number[j])
            {
                list[i]++;
            }
        }
    }
    

    for (int i = 0; i < a; i++)//�������
    {
        cout << list[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < a; i++)
    {
        if(list[i]==1)//����Ϊ1�����
        {
            cout << test[i] << " ";
        }
    }
    return 0;
}
