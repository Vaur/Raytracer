//
// MsgBox.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 24 13:44:59 2014 vaur
// Last update Sat May 31 02:19:40 2014 vaur
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

MsgBox			&MsgBox::decorateIn()
{
  DecorateBracket	decorate;
  std::string		mode_str;

  mode_str = ModeToString();

  decorate << _progname;
  decorate << mode_str;

  *this << _progname << " " << mode_str << " ";
  return (*this);
}

MsgBox			&MsgBox::decorateIn(const char *func, int line)
{
  DecorateBracket	decorate;
  std::string		mode_str;
  std::string		func_str;
  std::string		line_str;

  mode_str = ModeToString();
  func_str = func;
  line_str = line;

  decorate << _progname;
  decorate << mode_str;
  decorate << func_str;
  decorate << line_str;

  *this << _progname << " " << mode_str << " " << func_str << " " << line_str << " ";
  return (*this);
}

void			MsgBox::decorateOut()
{
  std::cout << std::endl;
  // if (_log_on == true)

}

/*
**
** Private
**
*/

std::string				MsgBox::ModeToString()
{
  DecorateBracket			decorate;
  std::map<MsgBox::t_mode, std::string>	map_mode;
  std::string				ret;

  map_mode[MsgBox::ERROR] = "error";
  map_mode[MsgBox::INFO] = "info";
  map_mode[MsgBox::WARNING] = "warning";
  map_mode[MsgBox::DEBUG] = "debug";

  ret = map_mode[this->_mode];
  return (ret);
}
