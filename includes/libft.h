#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef _Bool
#  define _Bool int
# endif

# ifndef bool
#  define bool _Bool
# endif

# ifndef boolean
#  define boolean _Bool
# endif

# ifndef true
#  define true 1
# endif

# ifndef false
#  define false 0
# endif

# ifndef bool
#  define bool _Bool
# endif

typedef unsigned char 	UInt8;
typedef unsigned short 	UInt16;
typedef unsigned int  	UInt32;
typedef unsigned long 	UInt64;

typedef char 		Int8;
typedef short 		Int16;
typedef int 		Int32;
typedef long 		Int64;

/*#############################################################################*/
/*#                                                                           #*/
/*#                                     IO                                    #*/
/*#                                                                           #*/
/*#############################################################################*/
void			ft_putchar(int c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr(const char *str);
void			ft_putstr_fd(const char *str, int fd);
void			ft_putendl(const char *str);
void			ft_putendl_fd(const char *str, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
/*#######\                                                                   |#*/
/* END IO \__________________________________________________________________/#*/
/*############################################################################*/

/*#############################################################################*/
/*#                                                                           #*/
/*#                                   Memory                                  #*/
/*#                                                                           #*/
/*#############################################################################*/
void			ft_memdel(void **ap);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *b, size_t n);
void			*ft_memalloc(size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memrchr(const void *s, int c, size_t n);
size_t			ft_memcmp(const void *s1, const void *s2, size_t n);
/*##########\                                                                |#*/
/* END QUEUE \_______________________________________________________________/#*/
/*############################################################################*/

/*#############################################################################*/
/*#                                                                           #*/
/*#                                   String                                  #*/
/*#                                                                           #*/
/*#############################################################################*/
size_t			ft_strlen(const char *s);
char			*ft_strnew(size_t n);
void			ft_strdel(char **as);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strdup(const char *s);
char			*ft_strclr(char *s);
size_t			ft_strcmp(const char *s1, const char *s2);
size_t			ft_strncmp(const char *s1, const char *s2, size_t i);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strcat(char *dst, const char *src);
char			*ft_strncat(char *dst, const char *src, size_t n);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strsub(const char *str, unsigned int start, size_t n);
int			ft_strequ(const char *s1, const char *s2);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
char			*ft_strtrim(const char *s);
char			**ft_strsplit(const char *s, char c);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char 			*ft_strtolower(char *str);
char 			*ft_strtoupper(char *str);
/*###########\                                                               |#*/
/*[END STRING \______________________________________________________________/#*/
/*############################################################################*/

/*#############################################################################*/
/*#                                                                           #*/
/*#                                  Convert                                  #*/
/*#                                                                           #*/
/*#############################################################################*/
int			ft_atoi(const char *nptr);
char			*ft_itoa(int n);
char			**ft_atoaa(const char *str, size_t cut);
long			ft_atol(const char *nptr);
long long		ft_atoll(const char *nptr);
char 			*ft_aatoa(char **ar);
char 			*ft_aatona(char **ar, size_t max);
/*############\                                                              |#*/
/* END CONVERT \_____________________________________________________________/#*/
/*############################################################################*/

/*#############################################################################*/
/*#                                                                           #*/
/*#                                    Char                                   #*/
/*#                                                                           #*/
/*#############################################################################*/
int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_isspace(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isblank(int c);
int			ft_isxdigit(int c);
int	 		ft_ispunct(int c);
int			ft_isgraph(int c);
int			ft_isprint(int c);
int			ft_iscntrl(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
/*#########\                                                                 |#*/
/* END CHAR \________________________________________________________________/#*/
/*############################################################################*/

/*#############################################################################*/
/*#                                                                           #*/
/*#                                 LinkedList                                #*/
/*#                                                                           #*/
/*#############################################################################*/
typedef struct 		s_linkedlist
{
	size_t		Count;
	struct 		s_segment *First;
	struct 		s_segment *Last;
}			t_linkedlist;
typedef struct 		s_segment
{
	void		*data;
	struct 		s_segment *next;
	struct 		s_segment *back;
}			t_segment;
t_segment		*ft_segment_new(void);
void	 		ft_segment_free(t_segment **seg, bool alsodata);
t_segment 		*ft_segment_setData(t_segment *seg, void *data);
void			*ft_segment_getData(t_segment *seg);
void			*ft_segment_getDupdata(t_segment *seg);
t_segment		*ft_segment_setNext(t_segment *seg, t_segment *next);
t_segment		*ft_segment_setBack(t_segment *seg, t_segment *back);
t_linkedlist	 	*ft_linkedlist_new();
void 			 ft_linkedlist_free(t_linkedlist **ll, bool alsodata);
void			ft_linkedlist_addFirst(t_linkedlist *ll, void *data);
void			ft_linkedlist_addLast(t_linkedlist *ll, void *data);
void			ft_linkedlist_addAt(t_linkedlist *ll, void *data, size_t i);
void			*ft_linkedlist_getAt(t_linkedlist *ll, size_t index);
t_segment		*ft_linkedlist_getSegat(t_linkedlist *ll, size_t index);
void			ft_linkedlist_removeFirst(t_linkedlist *ll, bool b);
void			ft_linkedlist_removeLast(t_linkedlist *ll, bool b);
void			ft_linkedlist_removeAt(t_linkedlist *ll, size_t index, bool b);
void 			ft_linkedlist_removeAll(t_linkedlist *ll, bool b);
void			ft_linkedlist_expendLast(t_linkedlist *ll, size_t n);
void			ft_linkedlist_expendFirst(t_linkedlist *ll, size_t n);
void			ft_linkedlist_setAt(t_linkedlist *ll, void *data, size_t i);
bool			ft_linkedlist_isEmpty(t_linkedlist *ll);
bool 			ft_linkedlist_containIndex(t_linkedlist *ll, size_t index);
/*###############\                                                          |#*/
/* END LINKEDLIST \_________________________________________________________/#*/
/*############################################################################*/

/*#############################################################################*/
/*#                                                                           #*/
/*#                                  ArrayList                                #*/
/*#                                                                           #*/
/*#############################################################################*/
typedef struct 		s_arraylist
{
	void		**array;
	size_t		Capacity;
	size_t		Count;
}			t_arraylist;
void 			**ft_array_new(size_t n);
size_t			ft_array_size(void **ar);
void 			ft_array_free(void ***ar, bool alsodata);
void 			**ft_array_dup(void **ar);
bool 			ft_array_resize(void ***ar, size_t n);
t_arraylist		*ft_arraylist_new(void);
t_arraylist		*ft_arraylist_newn(size_t initial_size);
void			ft_arraylist_free(t_arraylist **al, bool alsodata);
bool			ft_arraylist_add(t_arraylist *al, void *data);
bool 			ft_arraylist_addAll(t_arraylist *al, void **datas);
void			*ft_arraylist_set(t_arraylist *al, size_t index, void *data);
void 			ft_arraylist_trimtosize(t_arraylist *al);
void			*ft_arraylist_get(t_arraylist *al, size_t index);
bool			ft_arraylist_remove(t_arraylist *al, size_t index, bool free);
size_t			ft_arraylist_clear(t_arraylist *al, bool alsodata);
bool 			ft_arraylist_containIndex(t_arraylist *al, size_t index);
bool 			ft_arraylist_isEmpty(t_arraylist *al);
bool 			ft_arraylist_ensureCapacity(t_arraylist *al, size_t min);
/*##############\                                                            |#*/
/* END ARRAYLIST \______________________________________________________ ____/#*/
/*############################################################################*/

/*#############################################################################*/
/*#                                                                           #*/
/*#                                    Stack                                  #*/
/*#                                                                           #*/
/*#############################################################################*/
typedef 		t_arraylist t_stack;
t_stack 		*ft_stack_new(void);
void			ft_stack_free(t_stack **s, bool alsodata);
void 			ft_stack_clear(t_stack *s, bool alsodata);
void 			ft_stack_push(t_stack *s, void *data);
void			*ft_stack_pop(t_stack *s);
void			*ft_stack_peek(t_stack *s);
bool			ft_stack_isEmpty(t_stack *s);
/*##########\                                                                |#*/
/*[END STACK \_______________________________________________________________/#*/
/*############################################################################*/

/*#############################################################################*/
/*#                                                                           #*/
/*#                                    Queue                                  #*/
/*#                                                                           #*/
/*#############################################################################*/
typedef 		t_linkedlist t_queue;
t_queue 		*ft_queue_new(void);
void 			ft_queue_free(t_queue **q, bool alsodata);
void 			ft_queue_clear(t_queue *q, bool alsofree);
bool 			ft_queue_enqueue(t_queue *q, void *data);
void 			*ft_queue_dequeue(t_queue *q);
/*##########\                                                                |#*/
/* END QUEUE \_______________________________________________________________/#*/
/*############################################################################*/

/*#############################################################################*/
/*#                                                                           #*/
/*#                                   Buffer                                  #*/
/*#                                                                           #*/
/*#############################################################################*/
typedef t_arraylist 	t_buffer;
typedef struct 		s_bufferseg
{
	char 		data[32];
	UInt8		len;
}			t_bufferseg;
t_bufferseg 		*ft_bufferseg_new(void);
void 			ft_bufferseg_clear(t_bufferseg *bs);
void 			ft_bufferseg_free(t_bufferseg **bs);
void 			ft_bufferseg_setstr(t_bufferseg *seg, char *str);
bool 			ft_bufferseg_addchr(t_bufferseg *bs, char c);
bool 			ft_bufferseg_addstr(t_bufferseg *bs, char *str);
bool 			ft_bufferseg_canAddstr(t_bufferseg *bs, char *str);
bool 			ft_bufferseg_canAddchr(t_bufferseg *bs);
char 			*ft_bufferseg_tostr(t_bufferseg *bs);
t_buffer 		*ft_buffer_new(void);
void 			ft_buffer_free(t_buffer **b);
void 			ft_buffer_addchr(t_buffer *b, char c);
void 			ft_buffer_addstr(t_buffer *b, char *str);
size_t			ft_buffer_len(t_buffer *b);
char 			**ft_buffer_toarray(t_buffer *b);
char 			*ft_buffer_tostring(t_buffer *b);
char 			*ft_buffer_tonstring(t_buffer *b, size_t n);
/*###########\                                                               |#*/
/* END BUFFER \______________________________________________________________/#*/
/*############################################################################*/
#endif
