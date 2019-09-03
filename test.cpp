#include "decl_enum.h"
#include <cassert>

decl_enum(currency,  euro, dollar, pound, renminbi);
decl_typed_enum(currency2, short,  euro, dollar, pound, renminbi);

int main()
{
	auto size1 = sizeof(currency::id);
	auto size2 = sizeof(currency2::id);

	auto count = currency::meta::item_count;

	{
		auto data = currency::meta::parse("euro", 4);
		assert(data.second);
		assert(data.first == currency::euro);
	}

	{
		auto data = currency::meta::parse("pound");
		assert(data.second);
		assert(data.first == currency::pound);
	}

	return currency::meta::parse("a", 1).first;
}
