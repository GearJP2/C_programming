#include <stdio.h>

void findTax(struct myGoodRec a){

}

struct myGoodsRec 
{
    int ID;
    char name[20];
    char type;
    float cost;
    float tax;
    float netPrice;
};

int main() {
    typedef struct myGoodRec Goods;
    Goods myGoods[100];
}