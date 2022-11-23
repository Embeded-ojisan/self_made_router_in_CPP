

int main(int argc, char *argv[])
{
    if(argc <= 1)
    {
        std::cout << "ltest device-name" << std::endl;
        return 1;
    }

    if((soc = InitRawSocket(argv[1], 0, 0)) == -1)
    {
        std::cout << "InitRawSocket:error:" << argv[1] << std::endl;
        return -1;
    }
}