//
// StringColorise.hpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Fri Jun  6 16:55:20 2014 vaur
// Last update Fri Jun  6 19:17:33 2014 vaur
//

#ifndef		STRINGCOLORISE_H
# define	STRINGCOLORISE_H

/*
** Include
*/

# include	<map>
# include	<string>

/*
** Class
*/

/**
 * StringColorise is an utility class that add color to a string
 */

class		StringColorise
{
public:
  enum		e_Color
    {
      BLUE,
      CYAN,
      GREEN,
      MAGENTA,
      NORMAL,
      RED,
      WHITE,
      YELLOW,
    };

  //ctor & dtor
  StringColorise();
  ~StringColorise();

  std::string	&colorise(e_Color color, std::string &str) const;

private:
  std::map<e_Color, std::string>	_map_color;
};

#endif      /* !STRINGCOLORISE_H_ */
