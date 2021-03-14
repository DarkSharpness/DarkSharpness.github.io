#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map <string,int> p;
string str;
int ans=0;

int main()
{
    cin>>str;int len = str.size() ;
    for(int i=len-1,t=1; i>=0 ; --i,t*=27)
        ans+=t*(str[i]-'a'+1);
    cout<<ans<<endl;
    return 0;
}