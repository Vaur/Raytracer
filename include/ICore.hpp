//
// ICore.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 01:54:29 2014 vaur
// Last update Sun Jun  1 08:29:19 2014 vaur
//

#ifndef		ICORE_H
# define	ICORE_H

/*
** Class
*/

/**
 * Standard Interface for every program's core
 */

class ICore
{
public:

  //ctor & dtor
  virtual ~ICore(){};

  /**
   * @return	value is either `EXIT_FAILURE` or `EXIT_SUCCESS`
   */

  virtual int	run() = 0;
};

#endif      /* !ICORE_H_ */
