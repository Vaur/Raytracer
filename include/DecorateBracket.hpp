//
// DecorateBracket.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 30 16:30:42 2014 vaur
// Last update Sat May 31 02:31:40 2014 vaur
//

#ifndef		DECORATEBRACKET_H
# define	DECORATEBRACKET_H

/*
** Include
*/

#include	<string>

/*
** Class
*/

/**
 * Simple class that decorate a string with bracket defined in constructor
 */

class DecorateBracket
{
public:

  //ctor & dtor
  DecorateBracket();
  ~DecorateBracket();

  //operator overload
  std::string	&operator<<(std::string &str);

private:
  std::string	bracketIn;
  std::string	bracketOut;
};

#endif      /* !DECORATEBRACKET_H_ */
