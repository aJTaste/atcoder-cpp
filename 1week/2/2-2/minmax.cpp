#include "minmax.h"

//  最大値を返す
int MinMax::max(int n1, int n2, int n3)
{
    int max_num = n1;
    if (n2 > max_num)
    {
        max_num = n2;
    }
    if (n3 > max_num)
    {
        max_num = n3;
    }
    return max_num;
}
//  最小値を返す
int MinMax::min(int n1, int n2, int n3)
{
    return -max(-n1, -n2, -n3);
}
