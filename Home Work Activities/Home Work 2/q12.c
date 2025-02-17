#include <stdio.h>
int main() {

    float costPrice, sellingPrice;

    printf("Enter the cost price : ");
    scanf("%f", &costPrice);
    printf("Enter the selling price : ");
    scanf("%f", &sellingPrice);

    if(costPrice>sellingPrice) {
        printf("Loss");
    } else {
        printf("Profit");
    }

    return 0;
}
