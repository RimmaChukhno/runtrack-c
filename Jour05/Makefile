NAME = music
SRCS = main.c read_album_file.c create_album.c push_back_album.c sort_album_by.c print_album_list.c compare_by_artist.c compare_by_title.c compare_by_year.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

run: all
	./music albums.txt artist
