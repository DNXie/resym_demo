#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40228B(__int64 a1, unsigned int a2, __int64 a3, __off_t a4, unsigned __int64 a5, __int64 *a6)
{
  __int64 result; // rax
  __int64 v7; // r12
  char *v8; // rbx
  int *v9; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  char *v13; // rbx
  int *v14; // rax
  __int64 v18; // [rsp+18h] [rbp-2058h]
  __int64 v19; // [rsp+30h] [rbp-2040h]
  __int64 v20; // [rsp+30h] [rbp-2040h]
  __off_t v21; // [rsp+38h] [rbp-2038h]
  size_t n; // [rsp+40h] [rbp-2030h]
  char *v23; // [rsp+48h] [rbp-2028h]
  char s[8200]; // [rsp+50h] [rbp-2020h] BYREF
  unsigned __int64 v25; // [rsp+2058h] [rbp-18h]

  v18 = a3;
  v25 = __readfsqword(0x28u);
  if ( !a3 )
    return 1LL;
  v19 = (__int64)(a5 - a4) % 0x2000;
  if ( !v19 )
    v19 = 0x2000LL;
  v21 = a5 - v19;
  sub_40213B(a2, a5 - v19, 0, a1);
  v20 = sub_40A739(a2, s, v19);
  if ( v20 == -1 )
  {
    v7 = sub_408FA1(a1);
    v8 = gettext("error reading %s");
    v9 = __errno_location();
    error(0, *v9, v8, v7);
    result = 0LL;
  }
  else
  {
    *a6 = v20 + v21;
    if ( v20 && s[v20 - 1] != 10 )
      --v18;
LABEL_10:
    n = v20;
    do
    {
      if ( !n || (v23 = (char *)memrchr(s, 10, n)) == 0LL )
      {
        if ( v21 == a4 )
        {
          sub_40213B(a2, a4, 0, a1);
          *a6 = sub_401FCB(a1, a2, a5) + a4;
          return 1LL;
        }
        v21 -= 0x2000LL;
        sub_40213B(a2, v21, 0, a1);
        v20 = sub_40A739(a2, s, 0x2000LL);
        if ( v20 == -1 )
        {
          v12 = sub_408FA1(a1);
          v13 = gettext("error reading %s");
          v14 = __errno_location();
          error(0, *v14, v13, v12);
          return 0LL;
        }
        *a6 = v20 + v21;
        if ( !v20 )
          return 1LL;
        goto LABEL_10;
      }
      n = v23 - s;
    }
    while ( v18-- );
    if ( v20 - 1 != n )
      sub_401E1F(v23 + 1, v20 - n - 1);
    v11 = *a6;
    *a6 = v11 + sub_401FCB(a1, a2, a5 - (v21 + v20));
    result = 1LL;
  }
  return result;
}
