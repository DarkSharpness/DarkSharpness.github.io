#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=3.3e7+10;
char s[N],str[N];
int p[N];//��Զ������չ�ĳ���;

int main()
{
    scanf("%s",str);int slen=strlen(str),len=1;
    s[0]='1';//��ֹƥ�䵽0����Ȼ���Ȼ��͹ҵ���p[i]����˸���
    s[1]='0';//��һ����Ȼ��ֵΪ0
    for(int i=0 ; i<slen ; ++i)
    {
        s[++len]=str[i];
        s[++len]='0';
    }//���һ��Ҳ��0
    int maxr=1,id=1,ans=0;
    for(int i=1 ; i<len ; ++i)
    {
        p[i]= maxr>i ? min(p[2*id-i],maxr-i+1) : 1 ;
        // ���������Ҷ�����,��ֱ�ӿ��ǶԳƲ��ֵ��Լ�����չ��ȥ
        while(s[i+p[i]]==s[i-p[i]]) ++p[i];//s[0]����ֵ����Խ��;
        if(i+p[i]>maxr)
        {
            maxr=i+p[i];//�����Ҷ�id�� �Ҷ�λ��
            id=i;       //�Ҷ���󼴵�ǰid+p[id]����id
        }
        ans=max(p[i],ans);
    }
    printf("%d",ans-1);
    return 0;
}