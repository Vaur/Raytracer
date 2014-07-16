//
// Coordinate.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 31 04:54:31 2014 vaur
// Last update Wed Jul 16 16:59:01 2014 vaur
//

/** \file Coordinate.cpp
 * Provide functions for the class Coordinate
 */

/*
** Include
*/

#include	<ostream>
#include	"Coordinate.hpp"

/*
** Functions
*/

/*
** CTOR
*/

Coordinate::Coordinate(Coordinate::t_unit x, Coordinate::t_unit y, Coordinate::t_unit z)
{
  this->_x = x;
  this->_y = y;
  this->_z = z;
}

/*
** DTOR
*/

Coordinate::~Coordinate()
{
}

/*
** Getter
*/

/**
 * @return x part of the coordinate
 */

Coordinate::t_unit	Coordinate::getX() const
{
  return (_x);
}

/**
 * @return y part of the coordinate
 */

Coordinate::t_unit	Coordinate::getY() const
{
  return (_y);
}

/**
 * @return z part of the coordinate
 */

Coordinate::t_unit	Coordinate::getZ() const
{
  return (_z);
}

/** Operator overload to compare coordinates */
bool	Coordinate::operator==(const Coordinate &o)
{
  if (this->_x == o.getX() && this->_y == o.getY() && this->_z == o.getZ())
    return (true);
  return (false);
}

/** Return true if the 2 coordinates are different */
bool	Coordinate::operator!=(const Coordinate &o)
{
  return (!(*this == o));
}


/** Assign values to Coordinate from another coordinate */
Coordinate	&Coordinate::operator=(const Coordinate &o)
{
  _x = o._x;
  _y = o._y;
  _z = o._z;
  return (*this);
}

/*
** Calcul between Coordinates
*/

/** Addition between 2 Coordinates */
Coordinate	Coordinate::operator+(const Coordinate &o)
{
  Coordinate	res(_x + o._x, _y + o._y, _z + o._z);

  return (res);
}

/** Substraction between 2 Coordinates */
Coordinate	Coordinate::operator-(const Coordinate &o)
{
  Coordinate	res(_x - o._x, _y - o._y, _z - o._z);

  return (res);
}

/** Multiplication between 2 Coordinates */
Coordinate	Coordinate::operator*(const Coordinate &o)
{
  Coordinate	res(_x * o._x, _y * o._y, _z * o._z);

  return (res);
}

/** Division between 2 Coordinates */
Coordinate	Coordinate::operator/(const Coordinate &o)
{
  Coordinate	res(_x / o._x, _y / o._y, _z / o._z);

  return (res);
}

/*
** Calcul between coordinate and i
*/

/** Multiplication between Coordinate and I*/
Coordinate	Coordinate::operator*(Coordinate::t_unit i)
{
  Coordinate	res(_x * i, _y * i, _z * i);

  return (res);
}

/** Division between 2 Coordinates */
Coordinate	Coordinate::operator/(Coordinate::t_unit i)
{
  Coordinate	res(_x / i, _y / i, _z / i);

  return (res);
}

/** Operator overload for display */
std::ostream	&operator<<(std::ostream &o, const Coordinate &coord)
{
  o << "(" << coord.getX() << ", " << coord.getY() << ", " << coord.getZ() << ")";
  return (o);
}
