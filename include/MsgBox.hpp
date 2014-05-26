//
// MsgBox.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri May 23 23:08:47 2014 vaur
// Last update Mon May 26 16:40:55 2014 vaur
//

#ifndef		MSGBOX_H
# define	MSGBOX_H

/*
** Include
*/


# include	<iostream>

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
      DISPLAY,
      INFO,
      WARNING
    };


  //ctor & dtor
  MsgBox(const std::string &progname);
  ~MsgBox();

  //setter
  void			setMode(t_mode mode);

  template <class T>
  MsgBox	&operator<<(const T &msg)
  {
    std::cout << _progname << " ";
    std::cout << msg << std::endl;;
    return (*this);
  }

private:
  MsgBox::t_mode	_mode;
  std::string		_progname;
};

#endif      /* !MSGBOX_H_ */
