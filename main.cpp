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

// Includes
#include "FilePumper.h"

// Shorthand the input and string data type
using namespace std;

/* // -----------------------------------------------------------------------------
 * func <main>
 * [ null ]
 *
 * Desc:
 *      Entry point of the program.
*/ // -----------------------------------------------------------------------------
int main() {
    // Add some color and write logo
    cc(0xB);
    w(logo);
    cc(0xF);

    // Paste the file path
    w("\nPaste the file path here: ");
    cc(0xB);
    string input;
    getline(cin, input);

    // Ask the user for the byte count
    cc(0xF);
    w("\nHow many kilobytes do you want to add to this file: ");
    cc(0xB);
    int byteAmount;
    cin >> byteAmount;

    // Tell the user the task is being performed
    cc(0xF);
    w("\n\nPumping your file | ");
    cc(0xC);
    w("made by jaxx#0001\n\n");

    // Start the file pumping, calculating the kb->bytes
    if (pumpFile(input.c_str(), (byteAmount * 1024)) == 1) {
        // The file doesn't exist -.-
        cc(0x6);
        w("Whoops!\n");
        cc(0xC);
        w("I might be at fault here, but I'm pretty sure that the file you entered doesn't exist.");
        cc(0xF);
        w(" Please try again.");
        system("pause > nul");
        cc(0x7);
        exit(-1);
    } else {
        // Everything went as planned, mission accomplished
        cc(0xB);
        w("Alright, your file is all pumped and ready to go!");
        cc(0xF);
        w(" Until Next Time | ");
        cc(0xC);
        w("made by jaxx#0001");
        system("pause > nul");
        cc(0x7);
        exit(0);
    }

    // Close the console, idk how the program would even reach this >_>
    cc(0x7);
    return 0;
}
