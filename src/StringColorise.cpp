//
// StringColorise.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri Jun  6 17:05:48 2014 vaur
// Last update Fri Jun  6 19:33:07 2014 vaur
//

/*
** Include
*/

#include	<iostream>
#include	<algorithm>
#include	"StringColorise.hpp"

/*
** Functions
*/

StringColorise::StringColorise()
{
  _map_color[StringColorise::BLUE] = "\x1B[34m\033[1m";
  _map_color[StringColorise::CYAN] = "\x1B[36m\033[1m";
  _map_color[StringColorise::GREEN] = "\x1B[32m\033[1m";
  _map_color[StringColorise::MAGENTA] = "\x1B[35m\033[1m";
  _map_color[StringColorise::NORMAL] = "\x1B[0m";
  _map_color[StringColorise::RED] = "\x1B[31m\033[1m";
  _map_color[StringColorise::WHITE] = "\x1B[37m\033[1m";
  _map_color[StringColorise::YELLOW] = "\x1B[33m\033[1m";
}

StringColorise::~StringColorise()
{
}

/**
 * add color to the string str
 *
 * @param[in] color	the color to put inside str
 * @param[in] str	the string to transform
 */

std::string	&StringColorise::colorise(StringColorise::e_Color color, std::string &str)
{
  str =  _map_color[color] + str + _map_color[StringColorise::NORMAL];
  return (str);
}
