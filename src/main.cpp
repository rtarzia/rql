#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>
#include "../include/utils.hpp"


const char* welcome_text =  "Connected to RQL.\n"
                            "Type \"h\" for help, \"q\" to quit.";

int main()
{
  std::cout << welcome_text << std::endl;

  std::string cmd;
  while (true)
  {
    std::cout << "rql > " << std::flush;
    getline(std::cin, cmd);
    if (boost::iequals(cmd, "q"))
    {
      std::cout << "Exiting.." << std::endl;
      break;
    }
    else if (boost::iequals(cmd, "h"))
      list_help();
    else
      parse_command(cmd);
  }
}
