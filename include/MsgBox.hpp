//
// MsgBox.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 23 23:08:47 2014 vaur
// Last update Fri Jun  6 19:56:23 2014 vaur
//

/** \file MsgBox.hpp
 * Define MsgBox class and Macro for easy use of that class
 * Currently support Decoration of msg with progname and message type in release mode
 * Debug mode adds information on function that calls the MsgBox and the line.
 * The line doesnt work as of 31 may 2014.
 */

#ifndef		MSGBOX_H
# define	MSGBOX_H

/*
** Include
*/

# include	<iostream>

/*
** Define
*/


# if		DEBUG_ == 1
/**
 *  Macro MSG if DEBUG_ (defined by Makefile) is set a 1
 *
 *  DEBUG_ == 1 means that the program is in debug mode and that more information should be displayed
 */

#  define	DEBUG(msg)	msgbox.decorateIn(MsgBox::DEBUG, __func__, __LINE__) << msg; msgbox.decorateOut()
#  define	ERROR(msg)	msgbox.decorateIn(MsgBox::ERROR, __func__, __LINE__) << msg; msgbox.decorateOut()
#  define	INFO(msg)	msgbox.decorateIn(MsgBox::INFO, __func__, __LINE__) << msg; msgbox.decorateOut()
#  define	MSG(msg)	msgbox.decorateIn(__func__, __LINE__) << msg; msgbox.decorateOut()
#  define	WARNING(msg)	msgbox.decorateIn(MsgBox::WARNING, __func__, __LINE__) << msg; msgbox.decorateOut()

# else

/**
 *  when program is in release mode, only display program name and type of information displayed
 */

#  define	DEBUG(msg)
#  define	ERROR(msg)	msgbox.decorateIn(MsgBox::ERROR) << msg; msgbox.decorateOut()
#  define	INFO(msg)	msgbox.decorateIn(MsgBox::INFO) << msg; msgbox.decorateOut()
#  define	MSG(msg)	msgbox.decorateIn() << msg; msgbox.decorateOut()
#  define	WARNING(msg)	msgbox.decorateIn(MsgBox::WARNING) << msg; msgbox.decorateOut()

# endif

/*
** Class
*/

/**
 * MsgBox is an object to handle messages. Instead of doing `std::cout << msg << std::endl;` call `MSG(msg);`.
 * MsgBox will add severals informations depending on if the program is in debug mode or release mode.
 * If a logfile is set, it will also write inside the file, without color.
 * @warning function like operator<<(), decorateIn(), decorateOut(), should not be used without MSG macro.
 * Unless you know what you're doing.
 */

class			MsgBox
{
public:

  /**
   * Describe the mode of the message that is or will be displayed.
   */

  enum			t_mode
    {
      DEBUG,
      ERROR,
      INFO,
      WARNING
    };

  //ctor & dtor
  MsgBox(const std::string &progname);
  ~MsgBox();

  //setter
  void			setMode(t_mode mode);

  /**
   * Templated operator overload, takes everything and put it into std::cout
   * @todo if msg mode is error instead of output on `std::cout` output on `std::cerr`
   * @todo if log is enabled also redirect msg into stream to logfile.
   */

  template <class T>
  MsgBox		&operator<<(const T &msg)
  {
    std::cout << msg;
    return (*this);
  }

  //decoration
  MsgBox		&decorateIn();
  MsgBox		&decorateIn(t_mode tmp_mode);
  MsgBox		&decorateIn(t_mode tmp_mode, const char *func, int line);
  MsgBox		&decorateIn(const char *func, int line);
  void			decorateOut();

private:
  std::string		ModeToString();
  std::string		&colorise_string(std::string &str);

  /** Mode of messages to display. */
  MsgBox::t_mode	_mode;

  /** Program name given as argument to constructor. */
  std::string		_progname;

  /** Enable or disable color */
  bool			_colorEnabled;
};

#endif      /* !MSGBOX_H_ */
