#ifndef __KMP_H__
#define __KMP_H__

#include "String.h"				// ����

// KMPƥ���㷨
void GetFailure(const String &pat, int f[])
// �������: ��ģʽ��pat��ʧЧ����ֵ
{
	f[0]=-1;				             // ��ʼf[0]��ֵΪ-1
	int j = 0, k = -1;		
	while (j < pat.GetLength() - 1)
		if (k == -1 || pat[k] == pat[j])	
			f[++j]=++k;
		else		                     // pat[k]��pat[j]��ƥ��
			k = f[k];		             // Ѱ���µ�ƥ���ַ�
}


int KMP_find(const string ob, const String &pat, int p = 0)
// �������: ����ģʽ��pat��һ����Ŀ�괮ob�дӵ�p���ַ���ʼ���ֵ�λ��
{
	int *f = new int[pat.GetLength()];      // ΪʧЧ����ֵ����f����ռ�
	GetFailure(pat, f);				     // ��ģʽ��pat��f�����Ԫ��ֵ
	int i = p, j = 0;			
	while (i < ob.length() && j < pat.GetLength() && pat.GetLength() - j <= ob.length() - i)
    if (j == -1 || pat[j] == ob[i])		{
		i++; j++;			             // ģʽ��pat��Ŀ�괮ob�ĵ�ǰλ�������
    }
	else	                             // pat[j]��ob[i]��ƥ��
		j = f[j];		                 // Ѱ���µ�ģʽ��pat��ƥ���ַ�λ��
    		             // ��f��ռ�õĴ洢�ռ�
	if (j < pat.GetLength())
        return -1;		                 // ƥ��ʧ��
	else
        return i - j;			         // ƥ��ɹ�
}

void find(char*filename,const String &pat)
{
	string text;
	int i=1,j=0,q,k=0;//iΪ������jΪλ�ã�k������¼ÿ�иõ��ʳ��ֵ�������q������¼�����ı��õ��ʳ��ֵ�����
	ifstream fp(filename);
	if(!fp)
	{
		cout<<"�޷����ļ�"<<endl;
		return;
	}
	while(fp.eof()==false)
	{	
		k=0;
		getline(fp,text);//��getlineʵ��һ���ж�ȡ
		j=KMP_find(text,pat,j);
		if(j!=-1)
		{
			cout<<"��ǰ��ѯ�ʵ�����Ϊ:"<<i<<endl;
			cout<<"����Ϊ:"<<text<<endl;
			cout<<"��ǰ��ѯ���ڸ��е�λ��Ϊ:"<<j<<endl;
			k++;
			while(j!=-1)
			{
				j=KMP_find(text,pat,j+1);
				if(j!=-1)
				{
					cout<<"��ǰ��ѯ���ڸ��е�λ��Ϊ"<<j<<endl;
					k++;
				}
			}
		}
		i++;
		q+=k;
		j=0;
	}
	cout<<"�ô��ܹ�����"<<q<<"��"<<endl;
}
#endif

