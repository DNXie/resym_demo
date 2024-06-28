#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401E26(__int64 a1, char a2, char ***a3)
{
  char *v3; // rbx
  int *v4; // rax
  __int64 v5; // rax
  char **v6; // rbx
  __int64 v9; // [rsp+28h] [rbp-48h] BYREF
  char *i; // [rsp+30h] [rbp-40h]
  unsigned __int64 j; // [rsp+38h] [rbp-38h]
  unsigned __int64 v12; // [rsp+40h] [rbp-30h]
  char *v13; // [rsp+48h] [rbp-28h]
  unsigned __int64 v14; // [rsp+50h] [rbp-20h]
  char **v15; // [rsp+58h] [rbp-18h]

  v13 = 0LL;
  v13 = (char *)sub_40615A(a1, &v9);
  if ( !v13 )
  {
    v3 = gettext("read error");
    v4 = __errno_location();
    error(1, *v4, v3);
  }
  if ( v9 && v13[v9 - 1] != a2 )
  {
    v5 = v9++;
    v13[v5] = a2;
  }
  v14 = (unsigned __int64)&v13[v9];
  v12 = 0LL;
  for ( i = v13; (unsigned __int64)i < v14; i = sub_401DED(i, a2, v14 - (_QWORD)i) )
    ++v12;
  v15 = (char **)sub_406D7A(v12 + 1, 8LL);
  *a3 = v15;
  i = v13;
  *v15 = v13;
  for ( j = 1LL; j <= v12; ++j )
  {
    v6 = &v15[j];
    i = sub_401DED(i, a2, v14 - (_QWORD)i);
    *v6 = i;
  }
  return v12;
}
