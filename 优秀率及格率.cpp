#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  // ���ڴ��������Ĵ���
  int n;
  double x,j,y,sum1=0,sum2=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    if(x>60){
      sum1++;
    }
    if(x>=85){
      sum2++;
    }
  }
    cout<<fixed<<setprecision(0)<<100.0*sum1/n<<"%"<<endl;  //�������� 
    cout<<fixed<<setprecision(0)<<100.0*sum2/n<<"%"<<endl;  //�������� 
  return 0;
}
