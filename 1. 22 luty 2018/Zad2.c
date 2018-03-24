#include <stdio.h>
#include <stdlib.h>
 
struct trojkat {
    float a,b,c;
};
 
void zad7_2_2(struct trojkat troj1, struct trojkat *troj2) {
    *troj2 = troj1;
}
 
int main()
{
    struct trojkat tr;
    tr.a = 3;
    tr.b = 4;
    tr.c = 5;
 
    struct trojkat *tr2 = malloc(sizeof(struct trojkat));
 
    zad7_2_2(tr,tr2);

    //Wypisanie nowej struktury (po przepisaniu wartoœci)
    printf("\n\n\n%.0f,%.0f,%.0f\n\n",tr2->a,tr2->b,tr2->c);
    return 0;
}