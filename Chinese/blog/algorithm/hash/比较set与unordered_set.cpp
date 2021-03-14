//得出结论添加元素和查找时unordered_set比set都要快
//直接delete更快且时间差不多
#define WHILE for(int i=1 ; i<=n ; ++i)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;




int main()
{
    char s[1000];
    int n,m;
    cout<<"输入测试数据组数,元素数量为10^6:";
    cin>>n;
    double start,end;
    start=clock();
    WHILE system("set1.exe");
    end=clock();
    cout<<"set插入元素总耗时:"<<end-start<<"ms"<<endl;
    start=clock();
    WHILE system("uset1.exe");
    end=clock();
    cout<<"unordered_set插入元素总耗时:"<<end-start<<"ms"<<endl;
    start=clock();
    WHILE system("set2.exe");
    end=clock();
    cout<<"set插入并查找元素总耗时:"<<end-start<<"ms"<<endl;
    start=clock();
    WHILE system("uset2.exe");
    end=clock();
    cout<<"set插入并查找元素总耗时:"<<end-start<<"ms"<<endl;
    system("pause");
    return 0;
}