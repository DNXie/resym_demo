#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_406079(__int64 a1, __int64 a2)
{
  _BOOL4 v2; // eax
  char *v3; // rax
  char *v4; // rax
  _BOOL4 v5; // eax
  char v7; // [rsp+15h] [rbp-4Bh]
  unsigned __int8 v8; // [rsp+16h] [rbp-4Ah]
  char v9; // [rsp+17h] [rbp-49h]
  char *endptr; // [rsp+18h] [rbp-48h] BYREF
  char *nptr; // [rsp+20h] [rbp-40h]
  char *v12; // [rsp+28h] [rbp-38h]
  char *v13; // [rsp+30h] [rbp-30h]
  char *v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  long double v17; // [rsp+50h] [rbp-10h]

  v14 = *(char **)a1;
  nptr = v14;
  v12 = &v14[*(_QWORD *)(a1 + 8) - 1];
  if ( a2 )
  {
    if ( *(_QWORD *)a2 != -1LL )
      nptr = (char *)sub_404A5B(a1, (__int64 *)a2);
    if ( *(_QWORD *)(a2 + 16) != -1LL )
      v12 = (char *)sub_404BF1(a1, a2);
    if ( *(_BYTE *)(a2 + 48) || *(_BYTE *)(a2 + 54) || sub_40603C((_BYTE *)a2) )
    {
      v9 = *v12;
      *v12 = 0;
      while ( byte_61D5E0[(unsigned __int8)sub_402B35(*nptr)] )
        ++nptr;
      endptr = nptr;
      if ( v12 >= nptr )
      {
        if ( *(_BYTE *)(a2 + 54) )
        {
          sub_4055B7((unsigned __int8 *)nptr, (unsigned __int8 **)&endptr);
        }
        else if ( *(_BYTE *)(a2 + 52) )
        {
          v17 = strtold(nptr, &endptr);
        }
        else if ( *(_BYTE *)(a2 + 50) || *(_BYTE *)(a2 + 53) )
        {
          v2 = nptr < v12 && *nptr == 45;
          v13 = &nptr[v2];
          v7 = 0;
          do
          {
            while ( 1 )
            {
              v3 = v13++;
              v8 = *v3;
              if ( (unsigned int)(unsigned __int8)*v3 - 48 > 9 )
                break;
              v7 = 1;
            }
          }
          while ( v8 == dword_61D5C4 );
          if ( v8 == dword_61D5C0 )
          {
            while ( 1 )
            {
              v4 = v13++;
              v8 = *v4;
              if ( (unsigned int)(unsigned __int8)*v4 - 48 > 9 )
                break;
              v7 = 1;
            }
          }
          if ( v7 )
          {
            v5 = *(_BYTE *)(a2 + 53) != 1 || !byte_418AC0[v8];
            endptr = &v13[-v5];
          }
        }
        else
        {
          endptr = v12;
        }
      }
      else
      {
        endptr = v12;
      }
      *v12 = v9;
      v12 = endptr;
    }
  }
  v15 = sub_405F65(v14, (unsigned __int64)nptr);
  v16 = sub_405F65(nptr, (unsigned __int64)v12);
  return sub_405FCD(v15, v16);
}
