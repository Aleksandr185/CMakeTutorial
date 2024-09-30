#include "iostream"
#include <optional>

#include "version.h"

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
  std::cout << foo(5).has_value();
  return 0;
}
