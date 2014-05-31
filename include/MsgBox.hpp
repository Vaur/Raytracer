//
// MsgBox.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 23 23:08:47 2014 vaur
// Last update Fri May 30 18:05:39 2014 vaur
//

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

#  define	MSG(msg)	msgbox.decorateIn(__func__, __LINE__) << msg; msgbox.decorateOut()

# else

#  define	MSG(msg)	msgbox.decorateIn() << msg; msgbox.decorateOut()

# endif

/*
** Class
*/

class			MsgBox
{
public:

  //enum
  enum			t_mode
    {
      ERROR,
      DEBUG,
      INFO,
      WARNING
    };

  //ctor & dtor
  MsgBox(const std::string &progname);
  ~MsgBox();

  //setter
  void			setMode(t_mode mode);

  template <class T>
  MsgBox		&operator<<(const T &msg)
  {
    std::cout << msg;
    return (*this);
  }

  //decoration of msg;
  MsgBox		&decorateIn();
  MsgBox		&decorateIn(const char *func, int line);

  void			decorateOut();

private:
  std::string		ModeToString();

  MsgBox::t_mode	_mode;
  std::string		_progname;
};

#endif      /* !MSGBOX_H_ */
