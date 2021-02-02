#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,r,c;
    scanf("%d",&n);
    for(r=1;r<2*n;r++){
        k=n;
        if(r<=n){
            for(c=1;c<2*n;c++){
                printf("%d ",k);
                if(r>c)
                    k=k-1;
                if(2*n - r <= c)
                    k=k+1;
            }
            printf("\n");
        }
        else{
            for(c=1;c<2*n;c++){
                printf("%d ",k);
                if(2*n-r>c)
                    k=k-1;
                if(r<=c && c<2*n)
                    k=k+1;
            }
            printf("\n");
        }

    }
}
