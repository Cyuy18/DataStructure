#include <iostream>
#include<fstream>
using namespace std;

int main(){  
    int n;
    ifstream infile(".\\input.txt");
    char str[80];
    infile.getline(str,80,'\n');
    n=atoi(str);
    for(int i=1; i<=n; i++){   
        bool flag=0;
        int a, b;
        infile.getline(str,4,' ');
        a=atoi(str);
        infile.getline(str,80,'\n');
        b=atoi(str);
        int left = 0, right = 0;
        while(a!=1 || b!=1){
            if(a > b){
                left++;
                a = a-b;
            }
            else if(a < b){
                right++;
                b = b-a;
            }
            else if(a<=0||b<=0){
                flag=1;
            }
        }
        if(flag)
            cout<<"该编号的结点无法由这种二叉树遍历得到."<<endl;
        else
            cout<<"向左:"<<left<<", "<<"向右"<<right<<endl;
    }
    system("pause");

    return 0;
}
