//
// Coordonate.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 31 04:54:31 2014 vaur
// Last update Sun Jun  1 01:26:39 2014 vaur
//

/** \file Coordonate.cpp
 * Provide functions for the class Coordonate
 */

/*
** Include
*/

#include	<ostream>
#include	"Coordonate.hpp"

/*
** Functions
*/

/*
** CTOR
*/

Coordonate::Coordonate(Coordonate::t_unit x, Coordonate::t_unit y, Coordonate::t_unit z)
{
  this->_x = x;
  this->_y = y;
  this->_z = z;
}

/*
** DTOR
*/

Coordonate::~Coordonate()
{
}

/*
** Getter
*/

/**
 * @return x part of the coordonate
 */

Coordonate::t_unit	Coordonate::getX() const
{
  return (_x);
}

/**
 * @return y part of the coordonate
 */

Coordonate::t_unit	Coordonate::getY() const
{
  return (_y);
}

/**
 * @return z part of the coordonate
 */

Coordonate::t_unit	Coordonate::getZ() const
{
  return (_z);
}

/**
 * Operator overload to compare coordonates
 */

bool	Coordonate::operator==(const Coordonate &o)
{
  if (this->_x == o.getX() && this->_y == o.getY() && this->_z == o.getZ())
    return (true);
  return (false);
}

/**
 * Operator overload for display
 */

std::ostream	&operator<<(std::ostream &o, const Coordonate &coord)
{
  o << "(" << coord.getX() << ", " << coord.getY() << ", " << coord.getZ() << ")";
  return (o);
}
