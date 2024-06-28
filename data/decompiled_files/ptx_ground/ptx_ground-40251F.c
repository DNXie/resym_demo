#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 *__fastcall sub_40251F(const char *a1, __int64 *a2)
{
  bool v2; // al
  __int64 v3; // rax
  const char *v4; // rax
  const char *v5; // rbx
  int *v6; // rax
  __int64 *result; // rax
  bool v8; // [rsp+17h] [rbp-19h]
  __int64 v9[3]; // [rsp+18h] [rbp-18h] BYREF

  v2 = !a1 || !*a1 || !strcmp(a1, "-");
  v8 = v2;
  if ( v2 )
    v3 = sub_4082BE(stdin, v9);
  else
    v3 = sub_408639(a1, v9);
  *a2 = v3;
  if ( !*a2 )
  {
    if ( v8 )
      v4 = "-";
    else
      v4 = a1;
    v5 = (const char *)sub_406B26(v4);
    v6 = __errno_location();
    error(1, *v6, "%s", v5);
  }
  result = a2;
  a2[1] = v9[0] + *a2;
  return result;
}
