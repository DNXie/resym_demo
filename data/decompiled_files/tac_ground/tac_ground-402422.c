#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_402422(unsigned int a1, __int64 a2)
{
  char *v2; // rbx
  int v3; // eax
  bool v4; // al
  FILE *stream; // [rsp+10h] [rbp-20h] BYREF
  char *v7; // [rsp+18h] [rbp-18h] BYREF

  v4 = 0;
  if ( (unsigned __int8)sub_402125(&stream, &v7, a1, a2) )
  {
    v2 = v7;
    v3 = fileno(stream);
    if ( (unsigned __int8)sub_401AA0(v3, (__int64)v2) )
      v4 = 1;
  }
  return v4;
}
