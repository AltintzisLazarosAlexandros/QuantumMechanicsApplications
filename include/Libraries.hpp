#ifndef LIBRARIES_HPP
#define LIBRARIES_HPP

// Standard C++ libraries
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <complex>
#include <algorithm>

// Linear Algebra - Eigen
#include <Eigen/Dense>

// Numerical Computations - Boost
#include <boost/math/special_functions.hpp>
#include <boost/numeric/odeint.hpp>
#include <boost/array.hpp>

// Scientific Computing - GSL
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_eigen.h>
#include <gsl/gsl_sf_legendre.h>
#include <gsl/gsl_integration.h>

// Quantum Circuit Simulator - QuEST (optional, uncomment if installed)
// #include <QuEST.h>

#endif // LIBRARIES_HPP