//�ó��������Ԫ�غͲ���ʱunordered_set��set��Ҫ��
//ֱ��delete������ʱ����
#define WHILE for(int i=1 ; i<=n ; ++i)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;




int main()
{
    char s[1000];
    int n,m;
    cout<<"���������������,Ԫ������Ϊ10^6:";
    cin>>n;
    double start,end;
    start=clock();
    WHILE system("set1.exe");
    end=clock();
    cout<<"set����Ԫ���ܺ�ʱ:"<<end-start<<"ms"<<endl;
    start=clock();
    WHILE system("uset1.exe");
    end=clock();
    cout<<"unordered_set����Ԫ���ܺ�ʱ:"<<end-start<<"ms"<<endl;
    start=clock();
    WHILE system("set2.exe");
    end=clock();
    cout<<"set���벢����Ԫ���ܺ�ʱ:"<<end-start<<"ms"<<endl;
    start=clock();
    WHILE system("uset2.exe");
    end=clock();
    cout<<"set���벢����Ԫ���ܺ�ʱ:"<<end-start<<"ms"<<endl;
    system("pause");
    return 0;
}