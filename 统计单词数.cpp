#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string b;
    //用string库，调用getline, 直接读入一整行
    getline(cin,a);
    getline(cin,b);
    //转换大小写，可以都转换为大写，或者小写
    for (int i=0;i<a.length();++i){
        a[i]=tolower(a[i]);
    }
    for (int i=0;i<b.length();++i){
        b[i]=tolower(b[i]);
    }
    //因为连起来的不算，所以要在前后加几个空格，一定要是同样多的，同量减同量，等于同量
    a=' '+a+' ';  //因为输进去的包含空格，空格也代表字符串，所以要加' ' 
    b=' '+b+' ';
    //先看看会不会找不到，用a.find()和string::npos  如果字符串不存在包含关系，那么返回就一定是npos
    if (b.find(a)==string::npos){
        cout<<-1<<endl;
    }
    //如果找得到
    else {
        int alpha=b.find(a);
        int beta=b.find(a),s=0;//计数器初始化为0
        while (beta!=string::npos){
            ++s;//计数器
            beta=b.find(a,beta+1);
        }
        cout<<s<<" "<<alpha<<endl;//输出第一个和总共有几个
    }
    //函数返回值为0，结束整个程序
    return 0;
}
