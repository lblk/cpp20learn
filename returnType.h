template <typename Func, typename...Args>
using GetFuncRetValTypeByArgs = decltype(Func{}(Args{}...));
