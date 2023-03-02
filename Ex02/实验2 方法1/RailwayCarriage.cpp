#include "LinkQueue.h"	// 循环队列类
#include "LinkStack.h"
#include "Assistance.h"

int main(void)
{
    LinkQueue<int> qa;
    LinkStack<int> sa;
    int n, x, d;
    
    cout << "请输入车厢数："; 
    cin >> n;

    cout << "输入车厢的入站顺序："; 
    for (int i = 1; i <= n; i++){
        cin >> d;
        qa.EnQueue(d);
        } 
        
    for (int i = 1; i <= n; i++){    
        if(sa.Top(x) == SUCCESS && x == i ){
           cout << "第 " << x << " 号车厢从辅轨道进入主轨道右边." << endl;
           sa.Pop(x);
        }
        else if(qa.DelQueue(x) == SUCCESS && x >= i){
             while ( x > i && x <= n){
                 cout << "第 " << x << " 号车厢从主轨道左边进入辅轨道." << endl;  
                 sa.Push(x);
                 qa.DelQueue(x);
                 }
             if(x == i){
               cout << "第 " << x << " 号车厢从主轨道左边进入主轨道右边." << endl; 
               }              
             }
        else 
           break;
        }                                  
    if (sa.IsEmpty())
        cout << "调度完成." << endl;
    else
        cout << "调度无法完成." << endl;

	system("PAUSE");
	return 0; 
}


