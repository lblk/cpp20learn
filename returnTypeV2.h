template <typename T>
struct static_promise {
	static constexpr bool val = false;
};

template <typename T>
T&& GetFuncObjAvoidFromConstructor() {
	static_assert (static_promise<T>::val, "this function should been call in static context");

}

template <typename Func, typename...Args>
using GetFuncRetValTypeByArgs = decltype(GetFuncObjAvoidFromConstructor<Func>()(Args{}...));
