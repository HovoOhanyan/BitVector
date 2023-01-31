#include <iostream>
#include "bitvector.h"

Bitvector::Bitvector(short size)
{
    m_size = ((size - 1) / 64) + 1;
    
    m_arr = new long[m_size];
}

short Bitvector::get_size() const
{
    return m_size;
}

long* Bitvector::get_arr() const
{
    return m_arr;
}
void Bitvector::set(short index)
{
    if (index >= (m_size * 64)) {
        std::cout << "Error" << std::endl;
        return ;
    }

    m_index = index / 64;

    if (index < 64) {
        *(m_arr + m_index) = (1 << index) ^ *(m_arr + m_index);
    }
    else {
        *(m_arr + m_index) = (1 << (index - (m_index * 64))) ^ *(m_arr + m_index);    
    }
}

void Bitvector::reset(short index) 
{
    m_index = index / 64;

    if (index >= (m_size * 64)) {
        std::cout << "Error" << std::endl;
        return;
    }
    
    if (index > 64) {
        *(m_arr + m_index) = *(m_arr + m_index) & (~(1 << index - m_index * 64));
    }
    else {
        *(m_arr + m_index) = *(m_arr + m_index) & (~(1 << index));
    }
}
