rm definitions.h 2> /dev/null
echo "#ifndef DEFINITIONS_H" >> definitions.h
echo "# define DEFINITIONS_H\n" >> definitions.h
echo "# define TEST_NAME //Fill the test display name here" >> definitions.h
echo "# define FUNC_NAMES " | tr -d '\n' >> definitions.h
find ../ -maxdepth 1 -name "*.c" -printf \"%f\",\  | tr -d '\n' >> definitions.h
echo "NULL\n" >> definitions.h
echo "typedef struct s_func_map
{
\tchar\t*name;
\tvoid\t*(*name)(int, char **);\t
} t_func_map;" >> definitions.h
echo "#endif" >> definitions.h
