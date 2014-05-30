//
// DecorateBracket.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 30 16:30:42 2014 vaur
// Last update Fri May 30 16:51:35 2014 vaur
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

class DecorateBracket
{
public:

  //ctor & dtor
  DecorateBracket();
  ~DecorateBracket();

  //operate overload
  std::string	&operator<<(std::string &str);

private:
  std::string	bracketIn;
  std::string	bracketOut;
};

#endif      /* !DECORATEBRACKET_H_ */
