#define PACKAGE_BUGREPORT "https://github.com/lexxmark/winflexbison/issues"
#define VERSION "3.7.4"
#define PACKAGE_COPYRIGHT_YEAR 2020
#define LOCALEDIR ""
#define PACKAGE_STRING "bison"
#define PACKAGE_URL "https://github.com/lexxmark/winflexbison"
#define PACKAGE ""
#define PACKAGE_VERSION "3.7.4"
#define PACKAGE_NAME "bison"
#define PKGDATADIR "data"
#define RENAME_OPEN_FILE_WORKS 1

#define ssize_t ptrdiff_t

extern char* _stpcpy(char *yydest, const char *yysrc);

#include <stdio.h>
extern FILE* fopen_unixlike(const char* file, const char* mode);
#define fopen fopen_unixlike

extern int strverscmp(const char* s1, const char* s2);