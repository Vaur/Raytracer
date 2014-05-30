//
// DecorateBracket.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 30 16:36:40 2014 vaur
// Last update Fri May 30 16:48:23 2014 vaur
//

/*
** Include
*/

#include	"DecorateBracket.hpp"

/*
** Functions
*/

/*
** CTOR
*/

DecorateBracket::DecorateBracket()
{
  bracketIn = "[";
  bracketOut = "]";
}

/*
** DTOR
*/

DecorateBracket::~DecorateBracket()
{
}

/*
** Operator Overload
*/

std::string	&DecorateBracket::operator<<(std::string &str)
{
  std::string	ret;

  ret = bracketIn;
  ret = ret + str;
  ret = ret + bracketOut;
  str = ret;

  return (str);
}
