//
// MsgBox.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Sat May 24 13:44:59 2014 vaur
// Last update Mon Jun 23 14:13:53 2014 vaur
//

/** \file MsgBox.cpp
 * Functions for class MsgBox
 */

/*
** Include
*/

#include	<map>
#include	<sstream>
#include	"DecorateBracket.hpp"
#include	"MsgBox.hpp"
#include	"StringColorise.hpp"

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
  this->_colorEnabled = true;
  this->_debugEnabled = true;
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
 * Return a MsgHandler that will get the messages and return them to the MsgBox
 */

MsgBox::MsgHandler	MsgBox::msg()
{
  MsgHandler		handler(*this);
  return (handler);
}

/** Switch the mode of the MsgBox and return a MsgHandler that will take care of the message */
MsgBox::MsgHandler	MsgBox::msg(MsgBox::t_mode mode)
{
  MsgHandler		handler(*this);

  setMode(mode);
  return (handler);
}


/** Return a MsgHandler that will get the messages and return them to the MsgBox
 *  MsgHandler receive in CTOR addtionnal information
 *
 */

MsgBox::MsgHandler	MsgBox::msg(const char *func, int line)
{
  // if (_debugEnabled == true)
    MsgHandler		handler(*this, func, line);
  // else
    // MsgHandler		handler(*this);
  return (handler);
}

/**
 * Switch the mode of the MsgBox and return a MsgHandler that will take care of the message
 * MsgHandler receive in CTOR addtionnal information about the context of the call
 */

MsgBox::MsgHandler	MsgBox::msg(const char *func, int line, MsgBox::t_mode mode)
{
  // if (_debugEnabled == true)
    MsgHandler		handler(*this, func, line);
  // else
  //   MsgHandler		handler(*this);

  setMode(mode);
  return (handler);
}

/*
**
** Private
**
*/

/**
 * Decoration that is put before the message to display
 * @return reference to MsgBox object for operator overload.
 */

MsgBox			&MsgBox::decorateIn()
{
  DecorateBracket	decorate;
  std::string		mode_str;
  std::string		progname_str;

  mode_str = ModeToString();
  progname_str = _progname;

  colorise_string(progname_str);
  colorise_string(mode_str);

  decorate << progname_str;
  decorate << mode_str;

  *this << progname_str << " " << mode_str << "\t";
  return (*this);
}

/**
 * \copydoc decorateIn
 * @param[in] tmp_mode	temporary mode in which the messgae is displayed
 *
 * display a message with a temporary mode in release mode
 */

MsgBox			&MsgBox::decorateIn(MsgBox::t_mode tmp_mode)
{
  MsgBox::t_mode	bk_mode;

  bk_mode = this->_mode;
  this->_mode = tmp_mode;
  decorateIn();
  this->_mode = bk_mode;
  return (*this);
}

/**
 * \copydoc decorateIn
 * @param[in] func the name of the function where MsgBox is called
 * @param[in] line the line where MsgBox is called
 *
 * Both parameters are defined by compilator.
 * This function is called when program is compiled in debug mode \see MSG
 * @done 01/06/2014: line is now displayed properly
 */

MsgBox			&MsgBox::decorateIn(const char *func, int line)
{
  DecorateBracket	decorate;
  std::string		mode_str;
  std::string		func_str;
  std::stringstream	line_strstream;
  std::string		line_str;
  std::string		progname_str;

  mode_str = ModeToString();
  func_str = func;
  line_strstream << line;
  line_str = line_strstream.str();
  progname_str = _progname;

  colorise_string(progname_str);
  colorise_string(mode_str);
  colorise_string(func_str);
  colorise_string(line_str);

  decorate << progname_str;
  decorate << mode_str;
  decorate << func_str;
  decorate << line_str;

  // std::cout << colorise_string(progname_str) << " " <<  colorise_string(mode_str) << "\t";
  // std::cout << colorise_string(func_str) << "\t" << colorise_string(line_str) << " ";

  std::cout << progname_str << " " <<  mode_str << "\t";
  std::cout << func_str << "\t" << line_str << " ";

  return (*this);
}

/**
 * \copydoc decorateIn
 * @param[in] tmp_mode	temporary mode in which the messgae is displayed
 * @param[in] func	the name of the function where MsgBox is called
 * @param[in] line	the line where MsgBox is called
 *
 * display a message with a temporary mode in debug mode
 *
 * as decorateIn(const char *func, int line) func and line are defined by compilator.
 * This function is called when program is compiled in debug mode \see MSG
 */

MsgBox			&MsgBox::decorateIn(MsgBox::t_mode tmp_mode, const char *func, int line)
{
  MsgBox::t_mode	bk_mode;

  bk_mode = this->_mode;
  this->_mode = tmp_mode;
  decorateIn(func, line);
  this->_mode = bk_mode;
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

/**
 * @param[in] str	take a string and colorize it according to msgmode
 * @return		return a reference to that string
 */

std::string						&MsgBox::colorise_string(std::string &str)
{
  StringColorise					coloriser;
  std::map<MsgBox::t_mode, StringColorise::e_Color>	map_mode;

  map_mode[MsgBox::ERROR] = StringColorise::RED;
  map_mode[MsgBox::INFO] = StringColorise::GREEN;
  map_mode[MsgBox::WARNING] = StringColorise::MAGENTA;
  map_mode[MsgBox::DEBUG] = StringColorise::YELLOW;

  if (_colorEnabled == true)
    return (coloriser.colorise(map_mode[this->_mode], str));
  return (str);
}
