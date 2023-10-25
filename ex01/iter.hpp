#ifndef CPP07_ITER_HPP
#define CPP07_ITER_HPP

template<typename arg>
arg op(arg a) {
	return (a+1);
}

template<typename arg>
void iter(arg (*a), int len, arg (*func)(arg b)) {
	for (int i = 0; i < len; i++){
		a[i] = func(a[i]);
	}
}

#endif //CPP07_ITER_HPP
