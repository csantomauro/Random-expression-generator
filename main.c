#include <stdio.h>
#include <stdlib.h>

int int_rand(int min,int max)
{int numero_casuale;
 int differenza;
 differenza=(max-min)+1;
 numero_casuale=rand()%differenza;
 numero_casuale=numero_casuale+min;
 return numero_casuale;

};

int main()
{
    int i,x=0,n,y,j,o,s,t,d,m,tot=0;
    FILE *fd;
     fd=fopen("result.txt", "w");
  if( fd==NULL ) {
    printf("Errore in apertura del file");
    exit(1);
  }
fprintf(fd,"Student ID:1756141\n");
    printf("Choose a number \n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        y=int_rand(1,4);
        x=int_rand(0,100);
         printf("%d", x);
         fprintf(fd,"%d", x);
            for(j=0;j<y;j++){
                o=int_rand(0,3);
                if(j>0)x=tot;

                switch (o){
              case 0: // sum
                  s=int_rand(0,100);
                tot=x+s;
                printf("+%d",s);
                fprintf(fd,"+%d",s);
                break;
              case 1: // subtraction
                  t=int_rand(0,100);
                tot=x-t;
                printf("-%d", t);
                fprintf(fd,"-%d",t);
                break;
              case 2: // multiplication
                  m=int_rand(0,100);
                tot=x*m;
                printf("*%d", m);
                fprintf(fd,"*%d",m);
                break;
              case 3: // division
                  d=int_rand(0,100);
                tot=x/d;
                printf("/%d", d);
                fprintf(fd,"/%d",d);
                break;}
            }
            printf("=%d", tot);
            fprintf(fd,"=%d",tot);
            tot=0;
            printf("\n");
            fprintf(fd,"\n");
            }

fclose(fd);

}
