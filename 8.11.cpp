#include <iostream>
using namespace std;

int main(void)
   {
    int ch[9]={0};  //��Ŷ�������0��1
    int i,j;
    int variable,index;
    cout<<"Enter a numeber between 0 and 511: ";
   	cin>>variable;
      for (index=0;index<15;index++)
      {
        i=variable%2;  //ȡ2������
//        j=variable/2;  //ȡ��2��������
//        variable=j;    //���õ����̸�������variable,�����´���%�������һ����
        variable/=2; 
		 
        ch[index]=i;                //�����������������
      }
//      for(index=8;index>=0;index--)
//      {                               
//       cout<<ch[index];    
//        if (index%3 == 0)           
//       {                            
//        cout<<" ";               
//           //ÿ���3��Ԫ�أ����һ���ո�
//       }
//      } 
//      cout<<endl;
      for(int i=8;i>=0;i--){
      	if(ch[i]==0){
      		cout<<"H ";
		  }
		  else{
		  	cout<<"T ";
		  }
		  if(i==6||i==3){
		  	cout<<endl;
		  }
	  }

   return 0;
   }
