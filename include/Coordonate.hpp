//
// Coordonate.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 31 04:49:43 2014 vaur
// Last update Sun Jun  1 00:15:21 2014 vaur
//

/** \file Coordonate.hpp
 * Define Coordonate class. Object that define a set of coordonates in space.
 */

#ifndef		COORDONATE_H
# define	COORDONATE_H

/*
** Class
*/

/**
 * Provide a set of coordonate in space and some functions to handle them.
 */

class		Coordonate
{
public:
  /** Type of unit used by Coordonate */
  typedef float		t_unit;

  //ctor & dtor
  Coordonate(t_unit x, t_unit y, t_unit z);
  ~Coordonate();

  //getter
  t_unit	getX() const;
  t_unit	getY() const;
  t_unit	getZ() const;

  //operator overload
  bool		operator==(const Coordonate &o);

private:
  t_unit	_x;
  t_unit	_y;
  t_unit	_z;

};

//operator overload
std::ostream	&operator<<(std::ostream &o, const Coordonate &coord);

#endif      /* !COORDONATE_H_ */
