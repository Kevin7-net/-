#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0;//初始化小车位置（0，0） 
	int commond,time,w=0,n=0;//command为命令，time是时间 
	//n为决定车头朝向，0为北，1为东,2为南，3为西;
	//w为计时器，记录上次的时间，以此计算间隔时长 
	while(cin>>time>>commond)//键盘输入时间以及命令 
	{	
		switch(n)//对n取模，来确定方向 
		{
			case  0: y+=10*(time-w);break;
			case  1: x+=10*(time-w);break;
			case  2: y-=10*(time-w);break;
			case  3: x-=10*(time-w);break;
		}
		if(commond==3)  break;//如果命令是3，停止 
		else if(commond==1)	n=n-1;  //如果命令是1，向左转，n-1  
		else if(commond==2)	n=n+1;	//如果命令是2，向右转，n+1 
		n=(n+4)%4;//对4取模改变方向，确保范围0~3 
		w=time;//w记录上次的时间 
	}		
	cout<<x<<" "<<y;//输出小车的横坐标和纵坐标 
	return 0;
}
