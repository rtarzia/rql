#include "../include/utils.hpp"

void list_help()
{
  const char* help =  "*** Command List ***\n"
                      "   list - list available DBs for connection\n"
                      "   use <db> - connect to DB";

  std::cout << help << std::endl;
}

void parse_command(std::string cmd)
{
  switch(get_statement_type(cmd))
  {
    case INSERT_ST:
      std::cout << "insert" << std::endl;
      break;
    case SELECT_ST:
      std::cout << "select" << std::endl;
      break;
    case UPDATE_ST:
      std::cout << "update" << std::endl;
      break;
    case DELETE_ST:
      std::cout << "delete" << std::endl;
      break;
    case UNRECOGNIZED_ST:
      std::cout << "Error, invalid command." << std::endl;
      break;
  }
}

StatementType get_statement_type(std::string cmd)
{
  if (cmd.compare(0, 6, "insert") == 0)
    return INSERT_ST;
  else if (cmd.compare(0, 6, "select") == 0)
    return SELECT_ST;
  else if (cmd.compare(0, 6, "update") == 0)
    return UPDATE_ST;
  else if (cmd.compare(0, 6, "delete") == 0)
      return DELETE_ST;
  else
    return UNRECOGNIZED_ST;
}
