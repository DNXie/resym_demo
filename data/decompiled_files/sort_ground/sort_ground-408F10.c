#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_408F10(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, FILE *a4, char *a5)
{
  char *v5; // rbx
  char *v6; // rax
  FILE **v11; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-18h]

  v12 = sub_40811E(a1, a3, (__int64 *)&v11);
  if ( v12 < a3 && v12 <= 1 )
  {
    v5 = *(char **)(16 * v12 + a1);
    v6 = gettext("open failed");
    sub_402C5C(v6, v5);
  }
  sub_408239(a1, a2, v12, a4, a5, v11);
  return v12;
}
