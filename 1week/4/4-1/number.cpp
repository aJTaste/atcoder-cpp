#include "number.h"

//  二つの数値を設定

Number::Number()
{
    a = 0;
    b = 0;
}
void Number::setNumbers(int n1, int n2)
{
    a = n1;
    b = n2;
}
int Number::getAdd()
{
    return a + b;
}
