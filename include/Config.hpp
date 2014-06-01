//
// Config.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 07:44:34 2014 vaur
// Last update Sun Jun  1 08:03:50 2014 vaur
//

#ifndef		CONFIG_H
# define	CONFIG_H

/** \file Config.hpp
 * Define Config class. The Config storage for raytracer
 * @todo add Args class that will parse the arguments and set Config accordingly
 */

/*
** Include
*/

# include	"IConfig.hpp"
# include	"MsgBox.hpp"

/*
** Class
*/

/**
 * Store the configuration of the raytracer
 */

class		Config : public IConfig
{
public:

  //ctor & dtor
  Config(int argc, char **argv, MsgBox &msgbox);
  ~Config();
};

#endif      /* !CONFIG_H_ */
