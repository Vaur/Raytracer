//
// Coordonate.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 31 04:54:31 2014 vaur
// Last update Sat May 31 05:13:05 2014 vaur
//

/** \file Coordonate.cpp
 * Provide functions for the class Coordonate
 */

/*
** Include
*/

#include	"Coordonate.hpp"

/**
 * @todo operator overload == for Coordonate cmp
 */

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

Coordonate::t_unit	Coordonate::getX() const
{
  return (_x);
}

Coordonate::t_unit	Coordonate::getY() const
{
  return (_y);
}

Coordonate::t_unit	Coordonate::getZ() const
{
  return (_z);
}
