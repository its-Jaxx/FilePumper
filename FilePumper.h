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

// Include required files
#include "init.h"

/* // -----------------------------------------------------------------------------
 * func <pumpFile>
 * [ string pointer fname, long bytesToPump ]
 *
 * Desc:
 *      Opens the file passed to *fname, and adds {bytesToPump} to the final size.
*/ // -----------------------------------------------------------------------------
short pumpFile(const char *fname, long bytesToPump) {
    // Define the FILE type to store to in memory
    FILE *f = NULL;

    // Open the file <fname>
    f = fopen(fname, "a");

    // Check if the file exists
    if (f == NULL) {
        return 1; //Return 1 because it failed to open file
    }

    // Set up loop for pumping
    for (long i = 0; i < bytesToPump; i++) {
        fputc(0xC3, f);
    }

    // Close the file to prevent memory leaks
    fclose(f);

    // Return 0 because it successfully wrote the bytes
    return 0;
}
