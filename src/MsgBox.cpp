//
// MsgBox.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 24 13:44:59 2014 vaur
// Last update Mon May 26 16:41:26 2014 vaur
//

/*
** Include
*/

#include	"MsgBox.hpp"

/*
** Functions
*/

/*
** CTOR
*/

MsgBox::MsgBox(const std::string &progname)
{
  this->_mode = MsgBox::INFO;
  this->_progname = progname;
}

/*
** DTOR
*/

MsgBox::~MsgBox()
{
}

/*
** Setter
*/

void		MsgBox::setMode(MsgBox::t_mode mode)
{
  this->_mode = mode;
}
