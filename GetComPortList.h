#pragma  once
#include <vector>
#include <string>
class GetComPortList
{
public:
	GetComPortList();
	static std::vector<std::string> get_list_serial_ports();
	static void print_serial_port_list();
private:
}; // end


