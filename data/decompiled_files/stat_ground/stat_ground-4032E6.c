#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4032E6(const char *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  const char *v7; // rax
  unsigned __int8 v10; // [rsp+27h] [rbp-19h]
  __int64 v11[3]; // [rsp+28h] [rbp-18h] BYREF

  v10 = 0;
  if ( byte_6163A0 )
    v3 = (unsigned int)sub_4020C7(a3, v11) >> 31;
  else
    v3 = (unsigned int)sub_4020E9(a3, v11) >> 31;
  if ( (_BYTE)v3 )
  {
    v4 = sub_405DD3(a3);
    v5 = gettext("failed to get security context of %s");
    v6 = __errno_location();
    error(0, *v6, v5, v4);
    v11[0] = 0LL;
    v10 = 1;
  }
  *(_WORD *)&a1[a2] = 115;
  if ( v11[0] )
    v7 = (const char *)v11[0];
  else
    v7 = "?";
  printf(a1, v7);
  if ( v11[0] )
    sub_4020BD();
  return v10;
}
