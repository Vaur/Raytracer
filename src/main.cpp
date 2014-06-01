//
// main.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 23 23:01:22 2014 vaur
// Last update Sun Jun  1 02:02:06 2014 vaur
//

/**
 *\mainpage Raytracer by Vaur

 * The goal of this project is to make a raytracer. A program that takes a scene, either from a file conf or from a user defined scene.
 * And to create an 3D image out of it.
 *
 * This project was started the 25 may 2014. There is, at the moment (31 may 2014) only me (Vaur), working on this project.
 *
 * Since a lot of features a going to be implemented in this project. I dont expect to finish it quickly.
 * I will try my best to not give it up at some point.
 *
 * If you read this, dont hesitate to send me an email at vaur.geek@gmail.com or whatever email I'll use in the future.
 * (documentation will propably be updated in case of changement).
*/

/*
** Include
*/

#include	"Core.hpp"

/*
** Functions
*/

int	main(int argc, char **argv)
{
  Core	core(argc, argv);

  return (core.run());
}
