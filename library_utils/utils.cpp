#include "utils.h"

#include <iostream>

namespace utils
{
  void UTILS_API print(const std::string& msg)
  {
    std::cout << "Message: " << msg << std::endl;
  }
}
