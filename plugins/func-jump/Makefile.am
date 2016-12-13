if ENABLE_FUNC_JUMP_PLUGIN

DISTCLEANFILES =
BUILT_SOURCES =
CLEANFILES =
EXTRA_DIST = $(plugin_DATA)

plugindir = $(libdir)/gnome-builder/plugins
plugin_LTLIBRARIES = libfunc_jump.la
dist_plugin_DATA = func-jump.plugin

libfunc_jump_la_SOURCES = \
	func-jump.c \
	func-jump.h \
	$(NULL)

libfunc_jump_la_CFLAGS = $(PLUGIN_CFLAGS)
libfunc_jump_la_LDFLAGS = $(PLUGIN_LDFLAGS)

include $(top_srcdir)/plugins/Makefile.plugin

endif

-include $(top_srcdir)/git.mk
