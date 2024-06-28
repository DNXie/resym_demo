#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406F2D(const char **a1, const char **a2, __int64 (__fastcall *a3)(const char *, const char *))
{
  const char *v3; // rdx
  const char *v4; // rax
  __int64 result; // rax
  unsigned int v7; // [rsp+2Ch] [rbp-14h]
  char *v8; // [rsp+30h] [rbp-10h]
  char *v9; // [rsp+38h] [rbp-8h]

  v8 = strrchr(*a1, 46);
  v9 = strrchr(*a2, 46);
  if ( v9 )
    v3 = v9;
  else
    v3 = &locale;
  if ( v8 )
    v4 = v8;
  else
    v4 = &locale;
  v7 = a3(v4, v3);
  if ( v7 )
    result = v7;
  else
    result = a3(*a1, *a2);
  return result;
}
