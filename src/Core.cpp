//
// Core.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 01:57:37 2014 vaur
// Last update Wed Jul 16 16:55:03 2014 vaur
//

/** \file Core.cpp
 * Functions for the Core class. The Core of the raytracer
 */

/*
** Include
*/

#include	<cstdlib>
#include	"Core.hpp"
#include	"Coordinate.hpp"

/*
** Functions
*/

/*
** CTOR
*/

/**
 * Constructor receive the same arguments a the main and feed it to Config
 */

Core::Core(int argc, char **argv) : msgbox(argv[0]), _conf(argc, argv, msgbox)
{
}

Core::~Core()
{
}

void		Core::test1()
{
  Coordinate	coord(1, 1, 1);
  Coordinate	coord2(1, 1, 1);

  msgbox.msg(CONTEXT, MsgBox::INFO) << "--- test 1 ---";
  if (coord == coord2)
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- ok";
  else
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- not ok";
}

void		Core::test2()
{
  Coordinate	coord(1, -1, 1);
  Coordinate	coord2(1, 1, 1);

  msgbox.msg(CONTEXT, MsgBox::INFO) << "--- test 2 ---";
  if (coord != coord2)
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- ok";
  else
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- not ok";
}

void		Core::test3()
{
  Coordinate	coord(1, 1, -1);
  Coordinate	coord2(1, 1, 1);

  msgbox.msg(CONTEXT, MsgBox::INFO) << "--- test 3 ---";
  if (coord != coord2)
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- ok";
  else
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- not ok";
}

void		Core::test4()
{
  Coordinate	coord(-1, 1, 1);
  Coordinate	coord2(1, 1, 1);

  msgbox.msg(CONTEXT, MsgBox::INFO) << "--- test 4 ---";
  if (coord != coord2)
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- ok";
  else
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- not ok";
}

void		Core::test5()
{
  Coordinate	coord2(1, -1, 1);
  Coordinate	coord(1, 1, 1);

  msgbox.msg(CONTEXT, MsgBox::INFO) << "--- test 5 ---";
  if (coord != coord2)
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- ok";
  else
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- not ok";
}

void		Core::test6()
{
  Coordinate	coord2(1, 1, -1);
  Coordinate	coord(1, 1, 1);

  msgbox.msg(CONTEXT, MsgBox::INFO) << "--- test 6 ---";
  if (coord != coord2)
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- ok";
  else
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- not ok";
}

void		Core::test7()
{
  Coordinate	coord2(-1, 1, 1);
  Coordinate	coord(1, 1, 1);

  msgbox.msg(CONTEXT, MsgBox::INFO) << "--- test 7 ---";
  if (coord != coord2)
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- ok";
  else
    msgbox.msg(CONTEXT, MsgBox::INFO) << "- not ok";
}

/**
 * @return	value is either `EXIT_FAILURE` or `EXIT_SUCCESS`
 */

int		Core::run()
{
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();

  return (EXIT_SUCCESS);
}
