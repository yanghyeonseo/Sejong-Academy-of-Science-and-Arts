/*#include<stdio.h>
int main()
{
    int a[100];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[100];
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int f=1,l=n,m=(f+l)/2;
    while(1)
    {
        m=(f+l)/2;
        if(f>l)
        {
            printf("-1");
            break;
        }
        else if(k>a[m])
        {
            f=m+1;
        }
        else if(k<a[m])
        {
            l=m-1;
        }
        else if(k=a[m])
        {
            printf("%d",m);
            break;
        }
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[100000];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max) max=a[i];
    }
    printf("%d",max);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[100000];
    int n;
    scanf("%d",&n);
    int k;
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/


/*#include<stdio.h>
#include<algorithm>
int main()
{
    int a[100000];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    std::sort(a,a+n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/


/*#include<stdio.h>
#include<algorithm>
bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    int a[100000];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    std::sort(a,a+n,cmp);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}*/


/*#include<stdio.h>
int a[100];
int k;
int cnt;
int f(int s,int e)
{
    int m=(s+e)/2;
    if(s>e)
    {
        return -1;
    }
    else if(k==a[m])
    {
        cnt++;
        return m;
    }
    else if(k<a[m])
    {
        cnt++;
        return f(s,m-1);
    }
    else
    {
        cnt++;
        return f(m+1,e);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    printf("%d ",f(1,n));
    printf("%d",cnt);
}*/


/*#include<stdio.h>
int a[500000];
int b[10000][2];
int n;
int f(int s,int e,int k)
{
    int m;
    while(s<e)
    {
        m=(s+e)/2;
        if(a[m]>=k) e=m;
        else s=m+1;
    }
    return s;
}
int main()
{
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d %d",&b[i][0],&b[i][1]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",f(0,n,b[i][1]+1)-f(0,n,b[i][0]));
    }
    return 0;
}*/


/*#include<stdio.h>
int a[100];
int k;
int f(int s,int e)
{
    int m=(s+e)/2;
    if(s==e)
    {
        return s;
    }
    else if(a[m]>=k)
    {
        return f(s,m);
    }
    else
    {
        return f(m+1,e);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    scanf("%d",&k);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",f(0,n)+1);
    return 0;
}*/


/*#include<stdio.h>
int a[100000];
int b[10];
int f(int s,int e,int k)
{
    int m=(s+e)/2;
    if(s==e)
    {
        return s;
    }
    else if(a[m]>k)
    {
        return f(s,m,k);
    }
    else
    {
        return f(m+1,e,k);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",f(0,n,b[i])+1);
    }
    return 0;
}*/


/*#include<stdio.h>
int a[100];
int f(int s,int e,int k)
{
    int m=(s+e)/2;
    if(s==e)
    {
        return s;
    }
    else if(a[m]>=k)
    {
        return f(s,m,k);
    }
    else
    {
        return f(m+1,e,k);
    }
}
int g(int s,int e,int k)
{
    int n=f(s,e,k);
    if(a[n]==k) return n+1;
    else return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",g(0,n,k));
}*/


/*#include<stdio.h>
int a[500000];
int b[10000][2];
int n;
int f(int s,int e,int k)
{
    int m;
    while(s<e)
    {
        m=(s+e)/2;
        if(a[m]>=k) e=m;
        else s=m+1;
    }
    return s;
}
int main()
{
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d %d",&b[i][0],&b[i][1]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",f(0,n,b[i][1]+1)-f(0,n,b[i][0]));
    }
    return 0;
}*/


//트리가 오직 1개의 부모노드를 가진다는 규칙을 어기면 그래프가 됨.0329
/*#include<stdio.h>
int a[100];
int power(int n)
{
    int p=1;
    int i;
    for(i=0;i<n;i++)
    {
        p*=2;
    }
    return p;
}
int ps(int n)
{
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum+=power(n);
    }
    return sum;
}
void f(int v,int l,int s)
{
    a[ps(l-1)+s+1]=v;
}
int main()
{
    int n,h,v,l,s;
    scanf("%d %d",&n,&h);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&v,&l,&s);
        f(v,l-1,s-1);
    }
    printf("%d\n",a[0]);
    for(i=1;i<l;i++)
    {
        for(j=ps(i-1)+1;j<=ps(i-1)+power(i);j++)
        {
            printf("%d(%d) ",a[j],j);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int pow(int n)
{
    int p=1;
    int i;
    for(i=0;i<n;i++)
    {
        p*=2;
    }
    return p;
}
int main()
{
    int a[5][100]={0};
    int n,h,v,l,s;
    scanf("%d %d",&n,&h);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&v,&l,&s);
        a[l-1][s-1]=v;
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<pow(i);j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int arr[10][10]={};
    int n,m;
    char a,b;
    scanf("%d %d",&n,&m);
    int k,l;
    int i,j;
    for(i=0;i<m;i++)
    {
        scanf(" %c %c",&a,&b);
        arr[a-65][b-65]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}*/


/*#include<stdio.h>
int main()
{
    int arr[10][10]={};
    int n,m,w;
    char a,b;
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=0;i<m;i++)
    {
        scanf(" %c %c %d",&a,&b,&w);
        arr[a-65][b-65]=arr[b-65][a-65]=w;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[25];
    int b[25][25]={};
    int n,k;
    scanf("%d",&n);
    int l=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&k);
            if(k==0)
            {
                a[l]=10*i+j;
                l++;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i]-a[j]==1||a[i]-a[j]==10)
            {
                b[i][j]=b[j][i]=1;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
#include<stack>
using namespace std;
stack<int> st;
int main()
{
    int k;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&k);
        st.push(k);
    }
    while(!st.empty())
    {
        printf("%d\n",st.top());
        st.pop();
    }
    return 0;
}*/


///////////////////////////////////
/*#include<stdio.h>
#include<stack>
void dfs(char k)
{
    int i;
    visit(k);///////////////////
    while(!st.empty())
    {
        for(i=0;i<n;i++)
        {
            if(a[st.top()-'A'][i]&&!visited[i])
            {
                visit(i+'A');
                break;
            }
        }
        if(i==n)
        {
            st.pop();
        }
    }
}*/


//////////////////////큐 쓰기기기기기


////////////////////////뭐가 많음

/*#include<stdio.h>
#include<stack>
using namespace std;
stack<int> st;
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        st.push(k);
    }
    int sum=0,cnt=0;
    while(!st.empty())
    {
        if(!st.top())
        {
            cnt++;
            st.pop();
        }
        else if(cnt)
        {
            st.pop();
            cnt--;
        }
        else
        {
            sum+=st.top();
            st.pop();
        }
    }
    printf("%d",sum);
    return 0;
}*/


/*#include<stdio.h>
#include<stack>
using namespace std;
stack<char> st;
int a[10][10];
int n;
int visited[10];
void visit(char k)
{
    st.push(k);
    visited[k-'A']=1;
    printf("%c ",k);
}
void DFS(char k)
{
    visit(k);
    int i;
    while(!st.empty())
    {
        for(i=0;i<n;i++)
        {
            if(a[st.top()-'A'][i]&&!visited[i])
            {
                visit(i+'A');
                break;
            }
        }
        if(i==n)
        {
            st.pop();
        }
    }
}
int main()
{
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    DFS('A');
    return 0;
}*/


/*#include<stdio.h>
#include<queue>
using namespace std;
queue<char> q;
int a[10][10];
int visited[10];
int n;
void visit(char k)
{
    printf("%c ",k);
    visited[k-'A']=1;
    q.push(k);
}
void BFS(char k)
{
    visit(k);
    int i;
    while(!q.empty())
    {
        for(i=0;i<n;i++)
        {
            if(a[q.front()-'A'][i]&&!visited[i])
            {
                visit(i+'A');
            }
        }
        q.pop();
    }
}
int main()
{
    scanf("%d",&n);
    int k;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    BFS('A');
    return 0;
}*/


/*#include<stdio.h>
int n,m;
int a[10][10];
int visited[10];
int min;
void DFS(int s,int e,int l)
{
    visited[s]=1;
    if(s==e)
    {
        if(l<min) min=l;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[s][i]&&!visited[i])
        {
            DFS(i,e,l+1);
            visited[i]=0;
        }
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    int x,y;
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&x,&y);
        a[x-1][y-1]=a[y-1][x-1]=1;
    }
    int s,e;
    scanf("%d %d",&s,&e);
    min=n+1;
    DFS(s-1,e-1,1);
    if(min==n+1)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min);
    }
    return 0;
}*/


/*#include<stdio.h>
char a[100];
int pow(int n,int k)
{
    int p=1;
    int i;
    for(i=0;i<k;i++)
    {
        p*=n;
    }
    return p;
}
int sum(int n,int k)
{
    int sum=0;
    int i;
    for(i=0;i<=k;i++)
    {
        sum+=pow(n,i);
    }
    return sum;
}
int main()
{
    int d,n;
    scanf("%d %d",&d,&n);
    int i;
    for(i=1;i<=n;i++)
    {
        scanf(" %c",&a[i]);
    }
    char k;
    scanf(" %c",&k);
    int p;
    for(i=1;i<=n;i++)
    {
        if(a[i]==k)
        {
            p=i;
            break;
        }
    }
    if(p==1) printf("%d",p);
    for(i=1;i<=n;i++)
    {
        if(sum(d,i-1)<p&&p<=sum(d,i))
        {
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}*/


/*#include<stdio.h>
int a[122];
int pow(int n,int k)
{
    int p=1;
    int i;
    for(i=0;i<k;i++)
    {
        p*=n;
    }
    return p;
}
int sum(int n,int k)
{
    int sum=0;
    int i;
    for(i=0;i<=k;i++)
    {
        sum+=pow(n,i);
    }
    return sum;
}
int main()
{
    int n,d,h;
    int v,l,o;
    scanf("%d %d %d",&n,&d,&h);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&v,&l,&o);
        a[sum(d,l-2)+o-1]=v;
    }
    int k;
    scanf("%d",&k);
    int p;
    for(i=0;i<=sum(d,h-1);i++)
    {
        if(a[i]==k)
        {
            p=i;
            break;
        }
    }
    for(i=0;i<h-1;i++)
    {
        p=(p-1)/d;
        printf("%d ",a[p]);
        if(p==0) break;
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max) max=a[i];
    }
    printf("%d",max);
    return 0;
}*/


/*#include<stdio.h>
#include<algorithm>
int main()
{
    int a[100000];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    std::sort(a,a+n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/


/*#include<stdio.h>
#include<algorithm>
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int a[100000];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    std::sort(a,a+n,cmp);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/


/*#include<stdio.h>
int a[100];
int cnt;
int f(int s,int e,int k)
{
    int m;
    while(s<e)
    {
        cnt++;
        m=(s+e)/2;
        if(a[m]==k) return m+1;
        else if(a[m]>k) e=m-1;
        else s=m+1;
    }
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int k;
    scanf("%d",&k);
    printf("%d ",f(0,n-1,k));
    printf("%d",cnt);
    return 0;
}*/


/*#include<stdio.h>
int a[101];
int n,k;
int f(int s,int e,int k)
{
    int m;
    while(s<e)
    {
        m=(s+e)/2;
        if(a[m]>=k) e=m;
        else s=m+1;
    }
    return s+1;
}
int main()
{
    scanf("%d %d",&n,&k);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("%d",f(0,n,k));
    return 0;
}*/


/*#include<stdio.h>
int a[1000001],b[11];
int f(int s,int e,int k)
{
    int m;
    while(s<e)
    {
        m=(s+e)/2;
        if(a[m]>k) e=m;
        else s=m+1;
    }
    return s+1;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",b+i);
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",f(0,n,b[i]));
    }
    return 0;
}*/


/*#include<stdio.h>
int a[101];
int f(int s,int e,int k)
{
    int m;
    while(s<e)
    {
        m=(s+e)/2;
        if(a[m]>=k) e=m;
        else s=m+1;
    }
    if(a[s]==k) return s+1;
    return -1;
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("%d",f(0,n,k));
    return 0;
}*/


/*#include<stdio.h>
int a[500001],b[10000][2];
int lb(int s,int e,int k)
{
    int m;
    while(s<e)
    {
        m=(s+e)/2;
        if(a[m]>=k) e=m;
        else s=m+1;
    }
    return s;
}
int up(int s,int e,int k)
{
    int m;
    while(s<e)
    {
        m=(s+e)/2;
        if(a[m]>k) e=m;
        else s=m+1;
    }
    return s;
}
int f(int n,int a,int b)
{
    int s,e;
    s=lb(0,n,a);
    e=up(0,n,b)-1;
    return e-s+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d %d",&b[i][0],&b[i][1]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",f(n,b[i][0],b[i][1]));
    }
    return 0;
}*/


/*#include<stdio.h>
#include<math.h>
int a[101];
int sumpow(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=(int)powf(2,i);
    }
    return sum;
}
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    int v,l,s;
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&v,&l,&s);
        a[sumpow(l-2)+(s-1)]=v;
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<(int)pow(2,i);j++)
        {
            printf("%d ",a[sumpow(i-1)+j]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int g[11][11];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char a,b;
    int i,j;
    for(i=0;i<m;i++)
    {
        scanf(" %c %c",&a,&b);
        g[a-'A'][b-'A']=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int g[11][11];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char a,b;
    int w;
    int i,j;
    for(i=0;i<m;i++)
    {
        scanf(" %c %c %d",&a,&b,&w);
        g[a-'A'][b-'A']=g[b-'A'][a-'A']=w;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int a[25],g[25][25];
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    int cnt=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&k);
            if(!k) a[cnt++]=10*i+j;
        }
    }
    for(i=0;i<cnt;i++)
    {
        for(j=0;j<cnt;j++)
        {
            if((a[i]-a[j]==1)||(a[i]-a[j]==10))
            {
                g[i][j]=g[j][i]=1;
            }
        }
    }
    for(i=0;i<cnt;i++)
    {
        for(j=0;j<cnt;j++)
        {
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
#include<stack>
using namespace std;
stack<int> st;
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        st.push(k);
        if(!st.top())
        {
            st.pop();
            st.pop();
        }
    }
    int sum=0;
    while(!st.empty())
    {
        sum+=st.top();
        st.pop();
    }
    printf("%d",sum);
    return 0;
}*/


/*#include<stdio.h>
#include<stack>
using namespace std;
stack<char> st;
int a[11][11];
int visited[11];
int n;
void visit(char k)
{
    st.push(k);
    visited[k-'A']=1;
    printf("%c ",k);
}
void dfs(char k)
{
    visit(k);
    int i;
    while(!st.empty())
    {
        for(i=0;i<n;i++)
        {
            if(a[st.top()-'A'][i]&&!visited[i])
            {
                visit(i+'A');
                break;
            }
        }
        if(i==n) st.pop();
    }
}
int main()
{
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    dfs('A');
    return 0;
}*/


/*#include<stdio.h>
#include<queue>
using namespace std;
queue<char> q;
int a[11][11];
int visited[11];
int n;
void visit(char k)
{
    q.push(k);
    visited[k-'A']=1;
    printf("%c ",k);
}
void bfs(char k)
{
    visit(k);
    int i;
    while(!q.empty())
    {
        for(i=0;i<n;i++)
        {
            if(a[q.front()-'A'][i]&&!visited[i])
            {
                visit(i+'A');
            }
        }
        q.pop();
    }
}
int main()
{
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    bfs('A');
    return 0;
}*/


/*#include<stdio.h>
#include<queue>
using namespace std;
queue<int> q;
int g[12][12];
int visited[12];
int len[12];
int n,m;
void visit(int k)
{
    q.push(k);
    visited[k]=1;
    len[k]=len[q.front()]+1;
}
int bfs(int s,int e)
{
    q.push(s);
    visited[s]=1;
    len[s]=1;
    int i;
    while(!q.empty()&&!visited[e])
    {
        for(i=1;i<=n;i++)
        {
            if(g[q.front()][i]&&!visited[i])
            {
                visit(i);
                if(i==e)
                {
                    return len[e];
                }
            }
        }
        q.pop();
    }
    return -1;
}
int main()
{
    scanf("%d %d",&n,&m);
    int a,b;
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        g[a][b]=g[b][a]=1;
    }
    int s,e;
    scanf("%d %d",&s,&e);
    printf("%d",bfs(s,e));
    return 0;
}*/


/*#include<stdio.h>
#include<math.h>
char t[101];
int d,n;
int main()
{
    scanf("%d %d",&d,&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf(" %c",t+i);
    }
    char k;
    scanf(" %c",&k);
    int p;
    for(i=0;i<n;i++)
    {
        if(t[i]==k) p=i;
    }
    int cnt=0;
    while(p>0)
    {
        p=(p-1)/d;
        cnt++;
    }
    printf("%d",cnt+1);
    return 0;
}*/


/*#include<stdio.h>
#include<math.h>
int t[10000];
int n,d,h;
int sumpow(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=(int)pow(d,i);
    }
    return sum;
}
int main()
{
    scanf("%d %d %d",&n,&d,&h);
    int v,l,o;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&v,&l,&o);
        t[sumpow(l-2)+o-1]=v;
    }
    int k;
    scanf("%d",&k);
    int p;
    for(i=0;i<sumpow(h-1);i++)
    {
        if(t[i]==k) p=i;
    }
    while(p>0)
    {
        p=(p-1)/d;
        printf("%d ",t[p]);
    }
    return 0;
}*/


/*#include<stdio.h>
#include<stack>
using namespace std;
stack<int> st;
int g[902][902];
int visited[32];
int n,e;
void visit(int k)
{
    st.push(k);
    visited[k]=1;
}
void dfs(int s,int e)
{
    visit(s);
    int i;
    while(!st.empty())
    {
        for(i=1;i<=n;i++)
        {
            if(g[st.top()][i]&&!visited[i])
            {
                visit(i);
                if(i==e)
                {
                    printf("Yes");
                    return;
                }
                break;
            }
        }
        if(i==n+1) st.pop();
    }
    printf("No");
}
int main()
{
    scanf("%d %d",&n,&e);
    int a,b;
    int i;
    for(i=0;i<e;i++)
    {
        scanf("%d %d",&a,&b);
        g[a][b]=g[b][a]=1;
    }
    int s,e;
    scanf("%d %d",&s,&e);
    dfs(s,e);
    return 0;
}*/


/*#include<stdio.h>
#include<queue>
using namespace std;
queue<int> q;
int g[102][102];
int visited[102];
int len[102];
int m,n;
void visit(int k)
{
    q.push(k);
    visited[k]=1;
    len[k]=len[q.front()]+1;
}
int bfs(int s,int e)
{
    q.push(s);
    visited[s]=1;
    len[s]=0;
    int i;
    while(!q.empty())
    {
        for(i=1;i<=m;i++)
        {
            if(g[q.front()][i]&&!visited[i])
            {
                visit(i);
                if(i==e) return len[e];
            }
        }
        q.pop();
    }
    return -1;
}
int main()
{
    scanf("%d %d",&m,&n);
    int a,b;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        g[a][b]=g[b][a]=1;
    }
    int s,e;
    scanf("%d %d",&s,&e);
    printf("%d",bfs(s,e));
    return 0;
}*/


/*#include<stdio.h>
int g[31][31];
int visited[31][31];
int cnt=0;
int max=0;
void dfs(int y,int x)
{
    visited[y][x]=1;
    cnt++;
    if(g[y+1][x]&&!visited[y+1][x]) dfs(y+1,x);
    if(g[y][x+1]&&!visited[y][x+1]) dfs(y,x+1);
    if(g[y-1][x]&&!visited[y-1][x]) dfs(y-1,x);
    if(g[y][x-1]&&!visited[y][x-1]) dfs(y,x-1);
    if(cnt>max) max=cnt;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(g[i][j]&&!visited[i][j])
            {
                dfs(i,j);
                cnt=0;
            }
        }
    }
    printf("%d",max);
    return 0;
}*/

/*
#include<stdio.h>
int g[11][11];
int visited[11][11];
int max=0,name;
int cnt=0;
void visit(int y,int x)
{
    visited[y][x]=1;
    cnt++;
}
void dfs(int y,int x,int k)
{
    visit(y,x);
    if(g[y][x+1]==k&&!visited[y][x+1]) dfs(y,x+1,k);
    if(g[y+1][x]==k&&!visited[y+1][x]) dfs(y+1,x,k);
    if(g[y][x-1]==k&&!visited[y][x-1]) dfs(y,x-1,k);
    if(g[y-1][x]==k&&!visited[y-1][x]) dfs(y-1,x,k);
    if(cnt>max)
    {
        max=cnt;
        name=k;
    }
}
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            dfs(i,j,g[i][j]);
            cnt=0;
        }
    }
    if(max<3) printf("0");
    else printf("%d %d",name,max);
    return 0;
}*/


/*#include<stdio.h>
int g[11][11];
int visited[11][11];
int max=0,name;
int cnt=0;
void visit(int y,int x)
{
    visited[y][x]=1;
    cnt++;
}
void dfs(int y,int x,int k)
{
    visit(y,x);
    if(g[y][x+1]==k&&!visited[y][x+1]) dfs(y,x+1,k);
    if(g[y+1][x]==k&&!visited[y+1][x]) dfs(y+1,x,k);
    if(g[y][x-1]==k&&!visited[y][x-1]) dfs(y,x-1,k);
    if(g[y-1][x]==k&&!visited[y-1][x]) dfs(y-1,x,k);
    if(cnt>max)
    {
        max=cnt;
        name=k;
    }
}
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            dfs(i,j,g[i][j]);
            cnt=0;
        }
    }
    if(max<3) printf("0");
    else printf("%d %d",name,max);
    return 0;
}*/


/*#include<stdio.h>
int a[1005];
int main()
{
    int n;
    scanf("%d",&n);
    int max;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        if(!i) max=a[i];
        if(a[i]>max) max=a[i];
    }
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==max) cnt++;
    }
    printf("%d %d",max,cnt);
    return 0;
}*/


/*#include<stdio.h>
int a[1005];
int main()
{
    int n;
    scanf("%d",&n);
    int min;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        if(!i) min=a[i];
        if(a[i]<min) min=a[i];
    }
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==min) cnt++;
    }
    printf("%d %d",min,cnt);
    return 0;
}*/


/*#include<stdio.h>
int a[1005];
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        sum+=a[i];
    }
    int m=sum/n;
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==m) cnt++;
    }
    printf("%d %d",m,cnt);
    return 0;
}*/


/*#include<stdio.h>
#include<algorithm>
int a[500005];
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    std::sort(a,a+n);
    float m;
    if(n%2) m=(float)a[n/2];
    else m=((float)a[n/2-1]+(float)a[n/2])/2;
    printf("%.1f",m);
    return 0;
}*/


/*#include<stdio.h>
int a[105];
void f(int s,int e,int k)
{
    int m;
    while(s<=e)
    {
        m=(s+e)/2;
        printf("%d ",a[m]);
        if(a[m]==k) return;
        else if(a[m]<k) s=m+1;
        else e=m-1;
    }
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    scanf("%d",&k);
    f(0,n-1,k);
    return 0;
}*/


/*#include<stdio.h>
int a[105];
void f(int s,int e,int k)
{
    int m;
    while(s<e)
    {
        m=(s+e)/2;
        printf("%d ",a[m]);
        if(a[m]>=k) e=m;
        else s=m+1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int k;
    scanf("%d",&k);
    f(0,n,k);
    return 0;
}*/


/*#include<stdio.h>
int a[105];
void f(int s,int e,int k)
{
    int m=(s+e)/2;
    while(s<e)
    {
        m=(s+e)/2;
        printf("%d ",a[m]);
        if(a[m]>k) e=m;
        else s=m+1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int k;
    scanf("%d",&k);
    f(0,n,k);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0) sum+=i;
    }
    printf("%d",sum);
    return 0;
}*/


/*#include<stdio.h>
int a[105][105];
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max=a[0][0];
    int x,y;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                x=i;
                y=j;
            }
        }
    }
    printf("%d\n%d %d",max,x+1,y+1);
    return 0;
}*/


/*#include<stdio.h>
#include<queue>
std::queue<int> q;
int arr[55][55];
int visited[55];
int n,m;
int cnt;
void visit(int k)
{
    cnt++;
    visited[k]=1;
    q.push(k);
}
void bfs(int k)
{
    visit(k);
    int i;
    while(!q.empty())
    {
        for(i=1;i<=n;i++)
        {
            if(arr[q.front()][i]&&!visited[i])
            {
                visit(i);
            }
        }
        q.pop();
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    int a,b;
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        arr[a][b]=arr[b][a]=1;
    }
    int k;
    scanf("%d",&k);
    bfs(k);
    printf("%d",cnt-1);
    return 0;
}*/


//삼각화단(S)
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    int a,b,c;
    for(a=1;a<=n/3;a++)
    {
        for(b=1;b<=n/2;b++)
        {
            c=n-(a+b);
            if(a<=b&&b<=c)
            {
                if(c<a+b) cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}*/


//answer
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    for(int a=1;a<n;a++)
    {
        for(int b=a;b<n;b++)
        {
            for(int c=b;c<n;c++)
            {
                if(a+b+c==n&&c<a+b) cnt++;
            }
        }
    }
    printf("%d",cnt);
}*/


//개미(S)
/*#include<stdio.h>
int w,h;
int f(int x,int k,int t)
{
    if(!t) return x;
    if(k>0)
    {
        if(x==w) return f(x-1,-1,t-1);
        return f(x+1,k,t-1);
    }
    if(k<0)
    {
        if(x==0) return f(x+1,1,t-1);
        return f(x-1,k,t-1);
    }
}
int g(int y,int k,int t)
{
    if(!t) return y;
    if(k>0)
    {
        if(y==h) return g(y-1,-1,t-1);
        return g(y+1,k,t-1);
    }
    if(k<0)
    {
        if(y==0) return g(y+1,1,t-1);
        return g(y-1,k,t-1);
    }
}
int main()
{
    scanf("%d %d",&w,&h);
    int p,q;
    scanf("%d %d",&p,&q);
    int t;
    scanf("%d",&t);
    printf("%d %d",f(p,1,t),g(q,1,t));
    return 0;
}*/


//answer
/*#include<stdio.h>
int main()
{
    int a=1,b=1;
    while(t--)
    {
        if(p==w) a=-1;
        if(p==0) a=1;
        if(q=h) b=-1;
        if(q==0) b=1;
        p+=a;
        q+=b;
    }
}*/


//nQueen(S)
/*#include<stdio.h>
int map[15][15];
int n;
int cnt=0;
void clear()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            map[i][j]=0;
        }
    }
}
void put(int x,int y)
{
    int i;
    for(i=1;i<=n;i++)
    {
        map[x][i]+=1;
        map[i][y]+=1;
        if(x+i<=n&&y+i<=n) map[x+i][y+i]+=1;
        if(x-i>=1&&y-i>=1) map[x-i][y-i]+=1;
        if(x+i<=n&&y-i>=1) map[x+i][y-i]+=1;
        if(x-i>=1&&y+i<=n) map[x-i][y+i]+=1;
    }
    map[x][y]-=1;
}
void pop(int x,int y)
{
    int i;
    for(i=1;i<=n;i++)
    {
        map[x][i]-=1;
        map[i][y]-=1;
        if(x+i<=n&&y+i<=n) map[x+i][y+i]-=1;
        if(x-i>=1&&y-i>=1) map[x-i][y-i]-=1;
        if(x+i<=n&&y-i>=1) map[x+i][y-i]-=1;
        if(x-i>=1&&y+i<=n) map[x-i][y+i]-=1;
    }
    map[x][y]+=1;
}
void queen(int x,int y)
{
    put(x,y);
    if(x==n)
    {
        cnt++;
        return;
    }
    int i,j;
    int k;
    for(i=1;i<=n;i++)
    {
        if(!map[x][i]) k++;
    }
    if(!k) return;
    k=0;
    for(i=1;i<=n;i++)
    {
        if(!map[x+1][i])
        {
            queen(x+1,i);
            pop(x+1,i);
        }
    }
}
int main()
{
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        clear();
        queen(1,i);
    }
    printf("%d",cnt);
    return 0;
}*/


//answer
/*#include<stdio.h>
int col[10],inc[20],dec[20],cnt,n;
void dfs(int r)
{
    if(r>n)
    {
        cnt++;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!col[i]&&!inc[i]&&!dec[n+r-i])
        {
            col[i]=inc[r+i]=dec[n+r-i]=1;
            dfs(r+1);
            col[i]=inc[r+i]=dec[n+r-i]=0;
        }
    }
}
int main()
{

}*/


//집에 가는 길(S)
/*#include<stdio.h>
int map[15][15];
int visited[15];
int min=10000;
int n,m;
void dfs(int k,int money)
{
    visited[k]=1;
    if(k==n)
    {
        if(money<min)
        {
            min=money;
        }
        return;
    }
    int i;
    for(i=1;i<=n;i++)
    {
        if(map[k][i]&&!visited[i])
        {
            dfs(i,money+map[k][i]);
            visited[i]=0;
        }
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    int a,b,w;
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d %d %d",&a,&b,&w);
        map[a][b]=map[b][a]=w;
    }
    dfs(1,0);
    if(min==10000) printf("-1");
    else printf("%d",min);
    return 0;
}*/


//answer
/*#include<stdio.h>
int am[15][15];
int visited[15];
int min=-1;   //0x7fffffff 가능
visited[1]=1;
void dfs(int v,int w)   //v:방문노드 w:비용
{
    if(v==n)
    {
        if(min<0||w<min) min=w;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(am[v][i]&&visited[i])
        {
            visited[i]=1;
            dfs(i,w+am[v][i]);
            visited[i]=0
        }
    }
}
int main()
{

}*/


/*#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int sum=0;
    long long int i;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i==n) sum+=i;
            else sum+=i+n/i;
        }
    }
    printf("%lld",sum);
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    int i,j,k;
    for(i=1;i<=n/3;i++)
    {
        for(k=n/3;k<=n/2;k++)
        {
            j=n-(i+k);
            if(i<=j&&j<=k&&k<i+j) cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int w,h;
    scanf("%d %d",&w,&h);
    int p,q;
    scanf("%d %d",&p,&q);
    int t;
    scanf("%d",&t);
    int t1=t%(2*w),t2=t%(2*h);
    int k=1;
    while(t1>0)
    {
        t1--;
        if(p==w) k*=-1;
        if(p==0&&k<0) k*=-1;
        if(k>0) p++;
        else p--;
    }
    k=1;
    while(t2>0)
    {
        t2--;
        if(q==h) k*=-1;
        if(q==0&&k<0) k*=-1;
        if(k>0) q++;
        else q--;
    }
    printf("%d %d",p,q);
    return 0;
}*/


/*#include<stdio.h>
int a[10][10];
int max=0;
int f(int x,int y)
{
    int sum=0;
    for(int i=x;i<x+3;i++)
    {
        for(int j=y;j<y+3;j++)
        {
            sum+=a[i][j];
        }
    }
    return sum;
}
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(f(i,j)>max) max=f(i,j);
        }
    }
    printf("%d",max);
    return 0;
}*/


/*#include<stdio.h>
int map[20][20],visited[20];
int n,m;
int min=99999;
void dfs(int s,int e,int m)
{
    visited[s]=1;
    if(s==e)
    {
        if(m<min) min=m;
        return;
    }
    if(m>min) return;
    for(int i=1;i<=n;i++)
    {
        if(map[s][i]&&!visited[i])
        {
            dfs(i,e,m+map[s][i]);
            visited[i]=0;
        }
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    int a,b,w;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d %d",&a,&b,&w);
        map[a][b]=map[b][a]=w;
    }
    dfs(1,n,0);
    if(min==99999) printf("-1");
    else printf("%d",min);
    return 0;
}*/


/*#include<stdio.h>
int a[10005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        printf("%lld ",sum);
    }
    return 0;
}*/


/*#include<stdio.h>
int a[1005][1005];
int sum[1005][1005];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            sum[i][j]=a[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int mine[1005][1005];
int sum[1005][1005];
int max;
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&mine[i][j]);
            sum[i][j]=mine[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
        }
    }
    int k;
    if(n<100)
    {
        printf("%d",sum[n][n]);
        return 0;
    }
    for(i=1;i<=n-99;i++)
    {
        for(j=1;j<=n-99;j++)
        {
            k=sum[i+99][j+99]-sum[i-1][j+99]-sum[i+99][j-1]+sum[i-1][j-1];
            if(k>max) max=k;
        }
    }
    printf("%d",max);
    return 0;
}*/
