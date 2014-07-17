//
// Coordinate.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 31 04:49:43 2014 vaur
// Last update Thu Jul 17 07:26:57 2014 vaur
//

/** \file Coordinate.hpp
 * Define Coordinate class. Object that define a set of coordinates in space.
 */

#ifndef		COORDINATE_H
# define	COORDINATE_H

/*
** Include
*/

# include	"Unit.hpp"

/*
** Class
*/

/**
 * Provide a set of coordinate in space and some functions to handle them.
 * @done 01/06/2014:
 *	- Coordinate::operator==(const Coordinate &o);
 *	- operator<<(std::ostream &o, const Coordinate &coord);
 */

class		Coordinate
{
public:
  /** Type of unit used by Coordinate */
  typedef RT::t_unit	t_unit;

  //ctor & dtor
  Coordinate(t_unit x, t_unit y, t_unit z);
  ~Coordinate();

  //getter
  t_unit	getX() const;
  t_unit	getY() const;
  t_unit	getZ() const;

  //operator overload

  //Compare coordinates
  bool		operator==(const Coordinate &o);
  bool		operator!=(const Coordinate &o);

  Coordinate	&operator=(const Coordinate &o);

  //calcul between coordinates
  Coordinate	operator+(const Coordinate &o);
  Coordinate	operator-(const Coordinate &o);
  Coordinate	operator*(const Coordinate &o);
  Coordinate	operator/(const Coordinate &o);

  //calcul between coordinate and i
  Coordinate	operator*(t_unit i);
  Coordinate	operator/(t_unit i);

private:
  t_unit	_x;
  t_unit	_y;
  t_unit	_z;

};

//operator overload
std::ostream	&operator<<(std::ostream &o, const Coordinate &coord);

#endif      /* !COORDINATE_H_ */
