#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403001(char *a1, _QWORD *a2, int *a3)
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
    v7 = sub_405CE6(v5, off_4066F0, dword_406708, 4LL);
    if ( v7 < 0 )
    {
      v8 = sub_40567F(v5, &v9, 0LL, a2, "eEgGkKmMpPtTyYzZ0");
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
      v6 |= dword_406708[v7];
      *a2 = 1LL;
    }
  }
  else
  {
    *a2 = sub_402FE0();
  }
  *a3 = v6;
  return 0LL;
}
