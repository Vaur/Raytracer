##
## Makefile for my_cat in /home/devill_x/rendu/piscine_cpp_d06/ex00
##
## Made by Xavier Devilliers
## Login   <devill_x@epitech.net>
##
## Started on  Mon Jan 13 08:15:23 2014 Xavier Devilliers
## Last update Wed Jul 16 14:24:55 2014 vaur
##

########################################################################
##				User's  Variable
########################################################################

##################
## 	Makeflags

DEBUG=			yes
export DEBUG

INFO=			yes



##################
## 	Flags

CFLAGS +=		-I include

LDFLAGS +=

##################
## 	Src

NAME =			raytracer

D_SRC =			./src/
D_OBJ = 		./obj/
D_NAME =		./

SRC=			Config.cpp		\
			Coordinate.cpp		\
			Core.cpp		\
			DecorateBracket.cpp	\
			main.cpp		\
			MsgBox.cpp		\
			MsgHandler.cpp		\
			StringColorise.cpp

##################
## 	lib

LDIR=			NONE

include			.libmake.mk
