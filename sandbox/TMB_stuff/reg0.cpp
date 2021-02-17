#include <TMB.hpp>

  template<class Type>
  Type objective_function<Type>::operator() () { DATA_VECTOR(x); DATA_VECTOR(y); PARAMETER(b0); PARAMETER(b1); PARAMETER(sd); Type nll = 0.0; nll = -sum(vector<Type>(dnorm(vector<Type>(y), vector<Type>(b0 + b1 * x), sd, true))); return nll; }
