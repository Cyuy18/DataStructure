#include "Assistance.h"	// ���������
#include "SeqStack.h"	// ˳��ջ��

int main()
{
	SeqStack<int> qa;
	int n, x, No = 1;
	cout << "���복������";
	cin >> n;
	int c[100];
	cout << "���복���Ų���";
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
						cout << x << "�Ӹ�������������" << endl;
						qa.Pop(x);

					}
					cout << c[j] << "���������߽��븨���" << endl;
					qa.Push(c[j]);
					c[j] = 0;
				}
				else
				{
					cout << c[j] << "����������ʻ��������ұ�" << endl;
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
				cout << x << "�Ӹ�������������" << endl;
				qa.Pop(x);
		}
	}
	if (!qa.IsEmpty())
	{
		cout << "�޷���ɵ���" << endl;
	}
	else
	{
		cout << "�������" << endl;
	}
	system("PAUSE");
	return 0;
}


