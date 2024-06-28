#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401C02(FILE *a1, FILE *a2, char a3)
{
  char *v3; // rbx
  int *v4; // rax
  unsigned __int64 v5; // rax
  size_t v6; // rax
  char *v7; // rbx
  int *v8; // rax
  char *v9; // rax
  unsigned int v10; // eax
  char v13; // [rsp+23h] [rbp-1C4Dh]
  unsigned int i; // [rsp+24h] [rbp-1C4Ch]
  size_t n; // [rsp+28h] [rbp-1C48h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-1C40h]
  size_t v17; // [rsp+38h] [rbp-1C38h]
  int v18[4]; // [rsp+40h] [rbp-1C30h] BYREF
  char ptr[3072]; // [rsp+50h] [rbp-1C20h] BYREF
  char v20[4104]; // [rsp+C50h] [rbp-1020h] BYREF
  unsigned __int64 v21; // [rsp+1C58h] [rbp-18h]

  v21 = __readfsqword(0x28u);
  sub_40256A(v18);
  do
  {
    v16 = 0LL;
    do
    {
      n = fread_unlocked(&v20[v16], 1uLL, 4096 - v16, a1);
      if ( a3 )
      {
        v17 = 0LL;
        while ( n && v17 < n )
        {
          if ( (unsigned __int8)sub_40253F((unsigned int)v20[v16 + v17]) || v20[v16 + v17] == 61 )
            ++v17;
          else
            memmove(&v20[v17 + v16], &v20[v16 + 1 + v17], --n - v17);
        }
      }
      v16 += n;
      if ( ferror_unlocked(a1) )
      {
        v3 = gettext("read error");
        v4 = __errno_location();
        error(1, *v4, v3);
      }
    }
    while ( v16 <= 0xFFF && !feof_unlocked(a1) );
    for ( i = 0; ; ++i )
    {
      v10 = feof_unlocked(a1) ? 2 : 1;
      if ( v10 <= i || i == 1 && !v18[0] )
        break;
      n = 3072LL;
      if ( i )
        v5 = 0LL;
      else
        v5 = v16;
      v13 = sub_4029AC(v18, v20, v5, ptr, &n);
      v6 = fwrite_unlocked(ptr, 1uLL, n, a2);
      if ( v6 < n )
      {
        v7 = gettext("write error");
        v8 = __errno_location();
        error(1, *v8, v7);
      }
      if ( v13 != 1 )
      {
        v9 = gettext("invalid input");
        error(1, 0, v9);
      }
    }
  }
  while ( !feof_unlocked(a1) );
  return __readfsqword(0x28u) ^ v21;
}
