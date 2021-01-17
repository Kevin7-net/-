#include <iostream>
using namespace std;

int main(void)
   {
    int ch[9]={0};  //存放二进制数0和1
    int i,j;
    int variable,index;
    cout<<"Enter a numeber between 0 and 511: ";
   	cin>>variable;
      for (index=0;index<15;index++)
      {
        i=variable%2;  //取2的余数
//        j=variable/2;  //取被2整除的数
//        variable=j;    //将得到的商赋给变量variable,用来下次求%，获得下一个数
        variable/=2; 
		 
        ch[index]=i;                //将余数存放在数组中
      }
//      for(index=8;index>=0;index--)
//      {                               
//       cout<<ch[index];    
//        if (index%3 == 0)           
//       {                            
//        cout<<" ";               
//           //每输出3个元素，输出一个空格
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
