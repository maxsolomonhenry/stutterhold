/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   CHANGELOG;
    const int            CHANGELOGSize = 5070;

    extern const char*   COPYING;
    const int            COPYINGSize = 1475;

    extern const char*   Makefile;
    const int            MakefileSize = 1470;

    extern const char*   README;
    const int            READMESize = 5627;

    extern const char*   README_simd;
    const int            README_simdSize = 2419;

    extern const char*   TIPS;
    const int            TIPSSize = 2165;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 6;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
