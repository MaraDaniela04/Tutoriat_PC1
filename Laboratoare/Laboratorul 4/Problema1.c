#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct{
  int nr_legitimatie;
  float nota_mate,nota_info,nota_bac,medie;
  char nume[20],admis, buget;
}candidat;

int main()
{    
  int n,nr=0,a,i,j;
  candidat c[101],aux,x;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d %f %f %f %s", &c[i].nr_legitimatie, &c[i].nota_mate, &c[i].nota_info ,&c[i].nota_bac, c[i].nume);
  
  for(i=0;i<n;i++)
  {   
    c[i].medie=0.8*((c[i].nota_mate+c[i].nota_info)/2)+0.2*c[i].nota_bac;
    if (c[i].medie>=5.0)
      c[i].admis='Y';
    else 
      c[i].admis='N';
    if (c[i].admis=='Y')
      nr++;
  }
  
  a=floor(3.0*nr/4.0);
  for(i=0;i<n-1;i++)
      for(j=i+1;j<=n-1;j++)
        if(c[i].medie<c[j].medie)
        {
          x=c[i];
          c[i]=c[j];
          c[j]=x;
        }
  
  for(i=0;i<a;i++)
      c[i].buget='Y';
  for(i=a;i<nr;i++)
      c[i].buget='N';
  for(i=nr;i<n;i++)
      c[i].buget='-';

  for(i=0;i<nr-1;i++)
  for(j=i+1;j<=nr-1;j++)
    if(strcmp(c[i].nume,c[j].nume)>0)
     {
         aux=c[i];
         c[i]=c[j];
         c[j]=aux;
     }
  for(i=0;i<n;i++)
    printf("%d %.2f %.2f %.2f %.2f %s %c %c\n",
            c[i].nr_legitimatie, c[i].nota_mate, c[i].nota_info, c[i].nota_bac, c[i].medie, c[i].nume, c[i].admis, c[i].buget);

    return 0;
}
