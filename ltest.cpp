
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <linus/if.h>
#include <net/ethernet.h>
#include <netpacket/packet.h>
#include <netinet/if_ether.h>

int InitRawSocket(char *device, int promiscFlag, in ipOnly)
{
    struct ifreq ifreq;
    struct sockaddr_ll sa;
    int soc;

    if(ipOnly)
    {
        if(
            (soc = socket(PF_PACKET, SOCK_RAW, htons(ETH_P_IP))<0)
        )
        {
            std::cerr << "socket" << std::endl;
            return -1;
        }
        else
        {
            if(
                (soc = socket(PF_PACKET, SOCK_RAW, htons(ETH_P_ALL)))<0
            )
            {
                std::cerr << "socket" << std::endl;
                return -1;
            }
        }
    }

    memset(&ifreq, 0, sizeof(struct ifreq));

    
}

int main(int argc, char *argv[])
{
    if(argc <= 1)
    {
        std::cerr << "ltest device-name" << std::endl;
        return 1;
    }

    if(
        (soc = InitRawSocket(argv[1], 0, 0)) == -1
    )
    {
        std::cerr << "InitRawSocket:error:" << argv[1] << std::endl;
        return -1;
    }

    while(1)
    {
        if(
            size = read
        )
    }
}