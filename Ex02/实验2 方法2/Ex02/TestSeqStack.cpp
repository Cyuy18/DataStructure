#include "Assistance.h"	// 辅助软件包
#include "SeqStack.h"	// 顺序栈类

int main()
{
	SeqStack<int> qa;
	int n, x, No = 1;
	cout << "输入车厢数：";
	cin >> n;
	int c[100];
	cout << "输入车厢排布：";
	for (int i = 0; i <n; i++)
	{
		cin >> c[i];
	}
	for (int i = 0; i <n; i++)
	{  
		for (int j = 0; j < n; j++)
		{
			if (c[j] != 0)
			{
				if (c[j] != i + 1)
				{
					if (qa.Top(x) == SUCCESS && x == i + 1)
					{
						cout << x << "从辅轨道进入主轨道" << endl;
						qa.Pop(x);

					}
					cout << c[j] << "从主轨道左边进入辅轨道" << endl;
					qa.Push(c[j]);
					c[j] = 0;
				}
				else
				{
					cout << c[j] << "从主轨道左边驶入主轨道右边" << endl;
					c[j] = 0;
					break;
				}
			}
		}
	}

	for (int i = 0; i <n; i++)
	{
		if (qa.Top(x) == SUCCESS && x == i + 1)
		{
				cout << x << "从辅轨道进入主轨道" << endl;
				qa.Pop(x);
		}
	}
	if (!qa.IsEmpty())
	{
		cout << "无法完成调度" << endl;
	}
	else
	{
		cout << "调度完成" << endl;
	}
	system("PAUSE");
	return 0;
}


