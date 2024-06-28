#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401FCB(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp-2058h]
  __int64 v9; // [rsp+20h] [rbp-2040h]
  unsigned __int64 v10; // [rsp+28h] [rbp-2038h]
  size_t v11; // [rsp+38h] [rbp-2028h]
  char v12[8200]; // [rsp+40h] [rbp-2020h] BYREF
  unsigned __int64 v13; // [rsp+2048h] [rbp-18h]

  v8 = a3;
  v13 = __readfsqword(0x28u);
  v10 = a3;
  v9 = 0LL;
  while ( 1 )
  {
    v3 = 0x2000LL;
    if ( v10 <= 0x2000 )
      v3 = v10;
    v11 = sub_40A739(a2, v12, v3);
    if ( v11 == -1LL )
      break;
    if ( v11 )
    {
      sub_401E1F(v12, v11);
      v9 += v11;
      if ( v8 == -1LL )
        continue;
      v10 -= v11;
      if ( v10 )
      {
        if ( v8 != -2LL )
          continue;
      }
    }
    return v9;
  }
  if ( *__errno_location() != 11 )
  {
    v4 = sub_408FA1(a1);
    v5 = gettext("error reading %s");
    v6 = __errno_location();
    error(1, *v6, v5, v4);
  }
  return v9;
}
