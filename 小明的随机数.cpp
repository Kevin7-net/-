//10
//20 40 32 67 40 20 89 300 400 15
//8
//15 20 32 40 67 89 300 400
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int sum(0),bus[1002]={0};
    for(int i=1;i<=n;i++){
        cin>>x;
        if(bus[x])  //���������Ѿ����ֹ��ˣ���ô����
            continue;
        bus[x]++;  //���û�г��֣������ݷ���Ͱ�����������++
        sum++;
    }
    cout<<sum<<endl;
    for(int i=1;i<=1000;i++)
        if(bus[i])
            cout<<i<<' ';
    cout<<endl;
    return 0;
}
