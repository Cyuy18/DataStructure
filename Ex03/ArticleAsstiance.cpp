#include "Assistance.h"	      // 实用程序软件包
#include "KMP.h"		      // KMP算法

int main()
{	// 测式KMP字符串模式匹配算法
	String pat;
	string temp;  
	cout<<"所要查找的文件:"<<endl;
	char name[50];
	cin>>name;
	cout<<"所要查找的单词:"<<endl;
	while(cin>>temp)
	{	
		pat=temp.data();
		find(name,pat);
		cout<<"所要查找的单词:"<<endl;
	}          
}
 