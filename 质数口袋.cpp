#include <iostream>
#include<cmath>
using namespace std;

int prime(int a){
	for(int i=2;i<=sqrt(a);i++){//重点i<=sqrt(a)
		if(a%i==0){
		return 0;
		}
	}
	return 1;
	
}
int main()
{
	long long sum = 0;//定义总数和，初始化；
	long long n;//定义口袋大小
	long long k = 0;//定义计数器，初始化
	long long a[100000];//数组
	cin >> n;
	long long x = 2;//要判断的x从2开始
	if(n == 0 || n == 1)//n==0，n==1要特判
	    {
	    	cout << "0" << endl;
	    	return 0;
		}
	while(sum <= n)//循环开始！！
	    {
	    	if(x == 2)//当x==2时特判，否则输出不了
	    	    {
	    	    	sum += x;//sum的值往上加
	    	    	k++; //计数器k也要+1
	    	    	a[k] = x;//把这个2导进数组的a[1]为（k为1）
				}
				else//如果x不是2
					{
                        if(prime(x)){
                        	sum+=x;
                        	k++;
                        	a[k]=x;
						}				    	
					}
			x++; //每次x都要加1，指导sum < n;
		}
	for(int i = 1;i < k;i++)
    //前面多了个2，如果不用数组，会多输出一个数字
	    {
	    	cout << a[i] << endl;
		}
	cout << k-1 << endl;//k-1是因为sum+=x后再和n比较的，所以应该是k-1个数 
	return 0;//完美结束
}
