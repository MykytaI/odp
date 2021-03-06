include $(top_srcdir)/Makefile.inc

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libodp-linux.pc

VPATH = $(srcdir) $(builddir)
lib_LTLIBRARIES = $(LIB)/libodp-linux.la

AM_LDFLAGS = -version-number '$(ODP_LIBSO_VERSION)'

if ODP_ABI_COMPAT
AM_LDFLAGS += -export-symbols-regex '^(_deprecated)?odp_'
else
AM_LDFLAGS += -export-symbols-regex '^(_deprecated)?_?odp_'
endif

AM_CFLAGS = "-DGIT_HASH=$(VERSION)"
AM_CFLAGS += $(VISIBILITY_CFLAGS)

AM_CFLAGS += @PTHREAD_CFLAGS@

EXTRA_DIST = doc/platform_specific.dox
