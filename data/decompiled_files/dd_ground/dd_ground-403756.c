#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int8 *__fastcall sub_403756(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 *result; // rax
  char v3; // dl
  unsigned __int8 *v4; // [rsp+10h] [rbp-10h]

  result = a1;
  v4 = a1;
  while ( a2 )
  {
    v3 = byte_60E4A0[(unsigned __int8)sub_401BFD(*v4)];
    result = v4;
    *v4 = v3;
    --a2;
    ++v4;
  }
  return result;
}
