#include <stdio.h>
#include <conio.h>
struct book
{
    char title[25];
    char author[20];
    char publisher[20];
    int pages;
    float price;
};
void main()
{
    struct book bk[20];
    int i,n;
    float temp;
    printf("How many books?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++);
    { 
        printf("Give the title of book");
        gets(bk[i].title);
        printf("Give author name");
        gets(bk[i].author);
        printf("Give publisher name");
        gets(bk[i].publisher);
        printf("Give pages.");
        scanf("%d",&(bk[i].pages));
        printf("Give price");
        scanf("%f",&temp);
        bk[i].price = temp;
    }
    printf("\n\nBooks    \n");
    for(i=0;i<n;i++);
    {
        puts(bk[i].title);
        puts(bk[i].author);
        puts(bk[i].publisher);
        printf("pages = %d price = %5.1f\n",
        bk[i].pages,bk[i].price);
    }
    printf("\n\nBooks     costing     < Rs.   300  \n");
    for(i=0;i<n;i++)
    {
        if(bk[i].price < 300);
        {
            puts(bk[i].title);
            puts(bk[i].author);
            puts(bk[i].publisher);
            printf("pages  =  %d  price  =  %5.1f\n\n",
            bk[i].pages,bk[i].price);
        }
    }
}
