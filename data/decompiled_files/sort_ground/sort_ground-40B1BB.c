#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40B1BB(__int64 a1, _QWORD *a2, const char *a3)
{
  unsigned int v3; // eax
  __int64 v4; // r12
  char *v5; // rbx
  char *v6; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+28h] [rbp-18h] BYREF

  v3 = sub_415A31(a1, &v9, 10LL, v10, locale);
  if ( v3 == 2 )
  {
LABEL_8:
    *a2 = v10[0];
    if ( *a2 == v10[0] )
      return v9;
LABEL_9:
    *a2 = -1LL;
    return v9;
  }
  if ( v3 <= 2 )
  {
    if ( v3 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( v3 == 3 )
    goto LABEL_9;
  if ( v3 != 4 )
    return v9;
  if ( a3 )
  {
    v4 = sub_4112FB(a1);
    v5 = gettext(a3);
    v6 = gettext("%s: invalid count at start of %s");
    error(2, 0, v6, v5, v4);
  }
  return 0LL;
}
