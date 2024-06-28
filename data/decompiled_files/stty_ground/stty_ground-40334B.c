#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40334B(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-8h]

  if ( !strcmp(*(const char **)a1, "min") || !strcmp(*(const char **)a1, "time") )
    goto LABEL_15;
  if ( *(_BYTE *)a2 && *(_BYTE *)(a2 + 1) )
  {
    if ( !strcmp((const char *)a2, "^-") || !strcmp((const char *)a2, "undef") )
    {
      LOBYTE(v5) = 0;
    }
    else
    {
      if ( *(_BYTE *)a2 != 94 || !*(_BYTE *)(a2 + 1) )
      {
LABEL_15:
        LOBYTE(v5) = sub_4045EC(a2, 255LL);
        goto LABEL_16;
      }
      if ( *(_BYTE *)(a2 + 1) == 63 )
        LOBYTE(v5) = 127;
      else
        v5 = sub_4018AD(*(_BYTE *)(a2 + 1)) & 0x9F;
    }
  }
  else
  {
    LOBYTE(v5) = sub_4018AD(*(_BYTE *)a2);
  }
LABEL_16:
  result = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a3 + result + 17) = v5;
  return result;
}
