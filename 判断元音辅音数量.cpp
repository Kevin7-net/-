#include <iostream>
using namespace std;
int main()
{
  // ���ڴ��������Ĵ���
  char c;
  int sum1=0,sum2=0;
  while(scanf("%c",&c),c!='\n'){
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
      sum1++;
  }
  else{
    sum2++;
  }
  }
  cout<<sum1<<endl<<sum2;
  return 0;
}
