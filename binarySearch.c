#include <stdio.h>
int v[100], n, nr;
void cautare(int i, int j)
 {
   int m = (i+j)/2;
   if (nr==v[m]) {
       printf("Gasit, indice = %d", m);
   }
   else 
     if (i<j)
       if  (nr<v[m])
         cautare(i, m-1);
       else cautare(m+1, j);
     else printf("Nu a fost gasit.");
 }
int main()
{
    printf("N= ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("N[%d] = ", i);
        scanf("%d", &v[i]);
    }
    printf("Nr = ");
    scanf("%d", &nr);
    cautare(0,n);
    return 0;
}
