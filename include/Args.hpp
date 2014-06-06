//
// Args.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 19:29:39 2014 vaur
// Last update Fri Jun  6 08:31:52 2014 vaur
//

#ifndef		ARGS_H
# define	ARGS_H

/*
** Include
*/

# include	"IConfig.hpp"

/*
** Class
*/

/**
 * Args is a parser for a program arguments.
 * What ever the Implementation of IConfig may be.
 * To add an argument to parse you use learn.
*/

class Args
{
public:

  //ctor & dtor
  Args(IConfig &conf);
  ~Args();

  void		learn(const std::string &args, const std::string &desc, );
  void		parse();

private:
  IConfig	*_conf;
};

#endif      /* !ARGS_H_ */
