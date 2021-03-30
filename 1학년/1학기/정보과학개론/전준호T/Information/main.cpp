/*#include<stdio.h>
int main()
{
    printf("Hello World!");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    float f;
    scanf("%f",&f);
    printf("%f",f);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t<=12)
        printf("Good Morning");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t<=12)
        printf("Good Morning");
    else
        printf("Good afternoon");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t<=12)
        printf("Good Morning");
    else if(t<=18)
        printf("Good afternoon");
    else if(t<=22)
        printf("Good evening");
    else
        printf("Good night");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a=1;
    switch(a)
    {
    case 1:
        printf("1");
    case 2:
        printf("2");
    default:
        printf("3");
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a=1;
    switch(a)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a/10)
    {
    case 10:
    case 9:
        printf("A"); break;
    case 8:
        printf("B"); break;
    case 7:
        printf("C"); break;
    default:
        printf("D");
    }
    return 0;
}*/



//C프로그래밍과제모음 #2

/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a%2==0) printf("%d\n",a);
    if(b%2==0) printf("%d\n",b);
    if(c%2==0) printf("%d",c);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0) printf("plus\n");
    else printf("minus\n");
    if(n%2==0) printf("even");
    else printf("odd");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=90) printf("A");
    else if(n>=70) printf("B");
    else if(n>=40) printf("C");
    else printf("D");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int y,m,d;
    scanf("%d %d %d",&y,&m,&d);
    if((y-m+d)%10==0) printf("대박");
    else printf("그럭저럭");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    if(k==1||k==2) printf("%d",2012-(1900+n/10000)+1);
    else printf("%d",2012-(2000+n/10000)+1);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if((y%4==0&&y%100!=0)||y%400==0) printf("yes");
    else printf("no");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a-b>=0) printf("%d",a-b);
    else printf("%d",b-a);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=10) printf("정상");
    else if(n<=20) printf("과체중");
    else printf("비만");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=170) printf("CRASH %d",a);
    else if(b<=170) printf("CRASH %d",b);
    else if(c<=170) printf("CRASH %d",c);
    else printf("PASS");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
    case 3:
    case 4:
    case 5: printf("spring"); break;
    case 6:
    case 7:
    case 8: printf("summer"); break;
    case 9:
    case 10:
    case 11: printf("fall"); break;
    default: printf("winter");
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n/10)
    {
    case 10:
    case 9: printf("A"); break;
    case 8:
    case 7: printf("B"); break;
    case 6:
    case 5: printf("C"); break;
    default: printf("F");
    }
    return 0;
}*/


/*#include<stdio.h>

int main()

{

    int n;

    scanf("%d",&n);

    int i,k=0;

    for(i=2;i<n;i++)

    {

        if(n%i==0) k++;

    }

    if(k==0) printf("prime");

    else printf("not prime");

    return 0;

}*/





/*#include<stdio.h>

int main()

{

    int n;

    scanf("%d",&n);

    int i,j,k,sum=0;

    for(i=2;i<=n;i++)

    {

        k=0;

        for(j=2;j<i;j++)

        {

            if(i%j==0) k++;

        }

        if(k==0) sum+=i;

    }

    printf("%d",sum);

    return 0;

}*/





/*#include<stdio.h>

int main()

{

    int n;

    scanf("%d",&n);

    printf("%d\n",n);

    int k=0;

    while(1)

    {

        if(n%2==0)

        {

            n/=2;

            printf("%d\n",n);

            k++;

        }

        else if(n%2==1&&n!=1)

        {

            n=n*3+1;

            printf("%d\n",n);

            k++;

        }

        else break;

    }

    printf("%d",k);

    return 0;

}*/





/*#include<stdio.h>

int main()

{

    char arr[30];

    scanf("%s",arr);

    int i;

    for(i=0;arr[i];i++)

    {

        if(arr[i]=='A') printf("0");

        else if(arr[i]=='B') printf("1");

        else if(arr[i]=='C') printf("2");

        else if(arr[i]=='D') printf("3");

        else if(arr[i]=='E') printf("4");

        else if(arr[i]=='F') printf("5");

        else if(arr[i]=='G') printf("6");

        else if(arr[i]=='H') printf("7");

        else printf("%c",arr[i]);

    }

    return 0;

}*/





/*#include<stdio.h>

int main()

{

    int n;

    scanf("%d",&n);

    int i,j;

    for(i=0;i<n;i++)

    {

        for(j=0;j<i;j++)

        {

            printf(" ");

        }

        printf("**\n");

    }

    return 0;

}*/





/*#include<stdio.h>
int main()
{
    int a[5];
    int i;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int x;
    int j,k;
    for(j=0;j<=3;j++)
    {
        x=a[0];
        for(k=0;k<4;k++)
        {
            a[k]=a[k+1];
            printf("%d ",a[k]);
        }
        a[4]=x;
        printf("%d\n",a[4]);
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    char arr[40];
    scanf("%s",arr);
    int i;
    for(i=0;i<40;i++)
    {
        if(arr[i]!='\0')
        {
            if('a'<=arr[i]<='z')
            {
                printf("%c",arr[i]-32);
            }
            else
            {
                printf("%c",arr[i]);
            }
        }
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[100][100];
    int n;
    scanf("%d",&n);
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=k;
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
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
    int a[100][100];
    int n;
    scanf("%d",&n);
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=k;
                k++;
            }
        }
        else
        {
            for(j=n-1;j>=0;j--)
            {
                a[i][j]=k;
                k++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
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
    int a[100][100]={0};
    int n,m;
    scanf("%d %d",&n,&m);
    int i,j,k=1;
    for(i=0;i<=n+1;i++)
    {
        a[i][0]=-1;
        a[i][m+1]=-1;
    }
    for(j=0;j<=m+1;j++)
    {
        a[0][j]=-1;
        a[n+1][j]=-1;
    }
    i=1;
    j=1;
    a[1][1]=k;
    k++;
    while(1)
    {
        while(a[i][j+1]==0)
        {
            a[i][j+1]=k;
            k++;
            j++;
        }
        if(k>m*n) break;
        while(a[i+1][j]==0)
        {
            a[i+1][j]=k;
            k++;
            i++;
        }
        if(k>m*n) break;
        while(a[i][j-1]==0)
        {
            a[i][j-1]=k;
            k++;
            j--;
        }
        if(k>m*n) break;
        while(a[i-1][j]==0)
        {
            a[i-1][j]=k;
            k++;
            i--;
        }
        if(k>m*n) break;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}*/


/*#include<stdio.h>
int main()
{
    int a[10][10];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i][0]);
    }
    int j;
    for(j=1;j<n;j++)
    {
        for(i=j;i<n;i++)
        {
            a[i][j]=a[i][j-1]-a[i-1][j-1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
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
    int n;
    scanf("%d",&n);
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}*/


/*#include<stdio.h>
int main()
{
    int a[100][100];
    int n;
    scanf("%d",&n);
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=k;
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
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
    int a[100][100];
    int n;
    scanf("%d",&n);
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=k++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[100][100];
    int n;
    scanf("%d",&n);
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=k++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
void f()
{
    printf("hello\n");
    return;
}
int main()
{
    f();
    return 0;
}*/


/*#include<stdio.h>
int n;
void f(int);
int main()
{
    scanf("%d",&n);
    f(n);
}
void f(int x)
{
    int i,j=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0) j++;
    }
    if(j==0)
    {
        printf("prime");
    }
    else
    {
        printf("composite");
    }
    return;
}*/


/*#include<stdio.h>
long long int n;
long long int abs(long long int);
int main()
{
    scanf("%lld",&n);
    printf("%lld\n",abs(n));
}
long long int abs(long long int x)
{
    if(x>=0) x=x;
    else x=-x;
    return x;
}*/


/*#include<stdio.h>
long long int n;
long long int f(long long int);
int main()
{
    scanf("%lld",&n);
    printf("%lld",f(n));
}
long long int f(long long int x)
{
    long long int n,m;
    n=x%10;
    m=x/10;
    if(m==0)
    {
        return n;
    }
    else
    {
        printf("%lld",n);
        return f(m);
    }
}*/


/*#include<stdio.h>
int n,a,b,d[1010];
long long int subsetsum(int,int);
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&a,&b);
    printf("%lld\n",subsetsum(a,b));
}
long long int subsetsum(int x,int y)
{
    if(x<y)
    {
        return d[x]+subsetsum(x+1,y);
    }
    else
    {
        return d[x];
    }
}*/


/*#include<stdio.h>
int n,a,b,d[1010];
int maxi(int,int);
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&a,&b);
    printf("%d\n",maxi(a,b));
}
int maxi(int x,int y)
{
    if(x!=y)
    {
        if(d[x]>=d[y])
        {
            return maxi(x,y-1);
        }
        else
        {
            return maxi(x+1,y);
        }
    }
    else
    {
        return x;
    }
}*/


/*#include<stdio.h>
int n,k,d[1010];
int upper_bound(int);
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d",&k);
    printf("%d\n",upper_bound(k));
}
int upper_bound(int x)
{
    int i=1;
    while(i<=n)
    {
        if(x<d[i])
        {
            return i;
        }
        i++;
    }
    return n+1;
}*/


//달팽이
/*#include<stdio.h>
int main()
{
    int a[100][100];
    int n,m;
    scanf("%d %d",&n,&m);
    int xl=0,xr=m-1,yu=1,yd=n-1;
    int x=0,y=0;
    int k=1;
    int i,j;
    while(k<=n*m)
    {
        if(k<=n*m)
        {
            for(i=xl;i<=xr;i++)
            {
                a[y][i]=k++;
            }
            x=xr;
            xr--;
        }
        if(k<=n*m)
        {
            for(i=yu;i<=yd;i++)
            {
                a[i][x]=k++;
            }
            y=yd;
            yd--;
        }
        if(k<=n*m)
        {
            for(i=xr;i>=xl;i--)
            {
                a[y][i]=k++;
            }
            x=xl;
            xl++;
        }
        if(k<=n*m)
        {
            for(i=yd;i>=yu;i--)
            {
                a[i][x]=k++;
            }
            y=yu;
            yu--;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


//달팽이 거꾸로
/*#include<stdio.h>
int main()
{
    int a[100][100];
    int n,m;
    scanf("%d %d",&n,&m);
    int xl=0,xr=m-1,yu=0,yd=n-2;
    int x=m-1,y=n-1;
    int k=1;
    int i,j;
    while(k<=n*m)
    {
        if(k<=n*m)
        {
            for(i=xr;i>=xl;i--)
            {
                a[y][i]=k++;
            }
            x=xl;
            xl++;
        }
        if(k<=n*m)
        {
            for(i=yd;i>=yu;i--)
            {
                a[i][x]=k++;
            }
            y=yu;
            yu++;
        }
        if(k<=n*m)
        {
            for(i=xl;i<=xr;i++)
            {
                a[y][i]=k++;
            }
            x=xr;
            xr--;
        }
        if(k<=n*m)
        {
            for(i=yu;i<=yd;i++)
            {
                a[i][x]=k++;
            }
            y=yd;
            yd--;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
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
    int n;
    scanf("%d",&n);
    int i,k=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0) k++;
    }
    if(k==0) printf("prime");
    else printf("not prime");
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int i,j,k=0;
    for(i=2;i<=n;i++)
    {
        k=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0) k++;
        }
        if(k==0) sum+=i;
    }
    printf("%d",sum);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    int k=0;
    while(1)
    {
        if(n==1)
        {
            break;
        }
        else if(n%2==0)
        {
            n/=2;
            k++;
            printf("%d\n",n);
        }
        else
        {
            n=3*n+1;
            k++;
            printf("%d\n",n);
        }
    }
    printf("%d",k);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    char a[31];
    scanf("%s",a);
    int i,j;
    for(i=0;a[i];i++)
    {
        for(j=65;j<=72;j++)
        {
            if(a[i]==j)
            {
                a[i]=j-17;
            }
        }
    }
    printf("%s",a);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        printf("**\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int x;
    for(i=0;i<4;i++)
    {
        x=a[0];
        for(j=1;j<5;j++)
        {
            a[j-1]=a[j];
            printf("%d ",a[j-1]);
        }
        a[4]=x;
        printf("%d\n",a[4]);
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    char a[41];
    scanf("%s",a);
    int i;
    for(i=0;a[i];i++)
    {
        if(97<=a[i]&&a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100][100];
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=k++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
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
    int n;
    scanf("%d",&n);
    int a[100][100];
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=k++;
            }
        }
        if(i%2==1)
        {
            for(j=n-1;j>=0;j--)
            {
                a[i][j]=k++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
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
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100][100];
    int xl=0,xr=m-1,yu=1,yd=n-1;
    int x=0,y=0;
    int i,j,k=1;
    while(k<=n*m)
    {
        if(k<=n*m)
        {
            for(i=xl;i<=xr;i++)
            {
                a[y][i]=k++;
            }
            x=xr;
            xr--;
        }
        if(k<=n*m)
        {
            for(i=yu;i<=yd;i++)
            {
                a[i][x]=k++;
            }
            y=yd;
            yd--;
        }
        if(k<=n*m)
        {
            for(i=xr;i>=xl;i--)
            {
                a[y][i]=k++;
            }
            x=xl;
            xl++;
        }
        if(k<=n*m)
        {
            for(i=yd;i>=yu;i--)
            {
                a[i][x]=k++;
            }
            y=yu;
            yu++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
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
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100][100];
    int xl=0,xr=m-1,yu=0,yd=n-2;
    int x=m-1,y=n-1;
    int i,j,k=1;
    while(k<=n*m)
    {
        if(k<=n*m)
        {
            for(i=xr;i>=xl;i--)
            {
                a[y][i]=k++;
            }
            x=xl;
            xl++;
        }
        if(k<=n*m)
        {
            for(i=yd;i>=yu;i--)
            {
                a[i][x]=k++;
            }
            y=yu;
            yu++;
        }
        if(k<=n*m)
        {
            for(i=xl;i<=xr;i++)
            {
                a[y][i]=k++;
            }
            x=xr;
            xr--;
        }
        if(k<=n*m)
        {
            for(i=yu;i<=yd;i++)
            {
                a[i][x]=k++;
            }
            y=yd;
            yd--;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
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
    int n;
    scanf("%d",&n);
    int a[10][10];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i][0]);
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            a[i][j]=a[i][j-1]-a[i-1][j-1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
void f();
int main()
{
    f();
    return 0;
}
void f()
{
    printf("hello");
    return;
}*/


/*#include<stdio.h>
int n;
void f(int);
int main()
{
    scanf("%d",&n);
    f(n);
    return 0;
}
void f(int x)
{
    int i,k=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            k++;
        }
    }
    if(k==0)
    {
        printf("prime");
    }
    else
    {
        printf("composite");
    }
    return;
}*/


/*#include<stdio.h>
long long int n;
long long int abs(long long int);
int main()
{
    scanf("%lld",&n);
    printf("%lld\n",abs(n));
    return 0;
}
long long int abs(long long int x)
{
    if(x<0) x=-x;
    return x;
}*/


/*#include<stdio.h>
long long int n;
long long int f(long long int);
int main()
{
    scanf("%lld",&n);
    printf("%lld\n",f(n));
}
long long int f(long long int x)
{
    if(x/10==0)
    {
        return x;
    }
    else
    {
        printf("%lld",x%10);
        return f(x/10);
    }
}*/


/*#include<stdio.h>
int n,a,b,d[1010];
long long int subsetsum(int,int);
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&a,&b);
    printf("%lld\n",subsetsum(a,b));
}
long long int subsetsum(int x,int y)
{
    long long int sum=0;
    int i;
    for(i=x;i<=y;i++)
    {
        sum+=d[i];
    }
    return sum;
}*/


/*#include<stdio.h>
int n,a,b,d[1010];
int maxi(int,int);
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&a,&b);
    printf("%d\n",maxi(a,b));
}
int maxi(int x,int y)
{
    int k=x;
    int i;
    for(i=x;i<=y;i++)
    {
        if(d[i]>d[k]) k=i;
    }
    return k;
}*/


#include<stdio.h>
int n,k,d[1010];
int upper_bound(int);
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d",&k);
    printf("%d\n",upper_bound(k));
}
int upper_bound(int x)
{
    int k;
    int i;
    for(i=1;i<=n;i++)
    {
        if(d[i]>x)
        {
            k=i;
            break;
        }
    }
    if(d[n]<=x)
    {
        k=n+1;
    }
    return k;
}
