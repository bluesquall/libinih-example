AC_INIT([libinih-example],
	m4_esyscmd([.build-aux/git-version-gen .tarball-version]),
	[https://github.com/bluesquall/libinih-example/issues],
	[],
	[https://github.com/bluesquall/libinih-example],
)
AC_CONFIG_AUX_DIR([.build-aux])
AC_CONFIG_MACRO_DIRS([.build-aux/m4])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([subdir-objects dist-xz -Wall -Werror foreign])
AC_CONFIG_FILES([Makefile])

AC_SEARCH_LIBS([argp_parse],[argp])

PKG_CHECK_MODULES([INIH], [inih >= r52])
AC_CHECK_HEADER([inih/ini.h],
	AC_DEFINE([HAVE_INI_H], [1], ["ini.h exists"]),
	AC_MSG_ERROR(["ini.h not found"]))
AC_SEARCH_LIBS([ini_parse], [inih],
	AC_DEFINE([HAVE_INI_PARSE], [1], ["ini_parse is available"]),
	AC_MSG_ERROR(["ini_parse not found in libinih"]))

AC_PROG_CC
AC_OUTPUT
