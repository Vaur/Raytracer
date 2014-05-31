//
// main.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 23 23:01:22 2014 vaur
// Last update Sun Jun  1 00:24:46 2014 vaur
//

/*
** Include
*/

#include	<string>
#include	"Coordonate.hpp"
#include	"MsgBox.hpp"

/*
** Functions
*/

int			main(int argc, char **argv)
{
  MsgBox		msgbox(argv[0]);
  Coordonate		coord1(3.1, 4.5 , 5.2);
  Coordonate		coord2(3.1, 4.5 , 5.2);
  Coordonate		coord3(3.1, 4.6 , 5.2);


  MSG(coord1);
  if (coord1 == coord2)
    {
      MSG("good");
    }
  else
    {
      MSG("False");
    }
  if (coord1 == coord3)
    {
      MSG("False");
    }
  else
    {
      MSG("good");
    }
  return (0);
}
