# decl_enum
C++ support for enumerations with textual representation (header only). The enumeration is sequential, starting from zero. It supports conversion from text to enumeration. The implementation is based on static hash maps (std::unordered_map).

## Example
```
#include <decl_enum.h>

decl_enum(currency,  euro, dollar, pound, renminbi);
```
This will lead to
```
namespace currency
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
auto data = currency::meta::parse(text, text_length);
if (data.second)
{
   currency::id value = data.first;
}
```
