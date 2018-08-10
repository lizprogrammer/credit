    // Helper functions for music

    #include <cs50.h>
    #include <string.h>
    #include <stdio.h>
    #include <math.h>
    #include <ctype.h>
    #include "helpers.h"

    // Converts a fraction formatted as X/Y to eighths
    int duration(string fraction)
    {
        // TODO
        int numerator = fraction[0] - '0';
        int denominator = fraction[2] - '0';
        int duration = (numerator * 8)/(denominator * 1);

        return duration;
    }


    // Calculates frequency (in Hz) of a note
    int frequency(string n)
    {
        char note, sharp, octave, flat;
        int distance = 0;
        double freq = 0.0;

        note = n[0];
        if(n[1]=='#')
        {
            sharp = true;
            flat = false;
            octave = n[2];
        }
        else if(n[1]=='b')
        {
            flat = true;
            sharp = false;
            octave = n[2];
        }
        else
        {
            sharp = false;
            flat = false;
            octave = n[1];
        }

        if (note == 'A' && !sharp && !flat)
        {
            distance = 0;
        }
        else if((note == 'A' && sharp)|(note == 'B' && flat))
        {
            distance = 1;
        }
        else if (note == 'B')
        {
            distance = 2;
        }
        else if (note == 'C' && !sharp)
        {
            distance = -9;
            //freq = 99;
        }
        else if ((note == 'C' && sharp) || (note == 'D' && flat))
        {
               distance = -8;

        }
        else if (note == 'D' && !sharp)
        {
            distance = -7;
        }
        else if ((note == 'D' && sharp)||(note == 'E' && flat))
        {
            distance = -6;
        }
        else if (note == 'E')
        {
            distance = -5;
        }
        else if (note == 'F' && !sharp)
        {
            distance = -4;
        }
        else if ((note == 'F' && sharp)||(note == 'G' && flat))
        {
            distance = -3;
        }
        else if (note == 'G' && !sharp)
        {
            distance = -2;
        }
        else if ((note == 'G' && sharp)||(note == 'A' && flat))
        {
            distance = -1;
        }

        freq = 440.0 * (pow(2.0, (distance / 12.0)));
        //Loop to shift octave
        int o = octave - '0';
        // Loop to shift octave
        if (o > 4)
        {
            for (int i = 0; i < o - 4; i++)
            {
                freq *= 2.0;
            }
        }
        else if (o < 4)
        {
            for (int i = 0; i < 4 - o; i++)
            {
                freq /= 2.0;
            }
        }
    return round(freq);

    }

    // Determines whether a string represents a rest
    bool is_rest(string s)
    {
        // TODO
        if(strcmp(s,""))
        return false;
        else
        return true;
    }

//{ if (strcmp(s, "")) { return false; } else { return true; } }