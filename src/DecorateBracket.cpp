//
// DecorateBracket.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 30 16:36:40 2014 vaur
// Last update Sat May 31 02:32:36 2014 vaur
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

/**
 * Operator overload on std::string that will do the decoration
 * according to bracketIn and bracketOut defined in constructor
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
