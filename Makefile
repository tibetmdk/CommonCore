# Compiler and flags
CC = gcc              # Derleyici olarak gcc kullanıyoruz
CFLAGS = -Wall -Wextra -Werror   # Derleme bayrakları: uyarılar ve hatalar

# Source files and object files
SRC = ft_atoi.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
      ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcpy.c \
      ft_memset.c ft_strdup.c ft_strchr.c ft_strjoin.c ft_strlcat.c \
      ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
      ft_strtrim.c ft_tolower.c ft_toupper.c ft_substr.c  # Projedeki tüm C dosyaları

OBJ = $(SRC:.c=.o)    # C dosyalarının nesne dosyalarına dönüştürülmüş hali

# Header file
HEADER = libft.h      # Projenin başlık dosyası (header file),Fakat bunun yerine tüm c dosyalarına, manuel olarak bu kütüphaneyi eklersende aynı şey.

# Name of the static library
NAME = libft.a        # Statik kütüphane dosyasının adı

# Default target: all
all: $(NAME)          # Varsayılan hedef: libft.a dosyasını oluştur

# Creating the static library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)  #Tüm nesne dosyalarini ar komutu ile birleştir ve libft.a dosyasini oluştur.   r: Dosyaları arşive ekle veya zaten varsa güncelle.
			#  c: Eğer arşiv mevcut değilse, oluştur.
			#  s: Arşivin içindeki dosyaların hızlı erişim için bir indeksini oluştur. Bu, arşivdeki dosyaların hızlıca bulunabilmesi için gereklidir.


# Rule to compile .c files into .o files
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@  # Her .c dosyasını .o dosyasına dönüştür

# Cleaning up object files
clean:
	rm -f $(OBJ)   # Nesne dosyalarını (*.o) sil

# Cleaning up object files and the static library
fclean: clean
	rm -f $(NAME)  # Hem nesne dosyalarını hem de statik kütüphaneyi sil

# Rebuild everything
re: fclean all   # Her şeyi temizle ve baştan derle

# Phony targets (to prevent clashes with file names)
.PHONY: all clean fclean re  # Phony hedefler, dosya isimleriyle karışmaması için
