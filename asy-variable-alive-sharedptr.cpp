#include <boost/thread.hpp>
#include <boost/bind.hpp>
#include <boost/asio.hpp>
#include <iostream>

using namespace boost::asio;
io_service service;

class connection : boost::enable_shared_from_this< connection> {
    typedef boost::system::err_code err_code;
    typedef boost::shared_ptr< connection> ptr;  //shared pointer

public:
    connection(): m_sock(service), started_(true) {} // 构造

    void start(ip::tcp::endpoint )
private:
    ip::tcp::socket m_sock;

}
