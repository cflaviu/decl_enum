#pragma once
#ifndef PCH
	#include <unordered_map>	#include <cstring>
#endif

#ifdef _MSC_VER // Microsoft compilers
	#define GET_ARG_COUNT(...)  INTERNAL_EXPAND_ARGS_PRIVATE(INTERNAL_ARGS_AUGMENTER(__VA_ARGS__))
	#define INTERNAL_ARGS_AUGMENTER(...) unused, __VA_ARGS__
	#define INTERNAL_EXPAND(x) x
	#define INTERNAL_EXPAND_ARGS_PRIVATE(...) INTERNAL_EXPAND(INTERNAL_GET_ARG_COUNT_PRIVATE(__VA_ARGS__, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0))
	#define INTERNAL_GET_ARG_COUNT_PRIVATE(_1_, _2_, _3_, _4_, _5_, _6_, _7_, _8_, _9_, _10_, _11_, _12_, _13_, _14_, _15_, _16_, _17_, _18_, _19_, _20_, _21_, _22_, _23_, _24_, _25_, _26_, _27_, _28_, _29_, _30_, _31_, _32_, _33_, _34_, _35_, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, count, ...) count
#else // Non-Microsoft compilers
	#define GET_ARG_COUNT(...) INTERNAL_GET_ARG_COUNT_PRIVATE(0, ## __VA_ARGS__, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
	#define INTERNAL_GET_ARG_COUNT_PRIVATE(_0, _1_, _2_, _3_, _4_, _5_, _6_, _7_, _8_, _9_, _10_, _11_, _12_, _13_, _14_, _15_, _16_, _17_, _18_, _19_, _20_, _21_, _22_, _23_, _24_, _25_, _26_, _27_, _28_, _29_, _30_, _31_, _32_, _33_, _34_, _35_, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, count, ...) count
#endif

#define MAP(macro, ...) IDENTITY(APPLY(CHOOSE_MAP_START, GET_ARG_COUNT(__VA_ARGS__))(macro, __VA_ARGS__))
#define CHOOSE_MAP_START(count) MAP ## count
#define APPLY(macro, ...) IDENTITY(macro(__VA_ARGS__))
#define IDENTITY(x) x

#define MAP1(m, x)      m(x)
#define MAP2(m, x, ...) m(x) IDENTITY(MAP1(m, __VA_ARGS__))
#define MAP3(m, x, ...) m(x) IDENTITY(MAP2(m, __VA_ARGS__))
#define MAP4(m, x, ...) m(x) IDENTITY(MAP3(m, __VA_ARGS__))
#define MAP5(m, x, ...) m(x) IDENTITY(MAP4(m, __VA_ARGS__))
#define MAP6(m, x, ...) m(x) IDENTITY(MAP5(m, __VA_ARGS__))
#define MAP7(m, x, ...) m(x) IDENTITY(MAP6(m, __VA_ARGS__))
#define MAP8(m, x, ...) m(x) IDENTITY(MAP7(m, __VA_ARGS__))
#define MAP9(m, x, ...) m(x) IDENTITY(MAP8(m, __VA_ARGS__))
#define MAP10(m, x, ...) m(x) IDENTITY(MAP9(m, __VA_ARGS__))
#define MAP11(m, x, ...) m(x) IDENTITY(MAP10(m, __VA_ARGS__))
#define MAP12(m, x, ...) m(x) IDENTITY(MAP11(m, __VA_ARGS__))
#define MAP13(m, x, ...) m(x) IDENTITY(MAP12(m, __VA_ARGS__))
#define MAP14(m, x, ...) m(x) IDENTITY(MAP13(m, __VA_ARGS__))
#define MAP15(m, x, ...) m(x) IDENTITY(MAP14(m, __VA_ARGS__))
#define MAP16(m, x, ...) m(x) IDENTITY(MAP15(m, __VA_ARGS__))
#define MAP17(m, x, ...) m(x) IDENTITY(MAP16(m, __VA_ARGS__))
#define MAP18(m, x, ...) m(x) IDENTITY(MAP17(m, __VA_ARGS__))
#define MAP19(m, x, ...) m(x) IDENTITY(MAP18(m, __VA_ARGS__))
#define MAP20(m, x, ...) m(x) IDENTITY(MAP19(m, __VA_ARGS__))
#define MAP21(m, x, ...) m(x) IDENTITY(MAP20(m, __VA_ARGS__))
#define MAP22(m, x, ...) m(x) IDENTITY(MAP21(m, __VA_ARGS__))
#define MAP23(m, x, ...) m(x) IDENTITY(MAP22(m, __VA_ARGS__))
#define MAP24(m, x, ...) m(x) IDENTITY(MAP23(m, __VA_ARGS__))
#define MAP25(m, x, ...) m(x) IDENTITY(MAP24(m, __VA_ARGS__))
#define MAP26(m, x, ...) m(x) IDENTITY(MAP25(m, __VA_ARGS__))
#define MAP27(m, x, ...) m(x) IDENTITY(MAP26(m, __VA_ARGS__))
#define MAP28(m, x, ...) m(x) IDENTITY(MAP27(m, __VA_ARGS__))
#define MAP29(m, x, ...) m(x) IDENTITY(MAP28(m, __VA_ARGS__))
#define MAP30(m, x, ...) m(x) IDENTITY(MAP29(m, __VA_ARGS__))

#define STRINGIZE_SINGLE(expression) #expression,
#define STRINGIZE(...) IDENTITY(MAP(STRINGIZE_SINGLE, __VA_ARGS__))

#define decl_enum_base(name, base_type_decl, ...)\
namespace name\
{\
	enum id base_type_decl { __VA_ARGS__ };\
	namespace meta\
	{\
		constexpr unsigned item_count = GET_ARG_COUNT(__VA_ARGS__);\
		constexpr const char* const texts[] = { STRINGIZE(__VA_ARGS__) };\
		constexpr const char* text_of(const id id_item) { return texts[id_item]; };\
		constexpr size_t length(const char* const text)\
		{\
			return *text != 0 ? 1 + length(text + 1) : 0;\
		}\
		constexpr size_t hash_of(const char* const data, const size_t count)\
		{\
			constexpr auto initial = size_t(14695981039346656037ull);\
			constexpr auto prime = size_t(1099511628211ull);\
			auto result = initial;\
			for (auto i = 0; i != count; ++i)\
			{\
				result ^= static_cast<size_t>(data[i]);\
				result *= prime;\
			}\
			return result;\
		}\
		template <size_t _Count>\
		constexpr size_t hash_of(const char(&data)[_Count])\
		{\
			return hash_of(data, _Count - 1);\
		}\
		std::pair<id, bool> parse(const char* text_item, const size_t text_item_size)\
		{\
			static const auto hash_id_map = []()\
			{\
				std::unordered_map<size_t, id> result;\
				for (auto i = 0; i != item_count; ++i)\
				{\
					auto enum_text = texts[i];\
					result.insert(std::make_pair(hash_of(enum_text, length(enum_text)), id(i)));\
				}\
				return result;\
			}();\
			auto pos = hash_id_map.find(hash_of(text_item, text_item_size));\
			return pos != hash_id_map.end() ? std::make_pair(pos->second, true) : std::make_pair(id(0), false);\
		}\
		std::pair<id, bool> parse(const char* text_item)\
		{\
			return parse(text_item, std::strlen(text_item));\
		}\
	};\
};

#define decl_enum(name, ...) decl_enum_base(name,  , ##__VA_ARGS__)
#define decl_typed_enum(name, base_type, ...) decl_enum_base(name, :base_type, ##__VA_ARGS__)
