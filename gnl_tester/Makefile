SRCS :=			$(addprefix ../, get_next_line.c \
				get_next_line_utils.c)

SRCS_BONUS :=	$(addprefix ../, get_next_line_bonus.c \
				get_next_line_utils_bonus.c)

SLEEP := 0

MAIN :=			mandatory/main.c

MAIN_B :=		bonus/main.c

Yellow = \033[0;33m
PURPLE = \033[0;35m
Color_Off = \033[0m

all:
	@clear
	@echo "$(PURPLE)MANDATORY$(Color_Off)"
	@echo -n "$(Yellow)#### NOT DEFINED BUFFER_SIZE ########$(Color_Off)"
	@cc -Wall -Wextra -Werror $(SRCS) $(MAIN)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo -n "$(Yellow)#### BUFFER_SIZE = 0 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=0 $(SRCS) $(MAIN)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo -n "$(Yellow)#### BUFFER_SIZE = 1 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 $(SRCS) $(MAIN)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo -n "$(Yellow)#### BUFFER_SIZE = 10 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=10 $(SRCS) $(MAIN)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo -n "$(Yellow)#### BUFFER_SIZE = 1000 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=1000 $(SRCS) $(MAIN)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo -n "$(Yellow)#### BUFFER_SIZE = 10000 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=10000 $(SRCS) $(MAIN)
	@./a.out


bonus:
	@clear
	@echo "$(PURPLE)BONUS$(Color_Off)"
	@echo "$(Yellow)#### NOT DEFINED BUFFER_SIZE ########$(Color_Off)"
	@cc -Wall -Wextra -Werror $(SRCS_BONUS) $(MAIN_B)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo "$(Yellow)#### BUFFER_SIZE = 0 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=0 $(SRCS_BONUS) $(MAIN_B)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo "$(Yellow)#### BUFFER_SIZE = 1 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 $(SRCS_BONUS) $(MAIN_B)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo "$(Yellow)#### BUFFER_SIZE = 10 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=10 $(SRCS_BONUS) $(MAIN_B)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo "$(Yellow)#### BUFFER_SIZE = 1000 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=1000 $(SRCS_BONUS) $(MAIN_B)
	@./a.out
	@sleep $(SLEEP)
	@echo ""
	@echo "$(Yellow)#### BUFFER_SIZE = 10000 ############$(Color_Off)"
	@cc -Wall -Wextra -Werror -D BUFFER_SIZE=10000 $(SRCS_BONUS) $(MAIN_B)
	@./a.out


.PHONY: all bonus