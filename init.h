/*
     @title
        FilePumper

     @Author
        jaxx

     @Copyright
        (c) 2023

    FilePumper is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    FilePumper is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

      Published under the GNU General Public License.
      For more information, see the GNU documentation.
*/

// Include necessary files
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <cstdio>

// Shorthand the output
using namespace std;

// Define console handle for coloring
HANDLE HCSL = GetStdHandle(STD_OUTPUT_HANDLE);

// Define logo
string logo =

"                                                                      \n"
"                   ...                        ..                      \n"
"                 ........                 .........                   \n"
"               ..........               ...........                   \n"
"              .....    ....            .....    .....                 \n"
"              ...        ....         ....        ...                 \n"
"            ....          ....       ....          ...                \n"
"            ....          ....       ....           ...               \n"
"            ....          ....     .....            ...               \n"
"            ....          ....     .....            ...               \n"
"            .....         ....      .....          ....               \n"
"             ....        ....       .....         ....                \n"
"             ...............         .....      .....            ..   \n"
"               ............           ..............       .   ....   \n"
"   ...           .........   jaxx#0001   ........          ......     \n"
"    ...            .....                    ..             .......    \n"
"     ...                                             ..  ........     \n"
"      ......                                        ............      \n"
"       .......       ..                     .      .....  .....       \n"
"       .........   ...          ..         ... .........  ...         \n"
"        .....  ........         ...       ........  ..... ...         \n"
"         ....     ..........................'...    .........         \n"
"          ....   ... ...  ............    ......    ..........        \n"
"           ...  ...   .       ........     .......   ..........       \n"
"            ......    ..     ... .....    ... ....   .........        \n"
"            .....     ..     ..   .....   ..   ........  .....        \n"
"            ........  ...   ...    ....   ..    .......   ....        \n"
"             ..     .....  ...       ... ...   ........    ...        \n"
"                      .......        ..........  .....      .         \n"
"                       ....................       ....                \n"
"                       ....         .......        ..                 \n"
"                        .              ...                            \n"
"                                        ..                            \n"
"                                        ..                            \n";

/* // -----------------------------------------------------------------------------
 * func <w>
 * [ string par1 ]
 *
 * Desc:
 *      Shorthand for writing <par1> to the console output buffer.
*/ // -----------------------------------------------------------------------------
void w(string par1) {
    // Simple output
    cout << par1;
}

/* // -----------------------------------------------------------------------------
 * func <cc>
 * [ integer par1 ]
 *
 * Desc:
 *      Change the console color to the integer->color matrix based on <par1>.
*/ // -----------------------------------------------------------------------------
void cc(int par1) {
    // Utilize windows.h to change text attributes.
    SetConsoleTextAttribute(HCSL, par1);
}
