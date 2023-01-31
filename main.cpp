#include <iostream>
#include "bitvector.h"

int main()
{
    Bitvector vec(4);

    std::cout << vec.get_size() << " - Size of your array";

    std::cout << std::endl;

    for (int i = 0; i < vec.get_size(); ++i)
    {
        std::cout << *(vec.get_arr() + i)  << " - " <<  i + 1 << std::endl;
    }

    vec.set(3);
    vec.set(2);

    std::cout << *(vec.get_arr() + 0) << " - number " <<  std::endl; 

    vec.reset(3);

    std::cout << *(vec.get_arr() + 0) << " - number " <<  std::endl;
}