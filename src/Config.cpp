//
// Config.cpp<2> for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 07:49:30 2014 vaur
// Last update Mon Jun 23 13:45:38 2014 vaur
//


/** \file Config.cpp
 * Provide functions for Config class
 */

/*
** Include
*/

#include	"Config.hpp"

/*
** CTOR
*/

/**
 * Constructor receive the same arguments as the main, and give it to the Args class that will parse the1m
 */

Config::Config(int argc, char **argv, MsgBox &msgbox)
{
  (void)argc;
  (void)argv;
  msgbox.msg() << "Loading Configuration";
}

/*
** DTOR
*/

Config::~Config()
{
}
