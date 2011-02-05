#ifndef TERMINALUSERINPUT_HPP
#define TERMINALUSERINPUT_HPP

#include <string>
#include "parseraction.hpp"

namespace Terminal {
  class UserInput {
  private:
    short last_byte;

  public:
    UserInput()
      : last_byte( -1 )
    {}

    std::string input( Parser::UserByte *act,
		       bool application_mode_cursor_keys );
  };
}

#endif