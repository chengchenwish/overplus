#include "SslServer.h"
//#include<string.h>
#include <string>

int main()
{
    std::string address("0.0.0.0");
    std::string port("1233");

    SslServer server(address, port);
    server.run();

    return 0;
}