//
// MsgBox.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 23 23:08:47 2014 vaur
// Last update Mon Jun 23 14:31:42 2014 vaur
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
** Class
*/

/*
** Define
*/

/** add some context to the message such as the function that call the message and the line */
# define	CONTEXT	__func__, __LINE__

/**
 * MsgBox is an object to handle messages. Instead of doing `std::cout << msg << std::endl;` call `MSG(msg);`.
 * MsgBox will add severals informations depending on if the program is in debug mode or release mode.
 * If a logfile is set, it will also write inside the file, without color.
 *
 * @warning function like operator<<(), decorateIn(), decorateOut(), should not be used without MSG macro.
 * Unless you know what you're doing.
 *
 * @done MsgBox create now a single object when MsgBox::msg() is called. On creation that object display before the message some context. then
 * MsgBox will be returned by a wrapper that will create the Object
 * @todo respet RFC 5424 about different type of msg and maybe have an object that send info back to syslog
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
   * MsgHandler is a small class that receive the message and feed it to the message box.
   * When it's created it call MsgBox::decorateIn() and MsgBox::decorateOut() when it is destroyed
   */

  friend class		MsgHandler;
  class			MsgHandler
  {
  public:

    //ctor & dtor
    MsgHandler(MsgBox &msgbox);
    MsgHandler(MsgBox &msgbox, const char *func, int line);
    ~MsgHandler();

    /** operator overload that feed every msg back to MsgBox */
    template <class T>
    MsgHandler		&operator<<(const T msg)
    {
      *_msgbox << msg;
      return (*this);
    }

  private:
    MsgBox		*_msgbox;
  };

  MsgHandler		msg();
  MsgHandler		msg(t_mode);

  MsgHandler		msg(const char *func, int line);
  MsgHandler		msg(const char *func, int line, t_mode);

private:


  /**
   * Templated operator overload, takes everything and put it into std::cout
   * @todo if msg mode is error instead of output on `std::cout` output on `std::cerr`
   * @todo if log is enabled also redirect msg into stream to logfile.
   */

  template <class T>
  MsgBox		&operator<<(const T msg)
  {
    if (_mode != DEBUG || _debugEnabled == true)
      std::cout << msg;
    return (*this);
  }

  //decoration
  MsgBox		&decorateIn();
  MsgBox		&decorateIn(t_mode tmp_mode);
  MsgBox		&decorateIn(t_mode tmp_mode, const char *func, int line);
  MsgBox		&decorateIn(const char *func, int line);
  void			decorateOut();

  std::string		ModeToString();
  std::string		&colorise_string(std::string &str);

  /** Mode of messages to display. */
  MsgBox::t_mode	_mode;

  /** Program name given as argument to constructor. */
  std::string		_progname;

  /** Enable or disable color */
  bool			_colorEnabled;

  /** Enable or disable debug */
  bool			_debugEnabled;
};

#endif      /* !MSGBOX_H_ */
