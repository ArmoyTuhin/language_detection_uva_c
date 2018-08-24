#include<stdio.h>
int main()
{

    char e[]={'HELLO'} ,  f[]={'BONJOUR'},  s[]={'HOLA'}  , g[]={'HALLO'}  i[]={'CIAO'} , r=['ZDRAVSTVUJTE'] ;
    char str[]={} ;
    int r,m,n,o,p,q ;
    while(scanf("%s",str)!=EOF)
    {
        r=strcmp(str,e);
        m=strcmp(str,f);
        n=strcmp(str,s);
        o=strcmp(str,g);
        p=strcmp(str,i);
        q=strcmp(str,r);

        if(r==0)
            printf("ENGLISH\n");
           if(m==0)
            printf("FRENCH\n");
             if(n==0)
            printf("SPANISH\n");
             if(o==0)
            printf("GERMANY\n");
             if(p==0)
            printf("ITALIAN\n");
             if(q==0)
            printf("RUSSIAN\n");
    }


    }






}
