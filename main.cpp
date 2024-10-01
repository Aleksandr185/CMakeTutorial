#include "iostream"
#include <optional>

#include "version.h"
#include "utils.h"

std::optional<int> foo(int a)
{
  if (a > 0)
    return std::optional<int>(a);

  return std::optional<int>();
}

int main()
{
  std::cout << "Hello world!" << std::endl;
  std::cout << "Version is: " << APP_VERSION << std::endl;
  std::cout << "has value: " << foo(5).has_value() << std::endl;

#ifdef OPTION_ONE_DEF
  std::cout << "OPTION_ONE_DEF is defined!" << std::endl;
#else
  std::cout << "OPTION_ONE_DEF is not defined!" << std::endl;
#endif

  utils::print("test utils::print function.");

  return 0;
}
