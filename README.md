# casthalf

half is downloaded from http://half.sourceforge.net/ with version 1.12.0,
I did a small change from private to public, so the internal value data_
could be accessed easily.

I feel troublesome when debug half float application within gdb, because
I could only see the internal value in integer, without a direct view of
what the floating point value is. This is the motivation that I write this
small program to cast half between internal 16bits interger value and single
float value for a direct view.

Examples:
$ ./casthalf 2.01367
input float value: 2.013670
internal 16bits value: 16390 (0x4006)

$ ./casthalf 0x4006
input internal 16bits value: 16390 (0x4006)
single float value: 2.011719

$ ./casthalf 16389
input internal 16bits value: 16389 (0x4005)
single float value: 2.009766

$ ./casthalf 16390
input internal 16bits value: 16390 (0x4006)
single float value: 2.011719

$ ./casthalf 16391
input internal 16bits value: 16391 (0x4007)
single float value: 2.013672

$ ./casthalf 16390.0
input float value: 16390.000000
internal 16bits value: 29696 (0x7400)
