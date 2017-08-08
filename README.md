# casthalf

half is downloaded from http://half.sourceforge.net/ with version 1.12.0,
I did a small change from private to public, so the internal value data_
could be accessed easily.

I feel troublesome when debug half float application within gdb, because
I could only see the internal value in integer, without a direct view of
what the floating point value is. This is the motivation that I write this
small program to cast half between internal 16bits interger value and single
float value for a direct view.

Examples: (rounding mode is default)

$ ./casthalf 2112.0

input float value: 2112.000000

internal 16bits value: 26656 (0x6820)

accurate float value: 2112.000000


$ ./casthalf 2113.0

input float value: 2113.000000

internal 16bits value: 26656 (0x6820)

accurate float value: 2112.000000


$ ./casthalf 2114.0

input float value: 2114.000000

internal 16bits value: 26657 (0x6821)

accurate float value: 2114.000000


$ ./casthalf 26656

input internal 16bits value: 26656 (0x6820)

single float value: 2112.000000


$ ./casthalf 0x6820

input internal 16bits value: 26656 (0x6820)

single float value: 2112.000000
