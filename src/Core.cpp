//
// Core.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 01:57:37 2014 vaur
// Last update Sun Jun  1 02:09:53 2014 vaur
//

/** \file Core.cpp
 * Functions for the Core class. The Core of the raytracer
 */

/*
** Include
*/

#include	<cstdlib>
#include	"Core.hpp"

/*
** Functions
*/

/*
** CTOR
*/

/**
 * Constructor receive the same arguments a the main and feed it to Config
 */

Core::Core(int argc, char **argv) : msgbox(argv[0])
{
  MSG("");
}

Core::~Core()
{
}

/**
 * @return	value is either `EXIT_FAILURE` or `EXIT_SUCCESS`
 */

int	Core::run()
{
  MSG("Starting");
  return (EXIT_SUCCESS);
}
