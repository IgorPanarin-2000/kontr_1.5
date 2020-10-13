#ifndef __CCOMPLEXVECTOR_T_HPP_INCLUDED__
#define __CCOMPLEXVECTOR_T_HPP_INCLUDED__

#include "CComplex.hpp"

class CComplexVector_t
{
private:
  CComplex_t *CComplexVector_ptr;
  int size;

public:
  CComplexVector_t (int size);
  ~CComplexVector_t ();

  void print_vector ();

  CComplex_t *get_vector_ptr ();
  void set_vector_ptr (CComplex_t *new_ptr, int new_size);

};

#endif // __CCOMPLEXVECTOR_T_HPP_INCLUDED__
