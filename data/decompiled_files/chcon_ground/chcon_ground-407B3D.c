#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407B3D(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+10h] [rbp-10h]
  void *v4; // [rsp+18h] [rbp-8h]

  v3 = *(_QWORD *)(a1 + 48) + a2 + 256;
  if ( *(_QWORD *)(a1 + 48) <= v3 )
  {
    *(_QWORD *)(a1 + 48) = v3;
    v4 = realloc(*(void **)(a1 + 32), *(_QWORD *)(a1 + 48));
    if ( v4 )
    {
      *(_QWORD *)(a1 + 32) = v4;
      result = 1LL;
    }
    else
    {
      free(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = 0LL;
      result = 0LL;
    }
  }
  else
  {
    free(*(void **)(a1 + 32));
    *(_QWORD *)(a1 + 32) = 0LL;
    *__errno_location() = 36;
    result = 0LL;
  }
  return result;
}
