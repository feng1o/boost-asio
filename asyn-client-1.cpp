/*************************************************************************
    > File Name: x.c
  > Author: 
  > Mail: 
  > Created Time: Tue 12 Apr 2016 03:18:40 PM CST
 ************************************************************************/
#include "iostream"
#include "iomanip"
#include "cassert"
#include "unistd.h"
#include "boost/asio.hpp"
#include "boost/smart_ptr.hpp"
#include "boost/bind.hpp"

using std::cin;
using std::cout;
using std::endl;
using namespace  boost::asio; 

#define def_myAssert(x)  if(!x) {cout << "ERROR !" <<  __FILE__ \
                        __LINE__ << endl;\
                        bort();} 

void connect_handler(const boost::system::error_code &ec)
{
    cout << "ok ....................\n";
}
int main()
{
    io_service service;
    ip::tcp::endpoint ep( ip::address::from_string("127.0.0.1"), 2001);
    ip::tcp::socket sock(service);
    sock.async_connect(ep, connect_handler);
    service.run();
    return 0;
}
