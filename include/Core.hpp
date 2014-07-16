//
// Core.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sun Jun  1 01:42:07 2014 vaur
// Last update Wed Jul 16 17:50:07 2014 vaur
//

#ifndef		CORE_H
# define	CORE_H

/** \file Core.hpp
 * Define Core class. The Core of the raytracer
 */

/*
** Include
*/

# include	"Config.hpp"
# include	"ICore.hpp"
# include	"MsgBox.hpp"

/*
** Class
*/

/**
 * Core of the Raytracer
 *
 * This class will load Config and act accordingly
 * @done 01/06/2014 add config class
 */

class		Core : public ICore
{
public:

  //ctor & dtor
  Core(int argc, char **argv);
  ~Core();

  int		run();

private:

  void		testNb(int nb);
  void		testOk();
  void		testNotOk();

  void		test1();
  void		test2();
  void		test3();
  void		test4();
  void		test5();
  void		test6();
  void		test7();

  void		test8();
  void		test9();
  void		test10();
  void		test11();


  MsgBox	msgbox;
  Config	_conf;
};

#endif      /* !CORE_H_ */
