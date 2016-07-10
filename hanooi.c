#include <stdio.h>
void th(int,char,char,char);
void th(int n, char a, char b, char c)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from  %c to  %c",a,c);
        return;
    }
    th(n-1,a,b,c);
    printf("\n Move disk %d from %c to %c",n,a,c);
    th(n-1,a,b,c);
}
 int main()
{
    int n = 3; 
    th(n,'X','Y','Z'); 
    return 0;
}
