# casthalf

half is downloaded from http://half.sourceforge.net/ with version 1.12.0,
I did a small change from private to public, so the internal value data_
could be accessed easily.

I feel troublesome when debug half float application within gdb, because
I could only see the internal value in integer, without a direct view of
what the floating point value is. This is the motivation that I write this
small program to cast half between internal 16bits interger value and single
float value for a direct view.
