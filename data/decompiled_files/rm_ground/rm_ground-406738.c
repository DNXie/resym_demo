#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406738(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  int v4; // [rsp+18h] [rbp-8h]
  int fd; // [rsp+1Ch] [rbp-4h]

  v4 = *(_DWORD *)(a1 + 44);
  if ( v4 == a2 && v4 != -100 )
    abort();
  if ( a3 )
  {
    fd = sub_40ABED(a1 + 96, (unsigned int)v4);
    if ( fd >= 0 )
      close(fd);
  }
  else if ( (*(_DWORD *)(a1 + 72) & 4) == 0 && v4 >= 0 )
  {
    close(v4);
  }
  result = a1;
  *(_DWORD *)(a1 + 44) = a2;
  return result;
}
