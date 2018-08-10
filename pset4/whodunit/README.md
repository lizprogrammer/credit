# Questions

## What's `stdint.h`?
The stdint.h header defines integer types, limits of specified width integer types, limits of other integer types and macros for integer constant expressions.

TODO

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?
It’s easier to have aliases to use interchangeably for explicit fixed width integers. Specifies the number of bytes because one system an int might be a long in another.

TODO

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?
8, 32, 32, 16

TODO

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."
The file type; must be BM (ASCII).
0x42 0x4D in hexadecimal.

TODO

## What's the difference between `bfSize` and `biSize`?
bfSize is the size of, in bytes, of the bitmap file.
biSize is the number of bytes required by the structure. (BITMAPINFOHEADER)

TODO

## What does it mean if `biHeight` is negative?
If biHeight is negative, the bitmap is a top-down DIB and its origin is the upper-left corner.
If biHeight is negative, indicating a top-down DIB, biCompression must be either BI_RGB or BI_BITFIELDS. Top-down DIBs cannot be compressed.

TODO

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?
biBitCount

TODO

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?
If the file cannot be found.

TODO

## Why is the third argument to `fread` always `1` in our code?
The third argument of fread is the number of elements, each one with a size of <size> bytes. Since we are looking through each struct one at a time we put the third argument as 1 every time.

TODO

## What value does line 65 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?
int padding =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
RGBTRIPLE is 3 bytes (24 bits)
3 % 4 is 3
Padding = 3

TODO

## What does `fseek` do?
Sets the file position indicator for the file stream to the value pointed to by offset.

TODO

## What is `SEEK_CUR`?
How you set the offset to be relative to the current position indicator instead of the start or end.


TODO

## Whodunit?
It was Professor Plum with the candlestick in the library.
TODO
