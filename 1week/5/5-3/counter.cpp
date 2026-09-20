#include "counter.h"

//  コンストラクタ（カウント回数を0で初期化）
Counter::Counter() : m_count(0)
{
}
void Counter::reset()
{
    m_count = 0;
}
void Counter::count()
{
    m_count++;
}
int Counter::getCount()
{
    m_totalCount += m_count;
    return m_count;
}

int Counter::getTotalCount()
{
    return m_totalCount;
}
