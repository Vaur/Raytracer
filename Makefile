##
## Makefile for my_cat in /home/devill_x/rendu/piscine_cpp_d06/ex00
##
## Made by Xavier Devilliers
## Login   <devill_x@epitech.net>
##
## Started on  Mon Jan 13 08:15:23 2014 Xavier Devilliers
## Last update Sun Jun  1 03:14:25 2014 vaur
##

########################################################################
##				Variable
########################################################################

##################
## 	debug

DEBUG=			yes
export DEBUG

INFO=			yes

##################
## 	detect system

HOSTTYPE=		${shell arch}
ARCH=			${HOSTTYPE}_arity

##################
## 	commande

AR=			ar rc
RM=			rm -f
CC=			g++

##################
## 	Flags

ifeq ($(DEBUG),yes)
CFLAGS +=		-ggdb -g3
CFLAGS +=		-DDEBUG_=1
else
CFLAGS +=		-o3
CFLAGS +=		-DDEBUG_=0
CFLAGS +=		-Werror
endif

CFLAGS += 		-Wextra -Wall
CFLAGS +=		-I include/

LDFLAGS +=

##################
## 	Src

NAME =			raytracer
BACKUP_NAME=		$(NAME)_backup.tar.gz

COM=			$(shell git log -n1 --format="%s")
VER =			$(shell git log -n1 --format="%h")
AUT=			$(shell git log -n1 --format="%cN")

ifeq ($(VER),exported)
	VER =		1.0
endif

D_SRC =			./src/
D_OBJ = 		./obj/
D_NAME =		./

SD_SRC=			$(shell cd $(D_SRC) && find . -type d | uniq)

SRC=			Coordonate.cpp		\
			Core.cpp		\
			DecorateBracket.cpp	\
			main.cpp		\
			MsgBox.cpp		\

OBJ =			$(SRC:.cpp=.o)

CSRC =			$(addprefix $(D_SRC),$(SRC))
COBJ =			$(addprefix $(D_OBJ),$(OBJ))
CNAME =			$(addprefix $(D_NAME),$(NAME))

##################
## 	display
##
##	simple fancy display

ifeq ($(DEBUG),yes)
C_IN=			\x1b[33m\033[1m
else
C_IN=			\x1b[32m\033[1m
endif
C_GRE=			\x1b[32m\033[1m
C_RED=			\e[0;31m\033[1m
C_YEL=			\x1b[33m\033[1m
C_OUT=			\033[0m
D_IN=			$(C_IN)==\t
D_OUT=			\t==$(C_OUT)

CO_P=			[$(C_YEL)...$(C_OUT)]
CO_O=			[$(C_GRE)OK$(C_OUT)]
CO_E=			[$(C_RED)Error$(C_OUT)]
E=			/bin/echo -e
SEP=			----------------------------------

########################################################################
##				Target
########################################################################

############################
##	compilation

all:			disp_init buildrepo $(NAME)
ifeq ($(INFO),yes)
			@$(E)  "$(D_IN)Commit by $(AUT)$(D_OUT)"
			@$(E)  "$(SEP)"
			@$(E)  "$(C_IN)- msg: $(C_OUT)$(COM)"
			@$(E)  "$(SEP)"
endif
ifeq ($(DEBUG),yes)
			@$(E)  "$(D_IN)DEBUG MODE\t$(D_OUT)"
endif
			@$(E)  "$(D_IN)$(NAME) ready for use$(D_OUT)"
			@$(E)  "$(SEP)"


##################
## 	Binary
##
## DO NOT MODIFY
## to add library when linkage, modify LDFLAGS variable

$(NAME):		$(COBJ)
			@$(E)  "$(D_IN)Compilation over$(D_OUT)"
			@rm -f error.log
			@$(E)  "$(D_IN)Linkage in progress$(D_OUT)"
			@$(CC) $(COBJ) -o $(CNAME) $(LDFLAGS)
			@$(E)  "$(D_IN)Linkage Over\t$(D_OUT)"

##################
## 	create Object

$(D_OBJ)%.o:		$(D_SRC)%.c
			@$(E) -n "$(C_IN)-$(C_OUT)$(CO_P)   Compiling $(C_IN)`echo $<| sed 's/src/ /g' | tr '/' '\t' `$(C_OUT)"
			@$(CC) $(CFLAGS) -c $< -o $@ 2> error.log && $(E) "\r$(C_IN)-$(C_OUT)$(CO_O)    Compiling $(C_IN)`echo $<| sed 's/src/ /g' | tr '/' '\t' `$(C_OUT)" || ($(E) "\r$(C_IN)-$(C_OUT)$(CO_E) Compiling $(C_IN)`echo $<| sed 's/src/ /g' | tr '/' '\t' `$(C_OUT)" && cat error.log && false)
			@cat error.log


$(D_OBJ)%.o:		$(D_SRC)%.cpp
			@$(E) -n "$(C_IN)-$(C_OUT)$(CO_P)   Compiling $(C_IN)`echo $<| sed 's/src/ /g' | tr '/' '\t' `$(C_OUT)"
			@$(CC) $(CFLAGS) -c $< -o $@ 2> error.log && $(E) "\r$(C_IN)-$(C_OUT)$(CO_O)    Compiling $(C_IN)`echo $<| sed 's/src/ /g' | tr '/' '\t' `$(C_OUT)" || ($(E) "\r$(C_IN)-$(C_OUT)$(CO_E) Compiling $(C_IN)`echo $<| sed 's/src/ /g' | tr '/' '\t' `$(C_OUT)" && cat error.log && false)
			@cat error.log

##################
## 	remove Object

clean:
			@$(E)  "$(D_IN)Cleaning .o\t$(D_OUT)"
			$(RM) $(COBJ)
			@$(E)  "$(SEP)"
##################
## 	remove Binary

fclean:			clean
			@$(E)  "$(D_IN)Deleting $(NAME)$(D_OUT)"
			@$(RM) $(CNAME)
			@$(RM) -r $(D_OBJ)
			@$(RM) -r doc/latex doc/html
			@find . -name '*~' -delete
			@find . -name '#*#' -delete
			@$(E)  "$(SEP)"

##################
##	remove and recompile

re:			fclean all

############################################
## 	utilities

##################
##	display

disp_init:
			@$(E)  "$(SEP)"
			@$(E)  "$(D_IN)$(NAME) by devill_x$(D_OUT)"
			@$(E)  "$(D_IN)Version: $(VER)$(D_OUT)"

##################
##  switch between modes

debug:
			@$(E) "$(D_IN)Switching from\t$(D_OUT)"
ifeq ($(DEBUG),yes)
			@$(E) "$(D_IN)Debug Mode\t$(D_OUT)"
			@sed -i -e '/(sed)/!s/DEBUG=			yes/DEBUG=			no/' Makefile >> Makefile
			@$(E) "$(D_IN)To: Normal Mode\t$(D_OUT)"
else
			@$(E) "$(D_IN) Normal Mode\t$(D_OUT)"
			@sed -i -e '/(sed)/!s/DEBUG=			no/DEBUG=			yes/' Makefile >> Makefile
			@$(E) "$(D_IN)To: Debug Mode\t$(D_OUT)"
endif
			@make --no-print-directory re

##################
##	build directories
##	for obj

buildrepo:
			@$(E)  "$(D_IN)Checking repository$(D_OUT)"
			@mkdir -p $(D_OBJ)
			@for dir in $(SD_SRC); \
			do \
			if [ ! -d "$(D_OBJ)$$dir" ];then \
				mkdir -p $(D_OBJ)$$dir; \
			fi \
			done

##################
##	commit

git:			fclean
			@$(E) "$(D_IN)Sending files\t$(D_OUT)"
			@$(E) "$(C_IN)-$(C_OUT) commit msg$(C_IN): $(C_OUT)"
			read msg && git commit -a -m "$$msg"


##################
##	Backup

backup:
			@$(E) "$(D_IN)Creating backup\t$(D_OUT)"
			@cd ../ && tar czf $(BACKUP_NAME) $(MAIN_DIR)
			@mv ../$(BACKUP_NAME) .
			@$(E) "$(D_IN)Backup successfully created$(D_OUT)"

##################
##	Documentation

doc:
			@$(E) "$(D_IN)Creating Documentation$(D_OUT)"
			@doxygen doc/Doxyfile
			@$(E) "$(D_IN)Documentation Generated$(D_OUT)"


##################
## 	.PHONY

.PHONY:			re clean fclean all fclean buildrepo disp_init git debug lib libclean libfclean backup doc
