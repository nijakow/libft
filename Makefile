# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 10:08:48 by enijakow          #+#    #+#              #
#    Updated: 2021/12/09 13:37:55 by enijakow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = \
libft.h

SOURCES = \
ft_any_assign_floating.c \
ft_any_assign_integer.c \
ft_any_assign_nil.c \
ft_any_assign_object.c \
ft_any_create.c \
ft_any_destroy.c \
ft_any_floating.c \
ft_any_integer.c \
ft_any_nil.c \
ft_any_object.c \
ft_cstr_member.c \
ft_cstr_strlen.c \
ft_memory_alloc.c \
ft_memory_copy.c \
ft_memory_duplicate.c \
ft_memory_realloc.c \
ft_newdel.c \
ft_object.c \
ft_oops.c \
ft_reader_advance.c \
ft_reader_has_next.c \
ft_reader_peek.c \
ft_reader_read_int.c \
ft_reader_read_line.c \
ft_reader_skip.c \
ft_reader_skip_whitespace.c \
ft_string_append.c \
ft_string_as_writer.c \
ft_string_destroy.c \
ft_string_index.c \
ft_string_io.c \
ft_string_length.c \
ft_string.c \
ft_type.c \
ft_vector_append.c \
ft_vector_copy.c \
ft_vector_create.c \
ft_vector_destroy.c \
ft_vector_index.c \
ft_vector_length.c \
ft_vector_new.c \
ft_writer_destroy.c \
ft_writer_new_fd.c \
ft_writer_new_string.c \
ft_writer_write_char.c \
ft_writer_write_cstr.c \
ft_writer_write_int_base.c \
ft_writer_write_int.c \
ft_writer_write_string.c \
ft_writer_write_ulong_base.c \
ft_writer.c

BONUS_SOURCES =

CFLAGS = -Wall -Wextra -Werror


OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
BONUS_OBJECTS = $(patsubst %.c, %.o, $(BONUS_SOURCES))


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	ar rc $(NAME) $(OBJECTS) $(BONUS_OBJECTS)

all: $(NAME)

clean:
	- $(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	- $(RM) $(NAME)

re: fclean all

norm:
	norminette $(SOURCES) $(HEADERS)
