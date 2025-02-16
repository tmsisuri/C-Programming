#include <stdio.h>
struct laptop {
    int id;
    char model[20];
    int price;
};

int main() {
    struct laptop xps, ins;

    printf("enter first laptop details\n");
    printf("Enter id : ");
    scanf("%d",&xps.id);
    printf("Enter model : ");
    scanf("%s",xps.model);
    printf("Enter price : ");
    scanf("%d",&xps.price);

    printf("1st laptop id : %d , model : %s , price : %d \n",xps.id, xps.model,xps.price);

    printf("enter second laptop details\n");
    printf("Enter id : ");
    scanf("%d",&ins.id);
    printf("Enter model : ");
    scanf("%s",ins.model);
    printf("Enter price : ");
    scanf("%d",&ins.price);

    printf("2nd laptop id : %d , model : %s , price : %d ",ins.id, ins.model,ins.price);
    return 0;
}
