#include "Network.hpp"

Network::Network(void)
{
    return;
}

Network::Network(Network const & src) 
{
    *this = src;
    return;
}

Network::~Network(void)
{
    return;
}

Network &	            Network::operator=(Network const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void                    Network::fillActive(std::string act, std::string resp, std::string add)
{
    std::string parseAct = act + " ";
    std::string key = "Connection " + add;
    parseAct += resp.substr(resp.find("inet ") + 5, resp.find("netmask") - 6 - resp.find("inet "));
    this->_map["Network"]._data[key] = parseAct;
    resp = resp.erase(0, resp.find("broadcast"));
    parseAct = resp.substr(resp.find(" ") + 1, resp.find("\n") - resp.find(" ") - 1);
    key = "Broadcast" + add;
    this->_map["Network"]._data[key] = parseAct;
}

void                    Network::fillInactive(std::string act, std::string add)
{
    std::string parseAct = act + " inactive";
    std::string key = "Connection " + add;
    this->_map["Network"]._data[key] = parseAct;
    key = "Broadcast " + add;
    this->_map["Network"]._data[key] = parseAct;
}

void                Network::createData()
{
    std::string split(this->_top);
    if (split.length())
    {
        split = split.erase(0, split.find("Networks:"));
        split = split.erase(split.find("\n"), std::string::npos);
        std::string out = split.substr(split.find("/") + 1, split.find("M") - split.find("/"));
        this->_map["Network"]._data["Packets out"] = out;
        split = split.erase(0, split.find(",") + 1);
        std::string in = split.substr(split.find("/") + 1, split.find("M") - split.find("/"));
        this->_map["Network"]._data["Packets in"] = in;
        std::string en0 = this->exec("ifconfig en0");
        if (en0.find("inactive") == std::string::npos)
            this->fillActive("en0", en0, "Ethernet");
        else
            this->fillInactive("en0", "Ethernet");
        std::string en1 = this->exec("ifconfig en1");
        if (en1.find("inactive") == std::string::npos)
            this->fillActive("en1", en1, "Wifi");
        else
            this->fillInactive("en1", "Wifi");
    }
}
