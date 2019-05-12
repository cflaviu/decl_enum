#include "decl_enum.h"
#include <cassert>

decl_enum(Currency,  euro, dollar, pound, renminbi);

int main()
{
	{
		auto data = Currency::parse("euro", 4);
		assert(data.second);
		assert(data.first == Currency::euro);
	}

	{
		auto data = Currency::parse("pound", 5);
		assert(data.second);
		assert(data.first == Currency::pound);
	}

	return Currency::parse("a", 1).first;
}
