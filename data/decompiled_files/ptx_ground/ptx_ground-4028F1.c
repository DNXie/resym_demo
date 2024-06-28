#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4028F1(const char *a1, _QWORD *a2)
{
  _BYTE *v2; // [rsp+10h] [rbp-20h]
  _BYTE *v3; // [rsp+18h] [rbp-18h]
  _BYTE *v4; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-8h]

  sub_40251F(a1, (__int64 *)&v4);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v2 = v4;
  while ( v5 > (unsigned __int64)v2 )
  {
    v3 = v2;
    while ( v5 > (unsigned __int64)v2 && *v2 != 10 )
      ++v2;
    if ( v2 > v3 )
    {
      if ( a2[2] == a2[1] )
      {
        if ( a2[1] > 0x7FFFFFFFFFFFFFFuLL )
          sub_40976A();
        a2[1] = 2LL * a2[1] + 1;
        *a2 = sub_40961D(*a2, 16LL * a2[1]);
      }
      *(_QWORD *)(16LL * a2[2] + *a2) = v3;
      *(_WORD *)(16LL * a2[2]++ + *a2 + 8) = (_WORD)v2 - (_WORD)v3;
    }
    if ( v5 > (unsigned __int64)v2 )
      ++v2;
  }
  qsort((void *)*a2, a2[2], 0x10uLL, (__compar_fn_t)sub_40260E);
}
