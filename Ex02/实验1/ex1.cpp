#include<iostream>
#include "Assistance.h"	// ���������
#include "SeqStack.h"	// ˳��ջ��
using namespace std;
int main(void)
{
    SeqStack<int> qa;
    int n, x, d, No;
    
    cout << "���복������"; 
    cin >> n;
    No = 1;        //  No��ʾ��������������ǰ��ĳ����ţ���ʼֵΪ1. 
    cout << "���� " << n << " �ڳ���ĳ�վ˳��"; 
    for (int i = 1; i <= n; i++){
        cin >> d;
        if (qa.Top(x) == SUCCESS && x == d) {
           cout << "�� " << x << " �ų���Ӹ��������������ұ�." << endl;
           qa.Pop(x);
        }
        else if (No <= d) {
           while (No <= n && No < d) {
              cout << "�� " << No << " �ų�����������߽��븨���." << endl;
              qa.Push(No++);
           }
           if (No == d) {
              cout << "�� " << No << " �ų�����������߽���������ұ�." << endl;
              No++;
           }
        }
        else 
           break;
    }
    if (qa.IsEmpty())
        cout << "�������." << endl;
    else
        cout << "�����޷����." << endl;

	system("PAUSE");
	return 0; 
}
