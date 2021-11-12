/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:53:54 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/12 16:43:38 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define LIBFT_DEBUG

# include <stdio.h>
# include <stdbool.h>
# include <stddef.h>
# include <unistd.h>
# include <limits.h>

void					ft_oops(const char *msg);

typedef void			(*t_destructor)(void*);
typedef bool			(*t_char_predicate)(char);

bool					ft_cstr_member(char *str, char member);
size_t					ft_cstr_strlen(char *c_str);

struct s_memory_alloc_ship
{
	size_t	size;
	char	data[0];
};

void					*ft_memory_alloc(size_t size);
void					*ft_memory_unitalloc(unsigned int count,
							size_t type_size);
void					ft_memory_free(void *ptr);

void					*ft_memory_realloc(void *ptr, size_t new_size);
bool					ft_memory_realloc_inplace(void **ptr, size_t new_size);

void					ft_memory_copy(void *dst, void *src, size_t byte_count);
void					*ft_memory_duplicate(void *self, size_t size);

struct s_type
{
	bool			was_initialized;
	struct s_type	*next;
	char			*name;
	t_destructor	destructor;
	struct s_object	*instances;
};

extern struct s_type	*g_TYPES;

void					ft_type_listinstances(void);

struct	s_object
{
	struct s_type	*type;
	struct s_object	*next;
	struct s_object	**prev;
};

void					ft_object_create(struct s_object *self,
							struct s_type *type);
void					ft_object_destroy(struct s_object *self);

void					*ft_new(size_t size);
void					ft_destroy(void *self);
void					ft_delete(void *self);

enum e_type
{
	E_TYPE_NIL,
	E_TYPE_INTEGER,
	E_TYPE_FLOATING,
	E_TYPE_OBJECT
};

typedef union u_value
{
	int				integer;
	float			floating;
	struct s_object	*object;
}	t_value;

typedef struct s_any
{
	enum e_type	type;
	t_value		value;
}	t_any;

void					ft_any_create(t_any *any);
void					ft_any_destroy(t_any *any);

t_any					ft_any_nil(void);
t_any					ft_any_integer(int value);
t_any					ft_any_floating(float value);
t_any					ft_any_object(struct s_object *value);

void					ft_any_assign_nil(t_any *any);
void					ft_any_assign_integer(t_any *any, int value);
void					ft_any_assign_floating(t_any *any, float value);
void					ft_any_assign_object(t_any *any,
							struct s_object *value);

struct s_vector
{
	struct s_object	_;
	size_t			alloc;
	size_t			fill;
	t_any			*values;
};

void					ft_vector_create(struct s_vector *self);
void					ft_vector_destroy(struct s_vector *self);

struct s_vector			*ft_vector_new(void);
struct s_vector			*ft_vector_copy(struct s_vector *self);

t_any					*ft_vector_index(struct s_vector *self,
							unsigned int i);
unsigned int			ft_vector_length(struct s_vector *self);

void					ft_vector_append(struct s_vector *self,
							t_any value);

struct	s_string
{
	struct s_object	_;
	size_t			alloc;
	size_t			fill;
	char			*bytes;
};

void					ft_string_create(struct s_string *self);
void					ft_string_create_fromc(struct s_string *self,
							char *c_str);
void					ft_string_destroy(struct s_string *self);

struct s_string			*ft_string_new(void);
struct s_string			*ft_string_new_fromc(char *c_str);
struct s_string			*ft_string_copy(struct s_string *original);

int						ft_string_index(struct s_string *self,
							unsigned int index);
size_t					ft_string_length(struct s_string *self);
bool					ft_string_append_char(struct s_string *self,
							char c);
bool					ft_string_append_cstr(struct s_string *self,
							char *cstr);
bool					ft_string_append_string(struct s_string *self,
							struct s_string *other);
void					ft_string_append_ulong_base(struct s_string *self,
							unsigned long value,
							int base,
							const char *basestr);
void					ft_string_append_int_base(struct s_string *self,
							int value,
							int base,
							const char *basestr);
void					ft_string_append_int_base10(struct s_string *self,
							int value);

void					ft_string_writefd(struct s_string *self, int fd);

struct s_reader
{
	struct s_object	_;
	char			*c_str;
	unsigned int	index;
	bool			autofree;
};

void					ft_reader_create_cstr(struct s_reader *reader,
							char *c_str,
							bool autofree);
void					ft_reader_destroy(struct s_reader *reader);

struct s_reader			*ft_reader_new_cstr(char *c_str,
							bool autofree);

bool					ft_reader_has_next(struct s_reader *reader);
char					ft_reader_peek(struct s_reader *reader);
void					ft_reader_advance(struct s_reader *reader);
char					ft_reader_next(struct s_reader *reader);
void					ft_reader_skip(struct s_reader *reader,
							t_char_predicate pred);
void					ft_reader_skip_whitespace(struct s_reader *reader);
bool					ft_reader_read_line(struct s_reader *reader,
							struct s_string *string);
bool					ft_reader_read_int(struct s_reader *reader,
							int *value);

struct s_writer
{
	struct s_object	_;
	int				fd;
};

void					ft_writer_create_fd(struct s_writer *writer,
							int fd);
void					ft_writer_destroy(struct s_writer *writer);

void					ft_writer_write_char(struct s_writer *writer, char c);
void					ft_writer_write_string(struct s_writer *writer,
							struct s_string *string);

#endif
