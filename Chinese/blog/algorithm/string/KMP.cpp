// O(n+m) ƥ���ַ���
#include < bits/stdc++.h >
using namespace std ;
typedef long long ll ;
const ll N=5e6+10;
ll nxt[N];
char s1[N],s2[N];
int main()
{
  scanf("%s%s",s1+1,s2+1);
  ll l1=strlen(s1+1),l2=strlen(s2+1);
  for(ll i=2,j=0; i<=l1 ; i++)//Ԥ����
  {
    while(j&&s1[i]!=s1[j+1])j=nxt[j];
    if(s1[i]==s1[j+1]) j++;
    nxt[i]=j;
  }
  for(ll i=1,j=0; i<=l2 ; i++)
  {
    while(j&&s2[i]!=s1[j+1])j=nxt[j];//���ƥ�䲻��
    if(s2[i]==s1[j+1]) j++;//
    if(j==l1)//ƥ�䳤��
    {
      j=nxt[j];//�������ƥ�䴮���������ص����־���0
      printf("%lld\n",i-l1+1);//ƥ���λ��		
    }
  }
  for(ll i=1 ; i<=l1 ; ++i)
    printf("%lld ",nxt[i]);
  return 0 ;
}