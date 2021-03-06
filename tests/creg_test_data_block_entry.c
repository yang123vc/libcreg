/*
 * Library data_block_entry type testing program
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

#include "../libcreg/libcreg_data_block_entry.h"

#if defined( __GNUC__ )

/* Tests the libcreg_data_block_entry_initialize function
 * Returns 1 if successful or 0 if not
 */
int creg_test_data_block_entry_initialize(
     void )
{
	libcerror_error_t *error                     = NULL;
	libcreg_data_block_entry_t *data_block_entry = NULL;
	int result                                   = 0;

	/* Test data_block_entry initialization
	 */
	result = libcreg_data_block_entry_initialize(
	          &data_block_entry,
	          &error );

	CREG_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

        CREG_TEST_ASSERT_IS_NOT_NULL(
         "data_block_entry",
         data_block_entry );

        CREG_TEST_ASSERT_IS_NULL(
         "error",
         error );

	result = libcreg_data_block_entry_free(
	          &data_block_entry,
	          &error );

	CREG_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

        CREG_TEST_ASSERT_IS_NULL(
         "data_block_entry",
         data_block_entry );

        CREG_TEST_ASSERT_IS_NULL(
         "error",
         error );

	/* Test error cases
	 */
	result = libcreg_data_block_entry_initialize(
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

	data_block_entry = (libcreg_data_block_entry_t *) 0x12345678UL;

	result = libcreg_data_block_entry_initialize(
	          &data_block_entry,
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

	data_block_entry = NULL;

#if defined( HAVE_CREG_TEST_MEMORY )

	/* Test libcreg_data_block_entry_initialize with malloc failing
	 */
	creg_test_malloc_attempts_before_fail = 0;

	result = libcreg_data_block_entry_initialize(
	          &data_block_entry,
	          &error );

	if( creg_test_malloc_attempts_before_fail != -1 )
	{
		creg_test_malloc_attempts_before_fail = -1;

		if( data_block_entry != NULL )
		{
			libcreg_data_block_entry_free(
			 &data_block_entry,
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
		 "data_block_entry",
		 data_block_entry );

		CREG_TEST_ASSERT_IS_NOT_NULL(
		 "error",
		 error );

		libcerror_error_free(
		 &error );
	}
	/* Test libcreg_data_block_entry_initialize with memset failing
	 */
	creg_test_memset_attempts_before_fail = 0;

	result = libcreg_data_block_entry_initialize(
	          &data_block_entry,
	          &error );

	if( creg_test_memset_attempts_before_fail != -1 )
	{
		creg_test_memset_attempts_before_fail = -1;

		if( data_block_entry != NULL )
		{
			libcreg_data_block_entry_free(
			 &data_block_entry,
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
		 "data_block_entry",
		 data_block_entry );

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
	if( data_block_entry != NULL )
	{
		libcreg_data_block_entry_free(
		 &data_block_entry,
		 NULL );
	}
	return( 0 );
}

/* Tests the libcreg_data_block_entry_free function
 * Returns 1 if successful or 0 if not
 */
int creg_test_data_block_entry_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libcreg_data_block_entry_free(
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
	 "libcreg_data_block_entry_initialize",
	 creg_test_data_block_entry_initialize );

	CREG_TEST_RUN(
	 "libcreg_data_block_entry_free",
	 creg_test_data_block_entry_free );

#endif /* defined( __GNUC__ ) */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

