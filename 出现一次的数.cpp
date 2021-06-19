#include <iostream>
using namespace std;
int main()
{
    int number[10] = { 0 }, test[10]={ 0 }, list[10]={ 0 };
    int a = 0,b=0;
    for (int i = 0; i < 10; i++)//输入十个整数
    {
        cin >> number[i];
    }
    for (int i = 0; i < 10; i++)
    {
        int flag = 1;
        for (int j = 0; j < a; j++)//判断是否重复
        {
            if (number[i] == test[j])
            {   
                flag = 0;
                break;
            }
        }
        
        if (flag)//将所有出现的数存起来
        {
            test[a] = number[i];
            //cout << number[i];
            a++;
        }
    }
    for (int i = 0; i < a; i++)//将出现的次数存起来
    {
        for (int j = 0; j < 10; j++)
        {
            if (test[i] == number[j])
            {
                list[i]++;
            }
        }
    }
    

    for (int i = 0; i < a; i++)//检验个数
    {
        cout << list[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < a; i++)
    {
        if(list[i]==1)//次数为1的输出
        {
            cout << test[i] << " ";
        }
    }
    return 0;
}
