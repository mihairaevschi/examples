#include <stdio.h>
int v[10],n;
int max(int i, int j){
   int a, b, m;
   if (i==j) return v[i];
   else {
        m = (i+j)/2;
        a = max(i, m);
        b = max(m+1, j);
        if  (a>b) return a;
        else return b;
   }
}
int main()
{
    printf("N= ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]);
    }
    printf("Max = %d", max(1,n));
    return 0;
}