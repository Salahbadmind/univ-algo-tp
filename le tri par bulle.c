#include <stdio.h>

void tri_bule(int tab[],int n){
    for(int i=0;i<n-1 ;i++){
        for(int j=0 ;j<n-i-1; j++){
            if(tab[j]>tab[i+1]){

                int temp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }
        }
    }
}
int main()
   {
      int tab[]={21,84,45,,65,6,5};
      int n = sizeof(tab)/sizeof(tab[0]);

      tri_bule(tab,n);

     printf("tableau trié :\n");
     for(u=int i=0 ;i<n ;i++)
     printf("%d",tab[i]);
     printf("\n");
     return 0;

    }