//
// IConfig.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 07:44:24 2014 vaur
// Last update Fri Jun  6 08:44:12 2014 vaur
//

#ifndef		ICONFIG_H
# define	ICONFIG_H

/*
** Class
*/

/**
 * Interface for Config class for raytracer
 */

class		IConfig
{
public:

  //dtor
  virtual	~IConfig(){};

  virtual void	setScene(int i, char **argv);
};

#endif      /* !ICONFIG_H_ */
