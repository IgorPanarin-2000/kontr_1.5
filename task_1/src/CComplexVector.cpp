
#include "../include/CComplexVector.hpp"

CComplexVector_t::CComplexVector_t (int size = 0)
{
  if (size != 0 && !CComplexVector_ptr)
    {
      CComplexVector_ptr = new CComplex_t [size];
      this->size = size;
    }
}

CComplexVector_t::~CComplexVector_t ()
{
  if (CComplexVector_ptr)
    delete [] CComplexVector_ptr;
}

void CComplexVector_t::print_vector ()
{
  for (int i = 0; i < size; i++)
    {
      printf ("CComplexVector[%d] = ", i);
      CComplexVector_ptr[i].print_complex ();
    }
  printf ("\n");
}

CComplex_t *CComplexVector_t::get_vector_ptr ()
{
  return CComplexVector_ptr;
}

void CComplexVector_t::set_vector_ptr (CComplex_t *new_ptr, int new_size)
{
  if (CComplexVector_ptr)
    {
      delete [] CComplexVector_ptr;
      size = 0;
    }

  CComplexVector_ptr = new_ptr;
  size = new_size;
}
