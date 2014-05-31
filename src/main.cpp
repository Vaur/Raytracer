//
// main.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 23 23:01:22 2014 vaur
// Last update Fri May 30 17:47:08 2014 vaur
//

/*
** Include
*/

#include	<string>
#include	"MsgBox.hpp"

/*
** Functions
*/

int			main(int argc, char **argv)
{
  MsgBox		msgbox(argv[0]);
  // DecorateBracket	decorate;

  std::string	test;

  test = "test";

  // INFO(test);
  // msgbox.decorateIn() << test; msgbox.decorateOut();
  MSG(test);
  return (0);
}
