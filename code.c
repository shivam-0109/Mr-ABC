#include <stdio.h>

int main() {
	// your code goes here
	int t;
scanf("%d",&t);
while(t--)
{
 int k,n,ans,i;
scanf("%d",&n);
i=1;
while(i<=sqrt(n))
{
i=i*2;
}
if(n/i>=i/2)
ans=n-n/i;
else
ans=(n-(i/2))+1;
 printf("%d\n",ans);
}
	return 0;
}

