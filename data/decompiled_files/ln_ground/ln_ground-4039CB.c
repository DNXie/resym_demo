#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4039CB(_BYTE *a1, _BYTE *a2, _QWORD *a3)
{
  _BOOL4 v3; // eax
  const char *v6; // [rsp+20h] [rbp-40h]
  size_t v7; // [rsp+28h] [rbp-38h]
  size_t n; // [rsp+30h] [rbp-30h]
  _BOOL8 v9; // [rsp+38h] [rbp-28h]
  char *s; // [rsp+40h] [rbp-20h]
  size_t v11; // [rsp+48h] [rbp-18h]
  void *dest; // [rsp+50h] [rbp-10h]
  _BYTE *v13; // [rsp+58h] [rbp-8h]
  char *v14; // [rsp+58h] [rbp-8h]

  v6 = sub_40375A(a1);
  v7 = sub_4037C3(v6);
  n = v6 - a1 + v7;
  v3 = v7 && v6[v7 - 1] != 47;
  v9 = v3;
  s = sub_4039AB(a2);
  v11 = strlen(s);
  dest = malloc(v9 + n + v11 + 1);
  if ( !dest )
    return 0LL;
  v13 = mempcpy(dest, a1, n);
  *v13 = 47;
  v14 = &v13[v9];
  if ( a3 )
    *a3 = &v14[-(*a2 == 47)];
  *(_BYTE *)mempcpy(v14, s, v11) = 0;
  return dest;
}
