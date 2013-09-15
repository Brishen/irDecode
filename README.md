Reads NEC-formatted IR signals from remotes/other devices.

Outputs 4 bytes. Sample:

Begin
00000000
11111111
01010010
10101101
End

First byte is address
Second byte is logical inverse of address, but I have found this is not always true.
Third byte is command
Fourth byte is logical inverse of command.