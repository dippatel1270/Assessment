#include<stdio.h>
int main()
{
    int n1=180,n2=100,n3=120,n4=50;
    int a=0,b=0,c=0,d=0;
    int e=0,f=0,g=0,h=0;
    int choise,q,i,sum;

    up :

    printf("\n 1. Pizza         Price= %d Rs/pcs ",n1);
    printf("\n 2. Burgar        Price= %d Rs/pcs ",n2);
    printf("\n 3. Dosa          Price= %d Rs/pcs ",n3);
    printf("\n 4. Idli          Price= %d Rs/pcs ",n4);

    printf("\n Please enter your choise...  : ");
    scanf("%d",&choise);

     switch(choise)
    {
        case 1:
        printf("\n You have selected Pizza .");
        printf("\n Enter the quntity : ");
        scanf("%d",&q);
        a = q * 180;
        printf("\n Amount : %d ",a);
        e = e + a;

        break;
        case 2:
        printf("\n You have selected Burger ");
        printf("\n Enter the quntity : ");
        scanf("%d",&q);
        b = q * 100;
        printf("\n Amount : %d ",b);
        f = f + b;
        
        break;
        case 3:
        printf("\n You have selected Dosa ");
        printf("\n Enter the quntity : ");
        scanf("%d",&q);
        c = q * 120;
        printf("\n Amount : %d ",c);
        g = g + c;
        
        break;
        case 4:
        printf("\n You have selected Idli ");
        printf("\n Enter the quntity : ");
        scanf("%d",&q);
        d = q * 50;
        printf("\n Amount : %d ",d);
        h = h + d;
        
        break;
    }

    printf("\n Do you want place more order ? Y & N :");
    scanf(" %c",&choise);

    switch(choise)
    {
        case 'y' :
        goto up;
        break;
        case 'N' :
        goto down;
    }
    down :

    sum = e + f + g + h;
    
    printf("\n Total amount = %d",sum);

    return 0;
}