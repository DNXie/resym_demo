#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404D95(_BYTE *a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rdx
  __int64 result; // rax
  _BYTE *v4; // [rsp+0h] [rbp-18h]
  int v5; // [rsp+Ch] [rbp-Ch]
  _BYTE *v6; // [rsp+10h] [rbp-8h]

  v4 = a1;
  v5 = 0;
  v6 = a1;
  do
  {
    if ( v5 )
    {
      if ( *v6 == 93 )
        v5 = 0;
    }
    else if ( *v6 == 91 )
    {
      v5 = 1;
    }
    else if ( *v6 == 92 )
    {
      ++v6;
    }
    v1 = v4++;
    v2 = v6++;
    *v1 = *v2;
    result = (unsigned __int8)*v1;
  }
  while ( (_BYTE)result );
  return result;
}
