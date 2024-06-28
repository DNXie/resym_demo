#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_401706(int a1, int a2, int a3, __int64 a4)
{
int v5[2]; // [rsp+20h] [rbp-10h] BYREF
__int64 v6; // [rsp+28h] [rbp-8h]

v5[0] = a2;
v5[1] = a3;
v6 = a4;
return ioctl(a1, 0xC0105512uLL, v5);
}
