#include <stdio.h>

int main() {
    double costPrice, sellingPrice;
    double profit, loss;
    double profitPercentage, lossPercentage;

    printf("Enter Cost Price: ");
    scanf("%lf", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%lf", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100.0;
        
        printf("\nProfit %.0f%%\n", profitPercentage); 

    } else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100.0;
        
        printf("\nLoss %.0f%%\n", lossPercentage);

    } else {
        printf("\nNo Profit No Loss\n");
    }

    return 0; 
}
