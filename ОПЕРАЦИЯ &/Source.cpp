/* контроль адресов */
#include <iostream>
int main()
{
    int pooh = 2, bah = 5;
    std::cout << " ? main( ), pooh = " << pooh << " ? &pooh = " << &pooh << std::endl;
    std::cout << "B main( ), bah = " << bah << " ? &bah = " << &bah << std::endl;
    mikado(pooh);
}

void mikado(int bah)
{
    int pooh = 10;
    std::cout << "B mikado( ), pooh = " << pooh << " ? &pooh = " << &pooh << std::endl;
    std::cout << " ? mikado( ), bah = " << bah << " ? &bah = " << &bah << std::endl;
}