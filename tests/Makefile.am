AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCDATA_CPPFLAGS@ \
	@LIBCLOCALE_CPPFLAGS@ \
	@LIBCNOTIFY_CPPFLAGS@ \
	@LIBCSPLIT_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBCFILE_CPPFLAGS@ \
	@LIBCPATH_CPPFLAGS@ \
	@LIBBFIO_CPPFLAGS@ \
	@LIBFCACHE_CPPFLAGS@ \
	@LIBFDATA_CPPFLAGS@ \
	@LIBCSYSTEM_CPPFLAGS@ \
	@PTHREAD_CPPFLAGS@ \
	@LIBCREG_DLL_IMPORT@

if HAVE_PYTHON_TESTS
TESTS_PYCREG = \
	test_python_functions.sh \
	test_pycreg_set_ascii_codepage.sh
endif

TESTS = \
	test_api_functions.sh \
	test_api_types.sh \
	test_creginfo.sh \
	test_cregexport.sh \
	$(TESTS_PYCREG)

check_SCRIPTS = \
	pycreg_test_get_version.py \
	pycreg_test_open_close.py \
	pycreg_test_set_ascii_codepage.py \
	test_api_functions.sh \
	test_api_types.sh \
	test_cregexport.sh \
	test_creginfo.sh \
	test_pycreg_set_ascii_codepage.sh \
	test_python_functions.sh \
	test_runner.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	creg_test_data_block \
	creg_test_data_block_entry \
	creg_test_data_type \
	creg_test_error \
	creg_test_file \
	creg_test_io_handle \
	creg_test_key \
	creg_test_key_hierarchy_entry \
	creg_test_key_name_entry \
	creg_test_key_navigation \
	creg_test_notify \
	creg_test_support \
	creg_test_value \
	creg_test_value_entry

creg_test_data_block_SOURCES = \
	creg_test_data_block.c \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h

creg_test_data_block_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_data_block_entry_SOURCES = \
	creg_test_data_block_entry.c \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h

creg_test_data_block_entry_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_data_type_SOURCES = \
	creg_test_data_type.c \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h

creg_test_data_type_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_error_SOURCES = \
	creg_test_error.c \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_unused.h

creg_test_error_LDADD = \
	../libcreg/libcreg.la

creg_test_file_SOURCES = \
	creg_test_file.c \
	creg_test_libcerror.h \
	creg_test_libclocale.h \
	creg_test_libcreg.h \
	creg_test_libcsystem.h \
	creg_test_libuna.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h

creg_test_file_LDADD = \
	@LIBCSYSTEM_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libcreg/libcreg.la \
	@LIBCTHREADS_LIBADD@ \
	@LIBCERROR_LIBADD@ \
	@PTHREAD_LIBADD@

creg_test_io_handle_SOURCES = \
	creg_test_io_handle.c \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h

creg_test_io_handle_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_key_SOURCES = \
	creg_test_key.c \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h

creg_test_key_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_key_hierarchy_entry_SOURCES = \
	creg_test_key_hierarchy_entry.c \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h

creg_test_key_hierarchy_entry_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_key_name_entry_SOURCES = \
	creg_test_key_name_entry.c \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h

creg_test_key_name_entry_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_key_navigation_SOURCES = \
	creg_test_key_navigation.c \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h

creg_test_key_navigation_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_notify_SOURCES = \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_notify.c \
	creg_test_unused.h

creg_test_notify_LDADD = \
	../libcreg/libcreg.la

creg_test_support_SOURCES = \
	creg_test_libcerror.h \
	creg_test_libclocale.h \
	creg_test_libcreg.h \
	creg_test_libcsystem.h \
	creg_test_libuna.h \
	creg_test_macros.h \
	creg_test_support.c

creg_test_support_LDADD = \
	@LIBCSYSTEM_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_value_SOURCES = \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h \
	creg_test_value.c

creg_test_value_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

creg_test_value_entry_SOURCES = \
	creg_test_libcerror.h \
	creg_test_libcreg.h \
	creg_test_macros.h \
	creg_test_memory.c creg_test_memory.h \
	creg_test_unused.h \
	creg_test_value_entry.c

creg_test_value_entry_LDADD = \
	../libcreg/libcreg.la \
	@LIBCERROR_LIBADD@

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile

