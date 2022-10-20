#ifndef AVERAGE_HPP
#define AVERAGE_HPP
#include <vector>
#include <limits>
#include <iostream>

/*
* tedious way
*
template <typename T> struct average_type {typedef T type; };

// specialization for ALL integer types
template <> struct average_type<int> {typedef double type; };
template <> struct average_type<unsigned int> {typedef double type; };
// ... tedious!

// see https://en.cppreference.com/w/cpp/language/types for list!
*/

/*
* two help version (also tedious)
*
// the second helper:
template<class T,bool F>
struct helper2 { typedef T type; };

// the second helper if the type is integer: a partial specialization
template<class T> struct helper2<T,true> { typedef double type; }; 

// the first helper:
template<typename T,bool F> struct helper1 { typedef T type; };

// the first helper if numeric_limits is defined: a partial specialization
template<class T>
struct helper1<T,true> {
  typedef typename helper2<T,std::numeric_limits<T>::is_integer>::type type;
};

// helper1 gives the average type, finally!
template <typename T>
struct average_type {
  typedef typename helper1<T,std::numeric_limits<T>::is_specialized>::type
  type;
};
*/

// helper
template <typename T, bool F>
struct helper { typedef T type; };

// helper if the type is integer: a partial specialization
template <typename T> 
struct helper<T, true> { typedef double type; };

// average
template <typename T>
struct average_type {
  typedef typename helper<T, std::numeric_limits<T>::is_integer>::type type;
};

template <typename T>
typename average_type<T>::type average(std::vector<T> const& v) { 
  typename average_type<T>::type sum = 0;
  std::cout << __PRETTY_FUNCTION__ << '\n'; // Magic constants holding the
                                            // name of the function.
                                            // Just for illustration.
  for (std::size_t i=0; i<v.size(); ++i) {
    sum += v[i];
  }
  return sum/v.size();
}

#endif /* AVERAGE_HPP */
