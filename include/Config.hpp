//
// Config.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 07:44:34 2014 vaur
// Last update Fri Jun  6 16:25:53 2014 vaur
//

#ifndef		CONFIG_H
# define	CONFIG_H

/** \file Config.hpp
 * Define Config class. The Config storage for raytracer
 * @todo add Args class that will parse the arguments and set Config accordingly
 * @todo put back the inheritance of IConfig
 */

/*
** Include
*/

// # include	"IConfig.hpp"
# include	"MsgBox.hpp"

/*
** Class
*/

/**
 * Store the configuration of the raytracer
 */

class		Config // : public IConfig
{
public:

  //ctor & dtor
  Config(int argc, char **argv, MsgBox &msgbox);
  ~Config();
};

#endif      /* !CONFIG_H_ */
