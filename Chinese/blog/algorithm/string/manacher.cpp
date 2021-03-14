#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=3.3e7+10;
char s[N],str[N];
int p[N];//最远可以扩展的长度;

int main()
{
    scanf("%s",str);int slen=strlen(str),len=1;
    s[0]='1';//防止匹配到0后依然相等然后就挂掉了p[i]变成了负数
    s[1]='0';//第一个依然赋值为0
    for(int i=0 ; i<slen ; ++i)
    {
        s[++len]=str[i];
        s[++len]='0';
    }//最后一个也是0
    int maxr=1,id=1,ans=0;
    for(int i=1 ; i<len ; ++i)
    {
        p[i]= maxr>i ? min(p[2*id-i],maxr-i+1) : 1 ;
        // 如果在最大右端以内,则直接考虑对称部分的以及不拓展出去
        while(s[i+p[i]]==s[i-p[i]]) ++p[i];//s[0]特殊值不会越界;
        if(i+p[i]>maxr)
        {
            maxr=i+p[i];//最大的右端id的 右端位置
            id=i;       //右端最大即当前id+p[id]最大的id
        }
        ans=max(p[i],ans);
    }
    printf("%d",ans-1);
    return 0;
}