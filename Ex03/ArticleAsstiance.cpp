#include "Assistance.h"	      // ʵ�ó��������
#include "KMP.h"		      // KMP�㷨

int main()
{	// ��ʽKMP�ַ���ģʽƥ���㷨
	String pat;
	string temp;  
	cout<<"��Ҫ���ҵ��ļ�:"<<endl;
	char name[50];
	cin>>name;
	cout<<"��Ҫ���ҵĵ���:"<<endl;
	while(cin>>temp)
	{	
		pat=temp.data();
		find(name,pat);
		cout<<"��Ҫ���ҵĵ���:"<<endl;
	}          
}
 