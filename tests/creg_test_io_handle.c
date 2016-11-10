/*
 * Library io_handle type testing program
 *
 * Copyright (C) 2013-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "creg_test_libcerror.h"
#include "creg_test_libcreg.h"
#include "creg_test_macros.h"
#include "creg_test_memory.h"
#include "creg_test_unused.h"

#include "../libcreg/libcreg_io_handle.h"

#if defined( __GNUC__ )

/* Tests the libcreg_io_handle_initialize function
 * Returns 1 if successful or 0 if not
 */
int creg_test_io_handle_initialize(
     void )
{
	libcerror_error_t *error       = NULL;
	libcreg_io_handle_t *io_handle = NULL;
	int result                     = 0;

	/* Test io_handle initialization
	 */
	result = libcreg_io_handle_initialize(
	          &io_handle,
	          &error );

	CREG_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

        CREG_TEST_ASSERT_IS_NOT_NULL(
         "io_handle",
         io_handle );

        CREG_TEST_ASSERT_IS_NULL(
         "error",
         error );

	result = libcreg_io_handle_free(
	          &io_handle,
	          &error );

	CREG_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

        CREG_TEST_ASSERT_IS_NULL(
         "io_handle",
         io_handle );

        CREG_TEST_ASSERT_IS_NULL(
         "error",
         error );

	/* Test error cases
	 */
	result = libcreg_io_handle_initialize(
	          NULL,
	          &error );

	CREG_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

        CREG_TEST_ASSERT_IS_NOT_NULL(
         "error",
         error );

	libcerror_error_free(
	 &error );

	io_handle = (libcreg_io_handle_t *) 0x12345678UL;

	result = libcreg_io_handle_initialize(
	          &io_handle,
	          &error );

	CREG_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

        CREG_TEST_ASSERT_IS_NOT_NULL(
         "error",
         error );

	libcerror_error_free(
	 &error );

	io_handle = NULL;

#if defined( HAVE_CREG_TEST_MEMORY )

	/* Test libcreg_io_handle_initialize with malloc failing
	 */
	creg_test_malloc_attempts_before_fail = 0;

	result = libcreg_io_handle_initialize(
	          &io_handle,
	          &error );

	if( creg_test_malloc_attempts_before_fail != -1 )
	{
		creg_test_malloc_attempts_before_fail = -1;

		if( io_handle != NULL )
		{
			libcreg_io_handle_free(
			 &io_handle,
			 NULL );
		}
	}
	else
	{
		CREG_TEST_ASSERT_EQUAL_INT(
		 "result",
		 result,
		 -1 );

		CREG_TEST_ASSERT_IS_NULL(
		 "io_handle",
		 io_handle );

		CREG_TEST_ASSERT_IS_NOT_NULL(
		 "error",
		 error );

		libcerror_error_free(
		 &error );
	}
	/* Test libcreg_io_handle_initialize with memset failing
	 */
	creg_test_memset_attempts_before_fail = 0;

	result = libcreg_io_handle_initialize(
	          &io_handle,
	          &error );

	if( creg_test_memset_attempts_before_fail != -1 )
	{
		creg_test_memset_attempts_before_fail = -1;

		if( io_handle != NULL )
		{
			libcreg_io_handle_free(
			 &io_handle,
			 NULL );
		}
	}
	else
	{
		CREG_TEST_ASSERT_EQUAL_INT(
		 "result",
		 result,
		 -1 );

		CREG_TEST_ASSERT_IS_NULL(
		 "io_handle",
		 io_handle );

		CREG_TEST_ASSERT_IS_NOT_NULL(
		 "error",
		 error );

		libcerror_error_free(
		 &error );
	}
#endif /* defined( HAVE_CREG_TEST_MEMORY ) */

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	if( io_handle != NULL )
	{
		libcreg_io_handle_free(
		 &io_handle,
		 NULL );
	}
	return( 0 );
}

/* Tests the libcreg_io_handle_free function
 * Returns 1 if successful or 0 if not
 */
int creg_test_io_handle_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libcreg_io_handle_free(
	          NULL,
	          &error );

	CREG_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

        CREG_TEST_ASSERT_IS_NOT_NULL(
         "error",
         error );

	libcerror_error_free(
	 &error );

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	return( 0 );
}

#endif /* defined( __GNUC__ ) */

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc CREG_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] CREG_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc CREG_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] CREG_TEST_ATTRIBUTE_UNUSED )
#endif
{
	CREG_TEST_UNREFERENCED_PARAMETER( argc )
	CREG_TEST_UNREFERENCED_PARAMETER( argv )

#if defined( __GNUC__ )

	CREG_TEST_RUN(
	 "libcreg_io_handle_initialize",
	 creg_test_io_handle_initialize );

	CREG_TEST_RUN(
	 "libcreg_io_handle_free",
	 creg_test_io_handle_free );

#endif /* defined( __GNUC__ ) */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

