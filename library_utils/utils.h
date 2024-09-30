#include <string>

#ifdef utils_EXPORTS
#define UTILS_API __declspec(dllexport)
#else
#define UTILS_API __declspec(dllimport)
#endif

namespace utils
{

void UTILS_API print(const std::string& msg);

} // namespace utils
