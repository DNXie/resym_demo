#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401CFF(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int *v3; // rdx
  int v4; // eax
  int v5; // [rsp+14h] [rbp-Ch]
  __int64 v6; // [rsp+18h] [rbp-8h] BYREF

  v5 = sub_406489(a1, 0LL, 10LL, &v6, "EGkKMPTYZ0");
  if ( v5 )
  {
    v3 = __errno_location();
    if ( v5 == 1 )
      v4 = 75;
    else
      v4 = 0;
    *v3 = v4;
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *__errno_location() = 0;
    *a2 = v6;
    result = 0LL;
  }
  return result;
}
