#include <stdio.h>
#define size 100

struct myGoodsRec
{
    int ID;
    char name[20];
    char type;
    float cost;
    float tax;
    float netPrice;
};
typedef struct myGoodsRec Goods;
Goods myGoods[size];

void findTax(Goods myGoods[], int count)
{
    int i = 0;
    while (i < count)
    {
        if (myGoods[i].type == 'A')
        {
            myGoods[i].tax = myGoods[i].cost * (0.1);
        }
        else if (myGoods[i].type == 'B')
        {
            myGoods[i].tax = myGoods[i].cost * (0.15);
        }
        else if (myGoods[i].type == 'C')
        {
            myGoods[i].tax = myGoods[i].cost * (0.2);
        }
        else if (myGoods[i].type == 'D')
        {
            myGoods[i].tax = myGoods[i].cost * (0.4);
        }
        else 
        {
            myGoods[i].tax = 0.0;
        }
        
        myGoods[i].netPrice = myGoods[i].cost + myGoods[i].tax;
        i++;
    }
}

int main()
{
    int count = 0;
    FILE *infile;
    FILE *outfile;

    if ((infile = fopen("Goods.txt", "r")) == NULL)
        return printf("ERROR: FILE NOT FOUND\n");

    while (count < size && 
           fscanf(infile, "%d %s %s %f", 
                   &myGoods[count].ID, myGoods[count].name, &myGoods[count].type, &myGoods[count].cost) == 4)
    {
        count++; 
    }

    findTax(myGoods, count); 
    
    fclose(infile);
    
    outfile = fopen("Report6809681460.txt", "w");
    
    if(outfile != NULL){
        fprintf(outfile, "%-5s %-15s %-5s %10s %10s %12s\n", 
                "ID", "Name", "Type", "Cost", "Tax", "NetPrice");

        int i = 0;
        while (i < count)
        {
            fprintf(outfile, "%-5d %-15s %-5c %10.2f %10.2f %12.2f\n", 
                    myGoods[i].ID, myGoods[i].name, myGoods[i].type, 
                    myGoods[i].cost, myGoods[i].tax, myGoods[i].netPrice); 
            i++;
        }
        fclose(outfile);
    }
    
    return 0;
}