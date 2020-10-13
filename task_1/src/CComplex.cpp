
#include "../include/CComplex.hpp"

CComplex_t::CComplex_t ()
{
  this->m_a = 0.;
  this->m_b = 0.;
  this->m_rho = 0.;
  this->m_phi = 0.;
}

CComplex_t::CComplex_t (double a = 0, double b = 0)
{
  this->m_a = a;
  this->m_b = b;
  calc_polar ();
}

CComplex_t::~CComplex_t () {}

void CComplex_t::set_a (const double a)
{
  this->m_a = a;
  calc_polar ();
  return;
}

void CComplex_t::set_b (const double b)
{
  this->m_b = b;
  calc_polar ();
  return;
}

double CComplex_t::get_a () { return m_a; }
double CComplex_t::get_b () { return m_b; }
double CComplex_t::get_rho () { return m_rho; }
double CComplex_t::get_phi () { return m_phi; }

void CComplex_t::calc_polar ()
{
  m_rho = sqrt (m_a * m_a + m_b * m_b);
  if (fabs (m_a) > 1e-16)
    m_phi = atan (m_b / m_a);
  return;
}

void CComplex_t::print_complex ()
{
  printf ("%3.2lf + i * %3.2lf\n", m_a, m_b);
  return;
}

void CComplex_t::print_polar ()
{
  printf ("%3.2lf * (cos (%3.2lf) + i * sin (%3.2lf))\n", m_rho, m_phi, m_phi);
  return;
}

void CComplex_t::print_exp ()
{
  printf ("%3.2lf * exp (i * %3.2lf)\n", m_rho, m_phi);
  return;
}

CComplex_t CComplex_t::operator* (const CComplex_t rhs)
{
  double temp_m_a = m_a, temp_a, temp_b;
  temp_a = m_a * rhs.m_a - m_b * rhs.m_b;
  temp_b = temp_m_a * rhs.m_b + m_b * rhs.m_a;
  return CComplex_t (temp_a, temp_b);
}

CComplex_t CComplex_t::operator- (const CComplex_t rhs)
{
  return CComplex_t (m_a - rhs.m_a, m_b - rhs.m_b);
}

CComplex_t CComplex_t::operator+ (const CComplex_t rhs)
{
  return CComplex_t (rhs.m_a + m_a, rhs.m_b + m_b);
}

CComplex_t CComplex_t::operator= (const CComplex_t rhs)
{
  if (this == &rhs)
    return *this;

  m_a = rhs.m_a;
  m_b = rhs.m_b;
  m_rho = rhs.m_rho;
  m_phi = rhs.m_phi;

  return *this;
}
