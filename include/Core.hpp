//
// Core.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 01:42:07 2014 vaur
// Last update Sun Jun  1 02:08:57 2014 vaur
//

#ifndef		CORE_H
# define	CORE_H

/** \file Core.hpp
 * Define Core class. The Core of the raytracer
 */

/*
** Include
*/

// # include	"Config.hpp"
# include	"ICore.hpp"
# include	"MsgBox.hpp"

/*
** Class
*/

/**
 * Core of the Raytracer
 *
 * This class will load Config and act accordingly
 * @todo add config class
 */

class		Core
{
public:

  //ctor & dtor
  Core(int argc, char **argv);
  ~Core();

  int		run();

private:
  MsgBox	msgbox;
  // Config	_conf;
};

#endif      /* !CORE_H_ */
