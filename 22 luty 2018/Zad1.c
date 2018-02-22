#include <stdio.h>
 
struct trojkat {
    float a,b,c;
};
 
float zad7_2_1(struct trojkat tr) {
    return tr.a + tr.b + tr.c;
}
 
int main()
{
    struct trojkat tr;
    tr.a = 3;
    tr.b = 4;
    tr.c = 5;
    printf("\n%f\n",zad7_2_1(tr));
    return 0;
}