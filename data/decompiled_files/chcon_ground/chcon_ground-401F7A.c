#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401F7A(unsigned int a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  __int64 v7; // rbx
  char *v8; // rax
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // r12
  char *v12; // rbx
  int *v13; // rax
  unsigned int v14; // [rsp+10h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+14h] [rbp-3Ch]
  int v16; // [rsp+18h] [rbp-38h]
  int v17; // [rsp+1Ch] [rbp-34h]
  char *s2; // [rsp+20h] [rbp-30h] BYREF
  char *s1; // [rsp+28h] [rbp-28h]

  s2 = 0LL;
  v15 = 0;
  if ( qword_610310 )
  {
    v14 = sub_401C53(qword_610310);
    if ( !v14 )
      abort();
  }
  else
  {
    if ( byte_610300 )
      v2 = sub_408101(a1, a2, &s2);
    else
      v2 = sub_40838B(a1, a2, &s2);
    v16 = v2;
    if ( v2 < 0 && *__errno_location() != 61 )
    {
      v3 = sub_40315E(a2);
      v4 = gettext("failed to get security context of %s");
      v5 = __errno_location();
      error(0, *v5, v4, v3);
      return 1LL;
    }
    if ( !s2 )
    {
      v7 = sub_40315E(a2);
      v8 = gettext("can't apply partial context to unlabeled file %s");
      error(0, 0, v8, v7);
      return 1LL;
    }
    if ( (unsigned int)sub_401D1B((__int64)s2, &v14) )
      return 1LL;
  }
  s1 = (char *)sub_401C71(v14);
  if ( !s2 || strcmp(s1, s2) )
  {
    if ( byte_610300 )
      v9 = sub_408615(a1, a2, s1);
    else
      v9 = sub_40889F(a1, a2, s1);
    v17 = v9;
    if ( v9 )
    {
      v15 = 1;
      v10 = sub_40313A(1LL, s1);
      v11 = sub_40313A(0LL, a2);
      v12 = gettext("failed to change context of %s to %s");
      v13 = __errno_location();
      error(0, *v13, v12, v11, v10);
    }
  }
  sub_401C8E();
  sub_401C27();
  return v15;
}
