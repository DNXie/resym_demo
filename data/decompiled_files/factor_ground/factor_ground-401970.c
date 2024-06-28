#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 sub_401970()
{
  bool v1; // [rsp+7h] [rbp-29h]
  char v2[8]; // [rsp+10h] [rbp-20h] BYREF
  void *ptr; // [rsp+18h] [rbp-18h]

  v1 = 1;
  sub_403645(v2);
  while ( sub_403666(stdin, "\n\t ", 3LL, v2) != -1 )
    v1 = (v1 & (unsigned __int8)sub_4017B2((__int64)ptr)) != 0;
  free(ptr);
  return v1;
}
