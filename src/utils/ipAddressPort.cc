#ifndef __IPADDRESS_PORD_H_
#define __IPADDRESS_PORD_H_

#include "ipAddressPort.h"
#include <string>
#include <sstream>

 IpAddressPort::IpAddressPort(std::string ip, unsigned short port) : m_ip(ip),m_port(port) {

}
std::string IpAddressPort::ToString() const {
    std::stringstream ss;
    ss<<m_ip<<":"<<m_port;
    return ss.str();
}

void IpAddressPort::SetIpAddress(const std::string ip){
    m_ip = ip;
}

std::string IpAddressPort::GetIpAddress() const{
    return m_ip;
}

void IpAddressPort::SetPort(unsigned short port){
    m_port = port;
}

unsigned short IpAddressPort::GetPort() const{
    return m_port;
}


#endif
