#include <string>
#include <iostream>
using namespace std;
string str;
char st[10001];
char s[10001];
int main()
{
	cin>>str;
	cout<<str<<endl;
	int i=-1;
	while((st[++i]=getchar())!='\n');
	printf("%s",st);
	scanf("%s",s);
	printf("%s",s);
    return 0;
}
