//
// MsgBox.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 24 13:44:59 2014 vaur
// Last update Fri May 30 17:08:01 2014 vaur
//

/*
** Include
*/

#include	<map>
#include	"DecorateBracket.hpp"
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

MsgBox			&MsgBox::decorate()
{
  DecorateBracket	decorate;
  decorate << _progname;
  *this << _progname;
  return (*this);
}

/*
**
** Private
**
*/

// std::string			MsgBox::ModeToString()
// {
//   std::map<t_type, std::string>	map_mode;
//   std::string			ret;

//   map_mode[ERROR] = "ERROR";
//   map_mode[INFO] = "INFO";
//   map_mode[WARNING] = "WARNING";
//   map_mode[DEBUG] = "DEBUG";

//   ret << DecorateBracket  << map_mode[this->_mode];
//   return (ret);
// }
