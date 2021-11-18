// -----------------------------------------------------------------------------------------------------
// Copyright (c) 2006-2021, Knut Reinert & Freie Universität Berlin
// Copyright (c) 2016-2021, Knut Reinert & MPI für molekulare Genetik
// This file may be used, modified and/or redistributed under the terms of the 3-clause BSD-License
// shipped with this file and also available at: https://github.com/seqan/lib-template/blob/master/LICENSE.md
// -----------------------------------------------------------------------------------------------------

#pragma once

#include <cstddef>
#include <cstdint>

/*!\file
 * \brief Provides lib-template version macros and global variables.
 * \author [name <email address>]
 */

//!\brief The major version as MACRO.
#define LIB_TEMPLATE_VERSION_MAJOR 3
//!\brief The minor version as MACRO.
#define LIB_TEMPLATE_VERSION_MINOR 0
//!\brief The patch version as MACRO.
#define LIB_TEMPLATE_VERSION_PATCH 3

//!\brief The full version as MACRO (number).
#define LIB_TEMPLATE_VERSION (LIB_TEMPLATE_VERSION_MAJOR * 10000 \
                     + LIB_TEMPLATE_VERSION_MINOR * 100 \
                     + LIB_TEMPLATE_VERSION_PATCH)

/*!\brief Converts a number to a string. Preprocessor needs this indirection to
 * properly expand the values to strings.
 */
#define LIB_TEMPLATE_VERSION_CSTRING_HELPER_STR(str) #str

//!\brief Converts version numbers to string.
#define LIB_TEMPLATE_VERSION_CSTRING_HELPER_FUNC(MAJOR, MINOR, PATCH) \
        LIB_TEMPLATE_VERSION_CSTRING_HELPER_STR(MAJOR) "."\
        LIB_TEMPLATE_VERSION_CSTRING_HELPER_STR(MINOR) "."\
        LIB_TEMPLATE_VERSION_CSTRING_HELPER_STR(PATCH)

//!\brief The full version as null terminated string.
#define LIB_TEMPLATE_VERSION_CSTRING \
    LIB_TEMPLATE_VERSION_CSTRING_HELPER_FUNC(LIB_TEMPLATE_VERSION_MAJOR, \
                                             LIB_TEMPLATE_VERSION_MINOR, \
                                             LIB_TEMPLATE_VERSION_PATCH)

namespace lib_template
{

//!\brief The major version.
constexpr uint8_t lib_template_version_major = LIB_TEMPLATE_VERSION_MAJOR;
//!\brief The minor version.
constexpr uint8_t lib_template_version_minor = LIB_TEMPLATE_VERSION_MINOR;
//!\brief The patch version.
constexpr uint8_t lib_template_version_patch = LIB_TEMPLATE_VERSION_PATCH;

//!\brief The full version as `std::size_t`.
constexpr std::size_t lib_template_version = LIB_TEMPLATE_VERSION;

//!\brief The full version as null terminated string.
constexpr char const* lib_template_version_cstring = LIB_TEMPLATE_VERSION_CSTRING;

} // namespace lib-template

#undef LIB_TEMPLATE_VERSION_CSTRING_HELPER_STR
#undef LIB_TEMPLATE_VERSION_CSTRING_HELPER_FUNC
