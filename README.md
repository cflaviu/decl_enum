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
    pound,
    renminbi
  };

  namespace meta
  {
    constexpr unsigned item_count = 4;
    
    constexpr const char* const texts[] = { "euro", "dollar", "pound", "renminbi" };
    
    constexpr const char* text_of(const id id_item);
    
    std::pair<id, bool> parse(const char* text_item);
    std::pair<id, bool> parse(const char* text_item, const size_t text_item_length);
  }
}
 ```

## Usage
```
auto data = Currency::meta::parse(text, textLength);
if (data.second)
{
   Currency::id value = data.first;
}
```
