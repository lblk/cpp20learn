#if 0
template <typename>
struct [[deprecated]]typeDump{};
#else
//for gcc
template <typename, typename...>
struct [[gnu::warning("your type here")]] typeDump {};
#endif
/*
 * following for clang
template <typename, typename...>
struct [[deprecated]] dump{};
*/
