/*
 * Codepage definitions for libcreg
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

#if !defined( _LIBCREG_CODEPAGE_H )
#define _LIBCREG_CODEPAGE_H

#include <libcreg/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBCREG_CODEPAGES
{
	LIBCREG_CODEPAGE_ASCII				= 20127,

	LIBCREG_CODEPAGE_ISO_8859_1			= 28591,
	LIBCREG_CODEPAGE_ISO_8859_2			= 28592,
	LIBCREG_CODEPAGE_ISO_8859_3			= 28593,
	LIBCREG_CODEPAGE_ISO_8859_4			= 28594,
	LIBCREG_CODEPAGE_ISO_8859_5			= 28595,
	LIBCREG_CODEPAGE_ISO_8859_6			= 28596,
	LIBCREG_CODEPAGE_ISO_8859_7			= 28597,
	LIBCREG_CODEPAGE_ISO_8859_8			= 28598,
	LIBCREG_CODEPAGE_ISO_8859_9			= 28599,
	LIBCREG_CODEPAGE_ISO_8859_10			= 28600,
	LIBCREG_CODEPAGE_ISO_8859_11			= 28601,
	LIBCREG_CODEPAGE_ISO_8859_13			= 28603,
	LIBCREG_CODEPAGE_ISO_8859_14			= 28604,
	LIBCREG_CODEPAGE_ISO_8859_15			= 28605,
	LIBCREG_CODEPAGE_ISO_8859_16			= 28606,

	LIBCREG_CODEPAGE_KOI8_R				= 20866,
	LIBCREG_CODEPAGE_KOI8_U				= 21866,

	LIBCREG_CODEPAGE_WINDOWS_874			= 874,
	LIBCREG_CODEPAGE_WINDOWS_932			= 932,
	LIBCREG_CODEPAGE_WINDOWS_936			= 936,
	LIBCREG_CODEPAGE_WINDOWS_949			= 949,
	LIBCREG_CODEPAGE_WINDOWS_950			= 950,
	LIBCREG_CODEPAGE_WINDOWS_1250			= 1250,
	LIBCREG_CODEPAGE_WINDOWS_1251			= 1251,
	LIBCREG_CODEPAGE_WINDOWS_1252			= 1252,
	LIBCREG_CODEPAGE_WINDOWS_1253			= 1253,
	LIBCREG_CODEPAGE_WINDOWS_1254			= 1254,
	LIBCREG_CODEPAGE_WINDOWS_1255			= 1255,
	LIBCREG_CODEPAGE_WINDOWS_1256			= 1256,
	LIBCREG_CODEPAGE_WINDOWS_1257			= 1257,
	LIBCREG_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBCREG_CODEPAGE_US_ASCII			LIBCREG_CODEPAGE_ASCII

#define LIBCREG_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBCREG_CODEPAGE_ISO_8859_1
#define LIBCREG_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBCREG_CODEPAGE_ISO_8859_2
#define LIBCREG_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBCREG_CODEPAGE_ISO_8859_3
#define LIBCREG_CODEPAGE_ISO_NORTH_EUROPEAN		LIBCREG_CODEPAGE_ISO_8859_4
#define LIBCREG_CODEPAGE_ISO_CYRILLIC			LIBCREG_CODEPAGE_ISO_8859_5
#define LIBCREG_CODEPAGE_ISO_ARABIC			LIBCREG_CODEPAGE_ISO_8859_6
#define LIBCREG_CODEPAGE_ISO_GREEK			LIBCREG_CODEPAGE_ISO_8859_7
#define LIBCREG_CODEPAGE_ISO_HEBREW			LIBCREG_CODEPAGE_ISO_8859_8
#define LIBCREG_CODEPAGE_ISO_TURKISH			LIBCREG_CODEPAGE_ISO_8859_9
#define LIBCREG_CODEPAGE_ISO_NORDIC			LIBCREG_CODEPAGE_ISO_8859_10
#define LIBCREG_CODEPAGE_ISO_THAI			LIBCREG_CODEPAGE_ISO_8859_11
#define LIBCREG_CODEPAGE_ISO_BALTIC			LIBCREG_CODEPAGE_ISO_8859_13
#define LIBCREG_CODEPAGE_ISO_CELTIC			LIBCREG_CODEPAGE_ISO_8859_14

#define LIBCREG_CODEPAGE_ISO_LATIN_1			LIBCREG_CODEPAGE_ISO_8859_1
#define LIBCREG_CODEPAGE_ISO_LATIN_2			LIBCREG_CODEPAGE_ISO_8859_2
#define LIBCREG_CODEPAGE_ISO_LATIN_3			LIBCREG_CODEPAGE_ISO_8859_3
#define LIBCREG_CODEPAGE_ISO_LATIN_4			LIBCREG_CODEPAGE_ISO_8859_4
#define LIBCREG_CODEPAGE_ISO_LATIN_5			LIBCREG_CODEPAGE_ISO_8859_9
#define LIBCREG_CODEPAGE_ISO_LATIN_6			LIBCREG_CODEPAGE_ISO_8859_10
#define LIBCREG_CODEPAGE_ISO_LATIN_7			LIBCREG_CODEPAGE_ISO_8859_13
#define LIBCREG_CODEPAGE_ISO_LATIN_8			LIBCREG_CODEPAGE_ISO_8859_14
#define LIBCREG_CODEPAGE_ISO_LATIN_9			LIBCREG_CODEPAGE_ISO_8859_15
#define LIBCREG_CODEPAGE_ISO_LATIN_10			LIBCREG_CODEPAGE_ISO_8859_16

#define LIBCREG_CODEPAGE_KOI8_RUSSIAN			LIBCREG_CODEPAGE_KOI8_R
#define LIBCREG_CODEPAGE_KOI8_UKRAINIAN			LIBCREG_CODEPAGE_KOI8_U

#define LIBCREG_CODEPAGE_WINDOWS_THAI			LIBCREG_CODEPAGE_WINDOWS_874
#define LIBCREG_CODEPAGE_WINDOWS_JAPANESE		LIBCREG_CODEPAGE_WINDOWS_932
#define LIBCREG_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBCREG_CODEPAGE_WINDOWS_936
#define LIBCREG_CODEPAGE_WINDOWS_KOREAN			LIBCREG_CODEPAGE_WINDOWS_949
#define LIBCREG_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBCREG_CODEPAGE_WINDOWS_950
#define LIBCREG_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBCREG_CODEPAGE_WINDOWS_1250
#define LIBCREG_CODEPAGE_WINDOWS_CYRILLIC		LIBCREG_CODEPAGE_WINDOWS_1251
#define LIBCREG_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBCREG_CODEPAGE_WINDOWS_1252
#define LIBCREG_CODEPAGE_WINDOWS_GREEK			LIBCREG_CODEPAGE_WINDOWS_1253
#define LIBCREG_CODEPAGE_WINDOWS_TURKISH		LIBCREG_CODEPAGE_WINDOWS_1254
#define LIBCREG_CODEPAGE_WINDOWS_HEBREW			LIBCREG_CODEPAGE_WINDOWS_1255
#define LIBCREG_CODEPAGE_WINDOWS_ARABIC			LIBCREG_CODEPAGE_WINDOWS_1256
#define LIBCREG_CODEPAGE_WINDOWS_BALTIC			LIBCREG_CODEPAGE_WINDOWS_1257
#define LIBCREG_CODEPAGE_WINDOWS_VIETNAMESE		LIBCREG_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBCREG_CODEPAGE_H ) */

