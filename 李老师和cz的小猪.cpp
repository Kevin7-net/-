#include<bits/stdc++.h>
using namespace std;
const int N=20;
int n,m;
int w[N],sum[N];
int ans=N,k;
void dfs(int u)
{
    if(k>=ans) return ;//��һ�������Ż���֦�������ڵõ��Ĵ𰸱��Ѿ��õ������Ž⻹�󣬾ͻ���
    if(u==n)
    {
        ans=min(k,ans);
        return;
    }
    for(int i=0;i<k;i++)
        if(w[u]+sum[i]<=m)
        {
            sum[i]+=w[u];
            dfs(u+1);
            sum[i]-=w[u];
        }
    sum[k++]=w[u];
    dfs(u+1);
    sum[--k]=0;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>w[i];
    dfs(0);
    cout<<ans<<endl;
    return 0;
}
