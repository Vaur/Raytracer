//
// MsgBox.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 24 13:44:59 2014 vaur
// Last update Sun Jun  1 00:27:22 2014 vaur
//

/** \file MsgBox.cpp
 * Functions for class MsgBox
 */

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

/**
 * Constructor takes as parameter the name of the program.
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

/**
 * Set the mode for the messages that are coming.
 */

void		MsgBox::setMode(MsgBox::t_mode mode)
{
  this->_mode = mode;
}


/**
 * Decoration that is put before the message to display
 * @return reference to MsgBox object for operator overload.
 */

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

/**
 * \copydoc decorateIn
 * @param[in] func the name of the function where MsgBox is called
 * @param[in] line the line where MsgBox is called
 * Both parameters are defined by compilator.
 * This function is called when program is compiled in debug mode \see MSG
 */

MsgBox			&MsgBox::decorateIn(const char *func, int line)
{
  DecorateBracket	decorate;
  std::string		mode_str;
  std::string		func_str;
  std::string		line_str;
  std::string		progname_str;

  mode_str = ModeToString();
  func_str = func;
  line_str = line;
  progname_str = _progname;

  decorate << progname_str;
  decorate << mode_str;
  decorate << func_str;
  decorate << line_str;

  *this << progname_str << " " << mode_str << " " << func_str << " " << line_str << " ";
  return (*this);
}

/**
 * Decoration that is put after the message to display, usually `std::endl` but might be subject to change.
 */

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

/**
 * Return a `std::string` that describe the current mode.
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
