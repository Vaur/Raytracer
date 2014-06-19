//
// MsgHandler.cpp for raytracer in /home/vaur/epitech/inprogress/B-VPP-042/vpp_raytracer
//
// Made by vaur
// Login   <vaur@epitech.net>
//
// Started on  Tue Jun 10 20:42:12 2014 vaur
// Last update Tue Jun 10 22:33:21 2014 vaur
//

/**
 * \file MsgHandler.cpp define function for class MsgHandler inside MsgBox
 */

/*
** Include
*/

#include	"MsgBox.hpp"

/*
** Functions
*/

/**
 * Constructor for MsgHandler.
 * Store msgbox and call `MsgBox::decorateIn()`.
 */

MsgBox::MsgHandler::MsgHandler(MsgBox &msgbox)
{
  _msgbox = &msgbox;
  _msgbox->decorateIn();
}

/**
 * Constructor for MsgHandler.
 * Store msgbox and call `MsgBox::decorateIn(func, line).`
 *
 * @param[in]	func	name of the function that called the MsgBox
 * @param[in]	func	line where the MsgBox was called
 */

MsgBox::MsgHandler::MsgHandler(MsgBox &msgbox, const char *func, int line)
{
  _msgbox = &msgbox;
  _msgbox->decorateIn(func, line);
}

/**
 * Destructor for MsgHandler call `MsgBox::decorateOut()`.
 */

MsgBox::MsgHandler::~MsgHandler()
{
  _msgbox->decorateOut();
}
