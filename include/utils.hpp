#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <string>

enum StatementType
{
  INSERT_ST,
  SELECT_ST,
  UPDATE_ST,
  DELETE_ST,
  UNRECOGNIZED_ST
};
void list_help();
StatementType get_statement_type(std::string cmd);
void parse_command(std::string cmd);


#endif
