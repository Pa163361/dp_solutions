#include<stdio.h>
int arr[1000500];
int main()
{
	long long int T,i;
	scanf("%lld",&T);
	for(i=0;i<T;i++)
	{
		int S,W,i,j,s,e,mid;
		scanf("%d %d",&W,&S);
		s=S;
		while(s--)
		{
			scanf("%d",&arr[S-s-1]);
		}
		s=0;
		e=arr[S-1];
		int ans=0;
		while(s<=e)
		{
			mid=(e+s)/2;
			int papaye=0;
			int k=0;
			j=0;int flag=0;
			for(int cnt=1;cnt<=W&&j<S;)
			{
				if((arr[k]+mid+1)<=arr[j]&&j<S)
				{
					cnt+=1;
					k=j;
				}
				if(arr[k]+mid+1>arr[S-1]){
					flag=1;
					break;
				}
				if(cnt==W){
					papaye=2;
					ans=mid;
					s=mid+1;
					break;
				}
				j++;
				printf("%d\t",mid);
			}
			if(flag)
			{
				e=mid-1;
			}
			//printf("%d\t",ans);
		}
		printf("%d\n",ans);
	}
}
