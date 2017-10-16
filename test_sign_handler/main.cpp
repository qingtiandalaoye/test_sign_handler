#include <iostream>
#include <cstring>
#include <csignal>


void sign_handler(int sig)
{
    ////recv the 'control+c' key.
    if (sig == SIGINT)
    {
        std::cout << "world 1!" << std::endl;
    }

    ////recv the 'kill $pid'
    if (sig == SIGTERM)
    {
        std::cout << "world 2!" << std::endl;
    }
}


int main(int argc, char *argv[])
{

    signal(SIGINT, sign_handler);
    signal(SIGTERM, sign_handler);

    std::cout << "hello" << std::endl;
    system("pause");
    std::cin.get();
    std::cin.get();
    return 0;
}
