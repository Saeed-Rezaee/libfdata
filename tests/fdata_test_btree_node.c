/*
 * Library btree_node type test program
 *
 * Copyright (C) 2010-2017, Joachim Metz <joachim.metz@gmail.com>
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

#include "fdata_test_libcerror.h"
#include "fdata_test_libfdata.h"
#include "fdata_test_macros.h"
#include "fdata_test_memory.h"
#include "fdata_test_unused.h"

#include "../libfdata/libfdata_btree_node.h"

#if defined( __GNUC__ ) && !defined( LIBFDATA_DLL_IMPORT )

/* Tests the libfdata_btree_node_free function
 * Returns 1 if successful or 0 if not
 */
int fdata_test_btree_node_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libfdata_btree_node_free(
	          NULL,
	          &error );

	FDATA_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

        FDATA_TEST_ASSERT_IS_NOT_NULL(
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

#endif /* #if defined( __GNUC__ ) && !defined( LIBFDATA_DLL_IMPORT ) */

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc FDATA_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] FDATA_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc FDATA_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] FDATA_TEST_ATTRIBUTE_UNUSED )
#endif
{
	FDATA_TEST_UNREFERENCED_PARAMETER( argc )
	FDATA_TEST_UNREFERENCED_PARAMETER( argv )

#if defined( __GNUC__ ) && !defined( LIBFDATA_DLL_IMPORT )

	/* TODO: add tests for libfdata_btree_node_initialize */

	FDATA_TEST_RUN(
	 "libfdata_btree_node_free",
	 fdata_test_btree_node_free );

	/* TODO: add tests for libfdata_btree_node_get_level */

	/* TODO: add tests for libfdata_btree_node_is_branch */

	/* TODO: add tests for libfdata_btree_node_is_leaf */

	/* TODO: add tests for libfdata_btree_node_is_root */

	/* TODO: add tests for libfdata_btree_node_get_number_of_sub_nodes */

	/* TODO: add tests for libfdata_btree_node_get_sub_node_data_range_by_index */

	/* TODO: add tests for libfdata_btree_node_get_sub_node_data_range_by_mapped_index */

	/* TODO: add tests for libfdata_btree_node_get_sub_node_data_range_by_key */

	/* TODO: add tests for libfdata_btree_node_get_sub_node_by_index */

	/* TODO: add tests for libfdata_btree_node_set_sub_node_by_index */

	/* TODO: add tests for libfdata_btree_node_append_sub_node */

	/* TODO: add tests for libfdata_btree_node_get_number_of_leaf_values_in_branch */

	/* TODO: add tests for libfdata_btree_node_get_number_of_leaf_values */

	/* TODO: add tests for libfdata_btree_node_get_leaf_value_data_range_by_index */

	/* TODO: add tests for libfdata_btree_node_get_leaf_value_data_range_by_mapped_index */

	/* TODO: add tests for libfdata_btree_node_get_leaf_value_data_range_by_key */

	/* TODO: add tests for libfdata_btree_node_get_leaf_value_by_index */

	/* TODO: add tests for libfdata_btree_node_get_leaf_value_by_key */

	/* TODO: add tests for libfdata_btree_node_set_leaf_value_by_index */

	/* TODO: add tests for libfdata_btree_node_append_leaf_value */

#endif /* #if defined( __GNUC__ ) && !defined( LIBFDATA_DLL_IMPORT ) */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}
