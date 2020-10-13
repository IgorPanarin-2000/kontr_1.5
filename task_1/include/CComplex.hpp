#ifndef __CCOMPLEX_T_HPP_INCLUDED__
#define __CCOMPLEX_T_HPP_INCLUDED__

#include <cmath>
#include <memory>
#include <complex>
#include <iostream>
#include <algorithm>

#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

class CComplex_t
{
private:
  double m_a;
  double m_b;
  double m_rho;
  double m_phi;

public:
  CComplex_t ();
  CComplex_t (double a, double b);
  ~CComplex_t ();

  void set_a (const double a);
  void set_b (const double b);

  double get_a ();
  double get_b ();
  double get_rho ();
  double get_phi ();

  void calc_polar ();

  void print_complex ();
  void print_polar ();
  void print_exp ();

  CComplex_t operator* (const CComplex_t rhs);
  CComplex_t operator- (const CComplex_t rhs);
  CComplex_t operator+ (const CComplex_t rhs);
  CComplex_t operator= (const CComplex_t rhs);
};

#endif // __CCOMPLEX_T_HPP_INCLUDED__
