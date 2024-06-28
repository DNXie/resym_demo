#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402FFF(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  __int64 v9; // [rsp+8h] [rbp-2058h]
  char *s; // [rsp+28h] [rbp-2038h]
  char *sa; // [rsp+28h] [rbp-2038h]
  __int64 v12; // [rsp+30h] [rbp-2030h]
  char *v13; // [rsp+38h] [rbp-2028h]
  char v14[8200]; // [rsp+40h] [rbp-2020h] BYREF
  unsigned __int64 v15; // [rsp+2048h] [rbp-18h]

  v9 = a3;
  v15 = __readfsqword(0x28u);
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    s = v14;
    v12 = sub_40A739(a2, v14, 0x2000LL);
    v13 = &v14[v12];
    if ( !v12 )
      return 0xFFFFFFFFLL;
    if ( v12 == -1 )
      break;
    *a4 += v12;
    while ( 1 )
    {
      sa = (char *)memchr(s, 10, v13 - s);
      if ( !sa )
        break;
      s = sa + 1;
      if ( !--v9 )
      {
        if ( s < v13 )
          sub_401E1F(s, v13 - s);
        return 0LL;
      }
    }
  }
  v5 = sub_408FA1(a1);
  v6 = gettext("error reading %s");
  v7 = __errno_location();
  error(0, *v7, v6, v5);
  return 1LL;
}
