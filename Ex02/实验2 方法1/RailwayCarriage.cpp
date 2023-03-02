#include "LinkQueue.h"	// ѭ��������
#include "LinkStack.h"
#include "Assistance.h"

int main(void)
{
    LinkQueue<int> qa;
    LinkStack<int> sa;
    int n, x, d;
    
    cout << "�����복������"; 
    cin >> n;

    cout << "���복�����վ˳��"; 
    for (int i = 1; i <= n; i++){
        cin >> d;
        qa.EnQueue(d);
        } 
        
    for (int i = 1; i <= n; i++){    
        if(sa.Top(x) == SUCCESS && x == i ){
           cout << "�� " << x << " �ų���Ӹ��������������ұ�." << endl;
           sa.Pop(x);
        }
        else if(qa.DelQueue(x) == SUCCESS && x >= i){
             while ( x > i && x <= n){
                 cout << "�� " << x << " �ų�����������߽��븨���." << endl;  
                 sa.Push(x);
                 qa.DelQueue(x);
                 }
             if(x == i){
               cout << "�� " << x << " �ų�����������߽���������ұ�." << endl; 
               }              
             }
        else 
           break;
        }                                  
    if (sa.IsEmpty())
        cout << "�������." << endl;
    else
        cout << "�����޷����." << endl;

	system("PAUSE");
	return 0; 
}


