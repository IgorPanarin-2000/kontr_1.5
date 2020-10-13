
#include "../include/CComplex.hpp"
#include "../include/CComplexVector.hpp"
#include "../include/test.hpp"

#define VECTOR_SIZE 25

int main ()
{

  CComplexVector_t vector (VECTOR_SIZE);

  for (int i = 0; i < VECTOR_SIZE; i++)
    {
      vector.get_vector_ptr ()[i].set_a (i);
      vector.get_vector_ptr ()[i].set_b (VECTOR_SIZE - i);
    }

  vector.print_vector ();

  CComplex_test ();

  return 0;
}
