#include <iostream>
int cout = 30;
namespace mynamespace
{
    int cout = 5;
} // namespace
int main()
{
    int cout = 10;
    ::cout = 20;
    // 另一個cout
    mynamespace::cout = 15;
    //          main                         mynamespace        全域
    std::cout << cout << "  " << mynamespace::cout << " " << ::cout << std::endl;

    return 0;
}