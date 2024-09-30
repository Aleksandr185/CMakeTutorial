#include "iostream"
#include <optional>

std::optional<int> foo(int a)
{
  if (a > 0)
    return std::optional<int>(a);

  return std::optional<int>();
}

int main()
{
  std::cout << "Hello world! Exercise 1." << std::endl;
  std::cout << foo(5).has_value();
  return 0;
}
