# decl_enum
C++ static support for converting strings to associated enumeration items (header only).
The implementation is based on static hash maps (std::unordered_map).

## Example
```
#include <decl_enum.h>

decl_enum(Currency,  euro, dollar, pound, renminbi);
```
This will lead to
```
namespace Currency
{
  enum id
  {
    euro,
    dollar,
    poundm
    renminbi
  };

  std::pair<id, bool> parse(const char* text, const size_t text_length);
}
 ```

## Usage
```
auto data = Currency::parse(text, textLength);
if (data.second)
{
   Currency::id value = data.first;
}
```
