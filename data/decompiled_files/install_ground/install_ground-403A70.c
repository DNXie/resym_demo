#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_403A70(char *a1, char *a2, __int64 a3)
{
  bool v3; // al
  char *v4; // rbx
  int *v5; // rax
  _BOOL8 result; // rax
  char *v7; // rax
  bool v8; // al
  bool v10; // [rsp+23h] [rbp-2Dh]
  unsigned int v11; // [rsp+24h] [rbp-2Ch]
  int v12; // [rsp+28h] [rbp-28h]
  int errnum; // [rsp+2Ch] [rbp-24h]
  _DWORD v14[8]; // [rsp+30h] [rbp-20h] BYREF

  v3 = *a1 != 47 || *a2 != 47;
  v10 = v3;
  v11 = 0;
  sub_402888(v14);
  if ( !v10 )
    sub_410498(v14);
  if ( sub_40D642(a2, v14, sub_4031CD, a3) == -1 )
  {
    v4 = gettext("cannot create directory %s");
    v5 = __errno_location();
    error(0, *v5, v4, a2);
    v11 = 1;
  }
  if ( !v10 )
    goto LABEL_22;
  v12 = sub_410338(v14, v11);
  errnum = *__errno_location();
  sub_410498(v14);
  if ( v12 > 0 )
    return 0LL;
  if ( v12 >= 0 || v11 )
  {
LABEL_22:
    v8 = !v11 && (unsigned __int8)sub_403924(a1, a2, a3);
    result = v8;
  }
  else
  {
    v7 = gettext("cannot create directory %s");
    error(0, errnum, v7, a2);
    result = 0LL;
  }
  return result;
}
