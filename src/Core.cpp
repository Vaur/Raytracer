//
// Core.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 01:57:37 2014 vaur
// Last update Wed Jul 16 17:52:30 2014 vaur
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

void	Core::testNb(int nb)
{
  msgbox.msg(CONTEXT, MsgBox::INFO) << "--- test " << nb << " ---";
}

void	Core::testOk()
{
  msgbox.msg(CONTEXT, MsgBox::INFO) << "ok";
}

void	Core::testNotOk()
{
  msgbox.msg(CONTEXT, MsgBox::ERROR) << "not ok";
}


void		Core::test1()
{
  Coordinate	coord(1, 1, 1);
  Coordinate	coord2(1, 1, 1);

  testNb(1);
  if (coord == coord2)
    testOk();
  else
    testNotOk();
}

void		Core::test2()
{
  Coordinate	coord(1, -1, 1);
  Coordinate	coord2(1, 1, 1);

  testNb(2);
  if (coord != coord2)
    testOk();
  else
    testNotOk();
}

void		Core::test3()
{
  Coordinate	coord(1, 1, -1);
  Coordinate	coord2(1, 1, 1);

  testNb(3);
  if (coord != coord2)
    testOk();
  else
    testNotOk();
}

void		Core::test4()
{
  Coordinate	coord(-1, 1, 1);
  Coordinate	coord2(1, 1, 1);

  testNb(4);
  if (coord != coord2)
    testOk();
  else
    testNotOk();
}

void		Core::test5()
{
  Coordinate	coord2(1, -1, 1);
  Coordinate	coord(1, 1, 1);

  testNb(5);
  if (coord != coord2)
    testOk();
  else
    testNotOk();
}

void		Core::test6()
{
  Coordinate	coord2(1, 1, -1);
  Coordinate	coord(1, 1, 1);

  testNb(6);
  if (coord != coord2)
    testOk();
  else
    testNotOk();
}

void		Core::test7()
{
  Coordinate	coord2(-1, 1, 1);
  Coordinate	coord(1, 1, 1);

  testNb(7);
  if (coord != coord2)
    testOk();
  else
    testNotOk();
}

/*
** Coordonates and i
*/

void		Core::test8()
{
  Coordinate	coord2(1, 2, 3);
  Coordinate	coord(2, 4, 6);

  testNb(8);
  if (coord == coord2 * 2)
    testOk();
  else
    testNotOk();
}

void		Core::test9()
{
  Coordinate	coord2(-1, -2, -3);
  Coordinate	coord(2, 4, 6);

  testNb(9);
  if (coord == coord2 * -2)
    testOk();
  else
    testNotOk();
}

void		Core::test10()
{
  Coordinate	coord2(1, 2, 3);
  Coordinate	coord(2, 4, 6);

  testNb(10);
  if (coord2 == coord / 2)
    testOk();
  else
    testNotOk();
}


void		Core::test11()
{
  Coordinate	coord2(1, 2, 3);
  Coordinate	coord(-2, -4, -6);

  testNb(11);
  if (coord2 == coord / -2)
    testOk();
  else
    testNotOk();
}


/**
 * @return	value is either `EXIT_FAILURE` or `EXIT_SUCCESS`
 */

int		Core::run()
{
  msgbox.msg(CONTEXT, MsgBox::INFO) << "Coordinate Comparaison";
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();

  msgbox.msg(CONTEXT, MsgBox::INFO) << "Calcul between coordinate and i";
  test8();
  test9();
  test10();
  test11();

  return (EXIT_SUCCESS);
}
