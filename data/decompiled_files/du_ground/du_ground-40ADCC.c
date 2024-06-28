#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40ADCC(char *a1, _QWORD *a2, int *a3)
{
  char *v5; // [rsp+18h] [rbp-28h]
  int v6; // [rsp+2Ch] [rbp-14h]
  int v7; // [rsp+30h] [rbp-10h]
  unsigned int v8; // [rsp+34h] [rbp-Ch]
  char *v9; // [rsp+38h] [rbp-8h] BYREF

  v5 = a1;
  v6 = 0;
  if ( a1 || (v5 = getenv("BLOCK_SIZE")) != 0LL || (v5 = getenv("BLOCKSIZE")) != 0LL )
  {
    if ( *v5 == 39 )
    {
      v6 = 4;
      ++v5;
    }
    v7 = sub_403EE7(v5, (__int64)off_4174C0, (__int64)dword_4174D8, 4uLL);
    if ( v7 < 0 )
    {
      v8 = sub_40F4BB(v5, &v9, 0LL, a2, "eEgGkKmMpPtTyYzZ0");
      if ( v8 )
      {
        *a3 = 0;
        return v8;
      }
      while ( *v5 <= 47 || *v5 > 57 )
      {
        if ( v5 == v9 )
        {
          v6 |= 0x80u;
          if ( *(v9 - 1) == 66 )
            v6 |= 0x100u;
          if ( *(v9 - 1) != 66 || *(v9 - 2) == 105 )
            v6 |= 0x20u;
          break;
        }
        ++v5;
      }
    }
    else
    {
      v6 |= dword_4174D8[v7];
      *a2 = 1LL;
    }
  }
  else
  {
    *a2 = sub_40ADAB();
  }
  *a3 = v6;
  return 0LL;
}
