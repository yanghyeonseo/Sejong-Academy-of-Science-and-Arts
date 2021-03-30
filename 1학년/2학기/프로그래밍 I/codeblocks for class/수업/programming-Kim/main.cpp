//예제1: 1부터 n까지의 합-반복문
/*#include<stdio.h>
#include<time.h>
int main()
{
	int n;
	long long int sum=0;
	time_t start, end;
	scanf("%d",&n);
	start=clock();
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("%lld\n",sum);
	end=clock();
	printf("%f\n",(float)(end-start)/CLOCKS_PER_SEC);
	return 0;
}*/


//예제1: 1부터 n까지의 합-방법1
/*#include<stdio.h>
#include<time.h>
long long int f(int n)
{
	if(n==1) return 1;
	else return f(n-1)+n;
}
int main()
{
	int n;
	time_t start,end;
	scanf("%d",&n);
	start=clock();
	printf("%lld\n",f(n));
	end=clock();
	printf("%f",(float)(end-start)/CLOCKS_PER_SEC);
	return 0;
}*/


//예제1: 1부터 n까지의 합-방법2
/*#include<stdio.h>
#include<time.h>
long long int f(long long int n)
{
	if(n==1) return 1;
	return 2*f(n/2)+((n+1)/2)*((n+1)/2);
}
int main()
{
	int n;
	time_t start,end;
	scanf("%d",&n);
	start=clock();
	printf("%lld\n",f(n));
	end=clock();
	printf("%f\n",(float)(end-start)/CLOCKS_PER_SEC);
	return 0;
}*/


//예제2: 진법변환-1~10진법
/*#include<stdio.h>
void f(int n,int k)
{
    if(n<k)
    {
        printf("%d",n);
    }
    else
    {
        f(n/k,k);
        printf("%d",n%k);
    }
}
int main()
{
    int n;
    int k;
    scanf("%d %d",&n,&k);
    f(n,k);
    return 0;
}*/


//예제2: 진법변환-1~20진법
/*#include<stdio.h>
char d[21]="0123456789ABCDEFGHIJ";
void f(int n,int k)
{
    if(n<k)
    {
        printf("%c",d[n]);
    }
    else
    {
        f(n/k,k);
        printf("%c",d[n%k]);
    }
}
int main()
{
    int n;
    int k;
    scanf("%d %d",&n,&k);
    f(n,k);
    return 0;
}*/


//문제1: 숫자 뒤집기(S)-내 풀이
/*#include<stdio.h>
void f(int n)
{
    if(n)
    {
        printf("%d",n%10);
        f(n/10);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    while(!(n%10))
    {
        n/=10;
    }
    f(n);
    return 0;
}*/


//문제1: 숫자 뒤집지(S)-방법1
/*#include<stdio.h>
int flag=1;
void f(int n)
{
    if(n==0)
    {
        return;
    }
    else if(flag&&(n%10==0))
    {
        f(n/10);
    }
    else
    {
        flag=0;
        printf("%d",n%10);
        f(n/10);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    f(n);
}*/


//숫자 뒤집기(S)-방법2
/*#include<stdio.h>
#include<math.h>
int f(int n)
{
    if(n<10) return n;
    return f(n/10)+(n%10)*powf(10.0,(int)log10((double)n));
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}*/

//숫자 뒤집기(S)-방법3
//이 방법에 오류 존재!!
/*#include<stdio.h>
#include<math.h>
int f(int n)
{
    if(n<10) return n;
    int T=(int)powf(10.0,(int)log10((double)n));
    return (n%10)*T+f((n%T)/10)*10+n/T;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}*/


//문제2: 별 그리기-내 풀이
/*#include<stdio.h>
#include<time.h>
void f(int n)
{
    if(n==1)
    {
        printf("*");
    }
    else
    {
        f(n-1);
        printf("\n");
        int i;
        for(i=0;i<n;i++)
        {
            printf("*");
        }
    }
}
int main()
{
    time_t s,e;
    int n;
    scanf("%d",&n);
    s=clock();
    f(n);
    e=clock();
    printf("\nexe time: %f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제2: 별 그리기-방법1
/*#include<stdio.h>
#include<time.h>
void f(int n)
{
    if(n>0)
    {
        f(n-1);
        for(int i=0;i<n;i++)
        {
            printf("*");
        }
        puts("");
    }
}
int main()
{
    time_t s,e;
    int n;
    scanf("%d",&n);
    s=clock();
    f(n);
    e=clock();
    printf("exe time: %f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제2: 별 그리기-방법2
/*#include<stdio.h>
#include<time.h>
char star[10010];
void f(int n)
{
    if(n>0)
    {
        f(n-1);
        star[n-1]='*';
        puts(star);//printf("%s\n",star);
    }
}
int main()
{
    int n;
    time_t s,e;
    scanf("%d",&n);
    s=clock();
    f(n);
    e=clock();
    printf("exe time: %f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제3: combination(S)-overflow 발생
/*#include<stdio.h>
long long int f(int k)
{
    if(k==1) return 1;
    return k*f(k-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld",f(n));
    return 0;
}*/


//문제3: combination(S)-방법1
/*#include<stdio.h>
#include<time.h>
long long int f(int n,int k)
{
    if(n==k) return 1;
    else if(k==1) return n;
    return f(n-1,k)+f(n-1,k-1);
}
int main()
{
    time_t s,e;
    int n,k;
    scanf("%d %d",&n,&k);
    s=clock();
    printf("%lld\n",f(n,k));
    e=clock();
    printf("%f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제3: combination(S)-방법2
/*#include<stdio.h>
#include<time.h>
long long int f(int n,int k)
{
    if(n==k) return 1;
    else if(k==1) return n;
    return f(n,k-1)*(n-k+1)/k;
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    time_t s,e;
    s=clock();
    printf("%lld\n",f(n,k));
    e=clock();
    printf("%f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제3: combination(S)-방법3
/*#include<stdio.h>
#include<time.h>
double f(int n,int k)
{
    if(n==k) return 1;
    else if(k==1) return n;
    return (double)(n-k+1)/(double)k*f(n,k-1);
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    time_t s,e;
    s=clock();
    printf("%lf\n",f(n,k));
    e=clock();
    printf("%f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제3: combination(S)-내 풀이2(오버플로우)
/*#include<stdio.h>
#include<time.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    long long int t=1;
    int i;
    for(i=n-k+1;i<=n;i++)
    {
        t*=i;
    }
    for(i=1;i<=k;i++)
    {
        t/=i;
    }
    printf("%lld",t);
    return 0;
}*/


//문제3: combination(S)-방법1+memorization
/*#include<stdio.h>
#include<time.h>
long long int a[310][310];
long long int f(int n,int k)
{
    if(a[n][k]) return a[n][k];
    if(n==k) return a[n][k]=1;
    else if(k==1) return a[n][k]=n;
    else return a[n][k]=f(n-1,k)+f(n-1,k-1);
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    printf("%lld",f(n,k));
    return 0;
}*/


//문제4: 타일채우기(S)-방법1
/*#include<stdio.h>
#include<time.h>
int n,m;
int f(int n)
{
    if(n==1) return 1;
    if(n==2) return 3%m;
    return (f(n-1)+2*f(n-2))%m;
}
int main()
{
    time_t s,e;
    scanf("%d %d",&n,&m);
    s=clock();
    printf("%d",f(n));
    e=clock();
    printf("\n%f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제4: 타일채우기(S)-방법1+memorization
/*#include<stdio.h>
#include<time.h>
int a[100001];
int n,m;
int f(int n)
{
    if(a[n]) return a[n]%m;
    else if(n==1) return a[n]=1;
    else if(n==2) return a[n]=3%m;
    return a[n]=(f(n-1)+2*f(n-2))%m;
}
int main()
{
    time_t s,e;
    scanf("%d %d",&n,&m);
    s=clock();
    printf("%d",f(n));
    e=clock();
    printf("\n%f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제4: 타일채우기(S)-방법2
/*#include<stdio.h>
#include<time.h>
int n,m;
long long int f(int n)
{
    if(n==1) return 1;
    if(n==2) return 3%m;
    if(!(n%2)) return (f(n/2)*f(n/2)+2*f(n/2-1)*f(n/2-1))%m;
    return (f(n-1)+2*f(n-2))%m;
}
int main()
{
    time_t s,e;
    scanf("%d %d",&n,&m);
    s=clock();
    printf("%lld",f(n));
    e=clock();
    printf("\n%f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/



//문제4: 타일채우기(S)-방법3
/*#include<stdio.h>
#include<time.h>
int n,m;
long long int f(int n)
{
    if(n<=1) return 1;
    if(!(n%2)) return (f(n/2)*f(n/2)+2*f(n/2-1)*f(n/2-1))%m;
    return (f(n/2)*f(n/2+1)+2*f(n/2-1)*f(n/2))%m;
}
int main()
{
    time_t s,e;
    scanf("%d %d",&n,&m);
    s=clock();
    printf("%lld",f(n));
    e=clock();
    printf("\n%f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


/*
재귀함수가 시간이 오래 걸리는 이유?
선형일 때는 오래 안 걸리지만, 비선형일 때는 오래 걸린다.
(특히, 중복값이 있을 때 더 오래 걸린다.->메모이제이션도 이때만 효과 있음.)
*/


//문제2> Combination(L)-방법1
/*#include<stdio.h>
#include<time.h>
int DT[310][310];
int cnt;
int f(int n,int k)
{
    cnt++;
    if(k==n) return DT[n][k]=1;
    else if(k==1) return DT[n][k]=n%100009;
    else
    {
        if(DT[n][k]) return DT[n][k];
        else return DT[n][k]=(f(n-1,k)+f(n-1,k-1))%100009;
    }
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    time_t s,e;
    s=clock();
    printf("%d\n",f(n,k));
    e=clock();
    printf("%f %d",(float)(e-s)/CLOCKS_PER_SEC,cnt);
    return 0;
}*/


//문제2> Combination(L)-방법2
/*#include<stdio.h>
#include<time.h>
int DT[310][310];
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    time_t s,e;
    s=clock();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k&&j<=i;j++)
        {
            if(i==j) DT[i][j]=1;
            else if(j==1) DT[i][j]=i;
            else DT[i][j]=(DT[i-1][j-1]+DT[i-1][j])%100009;
        }
    }
    e=clock();
    printf("%d\n",DT[n][k]);
    printf("%f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제2> Combination(L)-방법3
/*#include<stdio.h>
#include<time.h>
int N,K;
long long int cnt;
int f(int n,int k)
{
    cnt++;
    if(k==K) return 1;
    if(n==N) return 0;
    return (f(n+1,k+1)+f(n+1,k))%100009;
}
int main()
{
    int n,k;
    scanf("%d %d",&N,&K);
    time_t s,e;
    s=clock();
    printf("%d\n",f(0,0));
    e=clock();
    printf("%f %lld",(float)(e-s)/CLOCKS_PER_SEC,cnt);
    return 0;
}*/


//문제2> Combination(L)-방법4
/*#include<stdio.h>
#include<time.h>
int DT[310][310];
int N,K;
long long int cnt;
int f(int n,int k)
{
    cnt++;
    if(DT[n][k]) return DT[n][k];
    if(k==K) return DT[n][k]=1;
    if(n==N) return DT[n][k]=0;
    return DT[n][k]=(f(n+1,k+1)+f(n+1,k))%100009;
}
int main()
{
    int n,k;
    scanf("%d %d",&N,&K);
    time_t s,e;
    s=clock();
    printf("%d\n",f(0,0));
    e=clock();
    printf("%f %lld",(float)(e-s)/CLOCKS_PER_SEC,cnt);
    return 0;
}*/


//문제5: Distance of Nodes
/*#include<stdio.h>
int f(int a,int b)
{
    if(a==b) return 0;
    else if(a>b) return f(a/2,b)+1;
    else return f(a,b/2)+1;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",f(a,b));
    return 0;
}*/


//문제6: 영역 구분-방법1
/*#include<stdio.h>
int arr[1<<7][1<<7];
int gray,white;
void f(int a,int b,int n)
{
    int flag=1;
    int i,j;
    for(i=a;i<a+n;i++)
    {
        for(j=b;j<b+n;j++)
        {
            if(arr[a][b]!=arr[i][j]) flag=0;
        }
    }
    if(flag)
    {
        if(arr[a][b]==1) gray++;
        else white++;
        return;
    }
    else
    {
        f(a,b,n/2);
        f(a+n/2,b,n/2);
        f(a,b+n/2,n/2);
        f(a+n/2,b+n/2,n/2);
    }
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
            scanf("%d",&arr[i][j]);
        }
    }
    f(0,0,n);
    printf("%d\n%d",white,gray);
    return 0;
    /*FILE *inf=fopen("in.txt","r");
    FILE *outf=fopen("out.txt","w");
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(inf,"%d",&arr[i][j]);
        }
    }
    f(0,0,n);
    fprintf(outf,"%d\n%d",white,gray);
    return 0;
}*/


//문제6: 영역 구분-방법2
/*#include<stdio.h>
int arr[1<<7][1<<7],n;
int isOne(int a,int b,int s,int v)
{
    for(int i=a;i<a+s;i++)
    {
        for(int j=b;j<b+s;j++)
        {
            if(arr[i][j]!=v) return 0;
        }
    }
    return 1;
}
int f(int a,int b,int s,int v)
{
    if(s==1) return arr[a][b]==v;
    if(isOne(a,b,s,v)) return 1;
    return f(a,b,s/2,v)+f(a+s/2,b,s/2,v)+f(a,b+s/2,s/2,v)+f(a+s/2,b+s/2,s/2,v);
}
int main()
{
    //FILE *in=fopen("in.txt","r");
    //FILE *out=fopen("out.txt","w");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("gray=%d\nwhite=%d\n",f(0,0,n,1),f(0,0,n,0));
    return 0;
}*/


//문제7: 이진 암호화
//문제 범위가 주어지지 않았을 때, 큐를 이용하면 범위에 영향을 끼치지 않는다.
/*#include<stdio.h>
char S[1<<19];
int n;
void f(int k,int s)
{
    int sum=0;
    if(s==1)
    {
        printf("%c",S[k]);
        return;
    }
    for(int i=k;i<k+s;i++)
    {
        //sum=sum+(S[i]-'0');
        sum+=S[i]-'0';
    }
    if(sum==0||sum==s)
    {
        printf("%d",(bool)sum);
    }
    else
    {
        printf("-");
        f(k,s/2);
        f(k+s/2,s/2);
    }
}
int main()
{
    scanf("%d %s",&n,S);
    f(0,n);
    return 0;
}*/


//문제8: 이진 복호화-방법1
/*#include<stdio.h>
#include<queue>
using namespace std;
queue<char> Q;
char S[1<<19],S2[1<<19];
int n;
void f(int k,int s,char v)
{
    if(Q.empty()) return;
    if(v=='-')
    {
        Q.pop();
        f(k,s/2,Q.front());
        Q.pop();
        f(k+s/2,s/2,Q.front());
    }
    else
    {
        for(int i=k;i<k+s;i++)
        {
            S2[i]=v;
        }
    }
}
int main()
{
    scanf("%d %s",&n,S);
    for(int i=0;S[i];i++)
    {
        Q.push(S[i]);
    }
    f(0,n,Q.front());
    printf("%s",S2);
    return 0;
}*/


//문제8: 이진 복호화-방법2
/*#include<stdio.h>
int n,p;
char S[1<<19],S2[1<<19];
void f(int k,int s)
{
    char val=S[p++];
    if(val=='\0') return;
    if(val=='-')
    {
        f(k,s/2);
        f(k+s/2,s/2);
    }
    else
    {
        for(int i=k;i<k+s;i++)
        {
            S2[i]=val;
        }
    }
}
int main()
{
    scanf("%d %s",&n,S);
    f(0,n);
    printf("%s",S2);
}*/


//문제9: Patitioned(분할수)
/*#include<stdio.h>
int a[30],cnt;
int min(int a,int b)
{
    return a>b?b:a;
}
void f(int n,int k)
{
    if(n==0)
    {
        for(int i=0;i<cnt;i++)
        {
            printf("%d ",a[i]);
        }
        puts(""); //printf("\n");
        return;
    }
    for(int i=min(n,k);i>=1;i--)
    {
        a[cnt++]=i;
        f(n-i,i);
        cnt--;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    f(n,n);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a;
    int *pa;
    float b;
    float *pb;
    char str[100];
    char *pc;
    scanf("%d %f %s",&a,&b,str);
    pa=&a;
    pb=&b;
    pc=str; //&str[0]
    printf("a:%d, b:%f, str:%s %d \n",a,b,str,str);
    printf("a주소:%d, b주소:%d, str주소:%d\n",&a,&b,&str);
    printf("pa:%d, pb:%d, pc:%d\n",pa,pb,pc);
    printf("*pa:%d, *pb:%f, *pc:%c\n",*pa,*pb,*pc);
    return 0;
}*/


//문제3: 숙직 선생님-방법1
/*#include<stdio.h>
#include<time.h>
int a,b,able[3],ans=2000;
void back(int next,int cnt)
{
    if(ans<cnt) return;
    if(next>b) return; //fail
    if(b==next) //sucess
    {
        if(cnt<ans)
        {
            ans=cnt;
        }
    }
    //for(int i=0;i<3;i++)
    for(int i=2;i>=0;i--)
    {
        back(next+able[i],cnt+1);
    }
}
int main()
{
    time_t s,e;
    scanf("%d %d",&a,&b);
    for(int i=0;i<3;i++)
    {
        scanf("%d",&able[i]);
    }
    s=clock();
    back(a,0);
    if(ans!=2000) printf("%d\n",ans);
    else printf("-1");
    e=clock();
    printf("%f",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제3: 숙직 선생님-방법2
/*#include<stdio.h>
#include<queue>
#include<time.h>
using namespace std;
queue<int> Q;
int dt[1200];
int main()
{
    int a,b,able[3];
    scanf("%d%d",&a,&b);
    for(int i=0;i<3;i++)
    {
        scanf("%d",&able[i]);
    }
    time_t s,e;
    s=clock();
    Q.push(a);
    while(!Q.empty())
    {
        int val=Q.front();
        if(val==b)
        {
            printf("%d\n",dt[val]);
            e=clock();
            printf("exe time= %f\n",(float)(e-s)/CLOCKS_PER_SEC);
            return 0;
        }
        Q.pop();
        for(int i=0;i<3;i++)
        {
            int tmp=val+able[i];
            if(tmp<=b&&!dt[tmp])
            {
                Q.push(tmp);
                dt[tmp]=dt[val]+1;
            }
        }
    }
    printf("-1\n");
    e=clock();
    printf("exe time= %f\n",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제3: 숙직 선생님-방법3
/*#include<stdio.h>
#include<algorithm>
#include<time.h>
using namespace std;
int a,b,able[3],dt[1200];
int main()
{
    time_t s,e;
    scanf("%d %d",&a,&b);
    for(int i=0;i<3;i++)
    {
        scanf("%d",&able[i]);
    }
    s=clock();
    if(a==b) printf("0\n");
    else
    {
        for(int i=a;i<=b;i++)
        {
            dt[i]=99999;
        }
        dt[a]=0;
        for(int i=a+1;i<=b;i++)
        {
            int tmp=99999;
            for(int k=0;k<3;k++)
            {
                if(i-able[k]>=a)
                {
                    tmp=min(tmp,dt[i-able[k]]+1);
                }
            }
            dt[i]=tmp;
        }
        if(dt[b]!=99999) printf("%d\n",dt[b]);
        else printf("-1\n");
    }
    e=clock();
    printf("exe time= %f\n",(float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}*/


//문제4: 광석 수집-방법1
/*#include<stdio.h>
#define MAX(a,b) (a>=b?a:b)
int n,m,mine[220][220],dt[220][220];
int f(int row,int col)
{
    if(dt[row][col]) return dt[row][col];
    if(row==n&&col==m) return mine[row][col];
    if(row>n||col>m) return 0;
    return dt[row][col]=mine[row][col]+MAX(f(row+1,col),f(row,col+1));
}
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&mine[i][j]);
        }
    }
    printf("%d",f(1,1));
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%d ",dt[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


//문제4: 광석 수집-방법2
/*#include<stdio.h>
#define MAX(a,b) (a>=b?a:b)
int n,m,mine[220][220],dt[220][220];
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&mine[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            dt[i][j]=mine[i][j]+MAX(dt[i-1][j],dt[i][j-1]);
        }
    }
    printf("%d",dt[n][m]);
    return 0;
}*/


//문제5: 0/1 배낭문제-방법1(Backtracking(O(n^2)))
/*#include<stdio.h>
int n,W,i,w[102],v[102];
int max(int a,int b)
{
    return a>b?a:b;
}
int f(int i,int r)
{
    if(i==n+1) return 0;
    else if(r<w[i]) return f(i+1,r);
    else return max(f(i+1,r),f(i+1,r-w[i])+v[i]);
}
int main()
{
    scanf("%d %d",&n,&W);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&w[i],&v[i]);
    }
    printf("%d",f(1,W));
    return 0;
}*/


//문제5: 0/1 배낭문제-방법2(Dynamical Backtracking)
/*#include<stdio.h>
#define max(a,b) (a>=b?a:b)
int DT[102][10002];
int W,n,w[102],v[102];
int f(int i,int r)
{
    if(DT[i][r]!=-1) return DT[i][r];
    if(i==n+1) return DT[i][r]=0;
    else if(r<w[i]) return DT[i][r]=f(i+1,r);
    else return DT[i][r]=max(f(i+1,r),f(i+1,r-w[i])+v[i]);
}
int main()
{
    scanf("%d %d",&n,&W);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&w[i],&v[i]);
    }
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=10000;j++)
        {
            DT[i][j]=-1;
        }
    }
    printf("%d\n",f(1,W));
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            printf("%d ",DT[i][j]);
        }
        puts("");
    }
    return 0;
}*/


//문제5: 0/1 배낭문제-방법3(동적표를 활용한 반복적 방법)
/*#include<stdio.h>
#define max(a,b) (a>=b?a:b)
int DT[102][10002];
int W,n,w[102],v[102];
int main()
{
    scanf("%d %d",&n,&W);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&w[i],&v[i]);
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<=W;j++)
        {
            if(j<w[i]) DT[i][j]=DT[i+1][j];
            else DT[i][j]=max(DT[i+1][j],DT[i+1][j-w[i]]+v[i]);
        }
    }
    printf("%d\n",DT[1][W]);
    return 0;
}*/


//문제6: Maximum Sum(L)-방법1(탐색기반 설계:모든 구간 합을 확인하는 방법(반복문:O(n^3)))
/*#include<stdio.h>
int n,A[110],ans=-99999;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",A+i);
    }
    for(int s=0;s<n;s++)
    {
        for(int e=s;e<n;e++)
        {
            int sum=0;
            for(int k=s;k<=e;k++)
            {
                sum+=A[k];
            }
            ans=ans<sum?sum:ans;
        }
    }
    printf("%d\n",ans);
    return 0;
}*/


//문제6: Maximum Sum(L)-방법2(관계기반 설계)
/*#include<stdio.h>
#define INF 987654321;
int S[100000],n,ans=-INF;
int max(int a,int b)
{
    return a>b?a:b;
}
int f(int k)
{
    if(k==0) return S[0];
    else return max(f(k-1)+S[k],S[k]);
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",S+i);
    }
    for(int i=0;i<n;i++)
    {
        ans=max(ans,f(i));
    }
    printf("%d",ans);
}*/



//문제6: Maximum Sum(L)-방법3(중복 호출 제거:Memoization 적용)
/*#include<stdio.h>
#define INF 987654321
int S[100000],n,ans=-INF;
int DT[100000];
int max(int a,int b)
{
    return a>b?a:b;
}
int f(int k)
{
    if(k==0) return DT[k]=S[0];
    else if(!DT[k]) return DT[k]=max(f(k-1)+S[k],S[k]);
    return DT[k];
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",S+i);
    }
    for(int i=0;i<n;i++)
    {
        ans=max(ans,f(i));
    }
    printf("%d\n",ans);
    return 0;
}*/


//문제7: 거스름돈(L)-방법1(Backtracking #1)
/*#include<stdio.h>
int m,n,coin[10],ans=987654321;
void solve(int mon,int d)
{
    if(mon>m) return;
    printf("%d %d\n",mon,d);
    if(mon==m)
    {
        if(d<ans) ans=d;
        //ans=d<ans?d:ans;
        return;
    }
    for(int i=0;i<n;i++)
    {
        solve(mon+coin[i],d+1);
    }
}
int main()
{
    scanf("%d %d",&m,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",coin+i);
    }
    solve(0,0);
    printf("%d\n",ans);
    return 0;
}*/

//문제7: 거스름돈(L)-방법1(Backtracking #2:return type)
/*#include<stdio.h>
int m,n,coin[10];
int min(int a,int b)
{
    return a<b?a:b;
}
int f(int c)
{
    int ans=987654321;
    if(c==m) return 0;
    for(int i=0;i<n;i++)
    {
        if(c+coin[i]<=m)
        {
            ans=min(ans,f(c+coin[i])+1);
        }
    }
    printf("%d %d\n",c,ans);
    return ans;
}
int main()
{
    scanf("%d %d",&m,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",coin+i);
    }
    printf("%d\n",f(0));
    return 0;
}*/


//문제7: 거스름돈(L)-방법3(Dyanmical Backtracking)
/*#include<stdio.h>
int m,n,coin[10],DT[10001];
int min(int a,int b)
{
    return a>b?b:a;
}
int f(int c)
{
    if(c==m) return DT[c]=0;
    if(DT[c]==0)
    {
        DT[c]=987654321;
        for(int i=0;i<n;i++)
        {
            if(c+coin[i]<=m) DT[c]=min(DT[c],f(c+coin[i])+1);
        }
    }
    return DT[c];
}
int main()
{
    scanf("%d %d",&m,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",coin+i);
    }
    printf("%d\n",f(0));
    return 0;
}*/

//문제7: 거스름돈(L)-방법4(Dynamic Programming)
/*#include<stdio.h>
int DT[10001],coin[10],n,m;
int min(int a,int b)
{
    return a>b?b:a;
}
int f(int c)
{
    for(int i=0;i<n;i++)
    {
        if(coin[i]==c) return 1;
    }
    if(DT[c]==0)
    {
        DT[c]=987654321;
        for(int i=0;i<n;i++)
        {
            if(c-coin[i]>0)
            {
                DT[c]=min(DT[c],f(c-coin[i])+1);
            }
        }
        return DT[c];
    }
}
int main()
{
    scanf("%d %d",&m,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",coin+i);
    }
    printf("%d\n",f(m));
    return 0;
}*/


//문제7: 거스름돈(L)-방법5(동적표를 활용한 반복적 방법(for))
/*#include<stdio.h>
int DT[10001],coin[10],n,m;
int min(int a,int b)
{
    return a>b?b:a;
}
int main()
{
    scanf("%d %d",&m,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",coin+i);
        DT[coin[i]]=1;
    }
    for(int i=1;i<=m;i++)
    {
        if(DT[i]==0)
        {
            DT[i]=987654321;
            for(int j=0;j<n;j++)
            {
                if(i>=coin[j])
                {
                    DT[i]=min(DT[i],DT[i-coin[j]]+1);
                }
            }
        }
    }
    printf("%d\n",DT[m]);
    return 0;
}*/
