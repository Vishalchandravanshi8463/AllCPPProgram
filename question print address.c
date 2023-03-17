#include<stdio.h>
struct address
{
    int house;
    int block;
    char city[100];
    char state[100];

};
void prinadd(struct address add);
int main()
{
    struct address adds[5];
    printf("enter the information of people\n");
    printf("house,block,city,state\n");
    scanf("%d",&adds[0].house);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);
    printf("enter srcond person info  **************           \n");
    
     scanf("%d",&adds[1].house);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);
    printf("enter third person info  **************           \n");
     scanf("%d",&adds[2].house);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);
    printf("enter fourth person info  **************           \n");
     scanf("%d",&adds[3].house);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);
    printf("enter fifth person info  **************           \n");
     scanf("%d",&adds[4].house);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);

    printadd(adds[0]);
    printadd(adds[1]);
    printadd(adds[2]);
    printadd(adds[3]);
    printadd(adds[4]);
    return 0;
}
void prinadd(struct address add)
{
    printf("address is : %d,%d,%s,%s\n",add.house,add.block,add.city,add.state);
}