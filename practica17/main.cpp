#include <iostream>
#include "array.h"
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int d;
    int f;
    int g;
    int h;
    int e[] = {a,b,c,d};
    int i[] = {f,g,h};
    array<int> ee(e,4);
    array<int> ef(i,3);
    array<int> ff = ee + ef;

    return 0;
}
