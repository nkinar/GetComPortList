#include <iostream>
#include "GetComPortList.h"

int main()
{
	std::cout << "Print all serial port names:" << std::endl;
	GetComPortList::print_serial_port_list();
	std::cout << "Obtain a vector of port names:" << std::endl;
	std::vector<std::string> lst = GetComPortList::get_list_serial_ports();
	for (const std::string& s: lst)
	{
		std::cout << s << std::endl;
	}
	return 0;

} // end
