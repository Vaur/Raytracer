//
// IObject.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Thu Jul 17 02:05:47 2014 vaur
// Last update Thu Jul 17 07:19:45 2014 vaur
//

#ifndef		IOBJECT_H
# define	IOBJECT_H

/*
** Class
*/


/** Interface for every objects */
class IObject
{
public:

  /** Type of objects thare are handled by the raytracer */
  enum		e_type
    {
      SPHERE,
      UNKNOWN
    };

  //ctor & dtor
  virtual			~IObject(){};

  virtual const Coordinate	&getPos()	const = 0;
  virtual e_type		getType()	const = 0;
};

#endif      /* !IOBJECT_H_ */
