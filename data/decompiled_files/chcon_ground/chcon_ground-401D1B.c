#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D1B(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r12
  char *v3; // rbx
  int *v4; // rax
  __int64 result; // rax
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  __int64 v12; // r12
  char *v13; // rbx
  int *v14; // rax
  __int64 v15; // r12
  char *v16; // rbx
  int *v17; // rax
  char v18; // [rsp+17h] [rbp-19h]
  unsigned int v19; // [rsp+18h] [rbp-18h]
  int v20; // [rsp+1Ch] [rbp-14h]

  v18 = 1;
  v19 = sub_401C53(a1);
  if ( v19 )
  {
    if ( qword_610318 && (unsigned int)sub_401C97(v19, qword_610318) )
    {
      v6 = sub_40315E(qword_610318);
      v7 = gettext("failed to set %s security context component to %s");
      v8 = __errno_location();
      error(0, *v8, v7, "user", v6);
      v18 = 0;
    }
    if ( qword_610328 && (unsigned int)sub_401CD9(v19, qword_610328) )
    {
      v9 = sub_40315E(qword_610328);
      v10 = gettext("failed to set %s security context component to %s");
      v11 = __errno_location();
      error(0, *v11, v10, "range", v9);
      v18 = 0;
    }
    if ( qword_610320 && (unsigned int)sub_401CB8(v19, qword_610320) )
    {
      v12 = sub_40315E(qword_610320);
      v13 = gettext("failed to set %s security context component to %s");
      v14 = __errno_location();
      error(0, *v14, v13, "role", v12);
      v18 = 0;
    }
    if ( qword_610330 && (unsigned int)sub_401CFA(v19, qword_610330) )
    {
      v15 = sub_40315E(qword_610330);
      v16 = gettext("failed to set %s security context component to %s");
      v17 = __errno_location();
      error(0, *v17, v16, "type", v15);
      v18 = 0;
    }
    if ( v18 != 1 )
    {
      v20 = *__errno_location();
      sub_401C8E();
      *__errno_location() = v20;
      result = 1LL;
    }
    else
    {
      *a2 = v19;
      result = 0LL;
    }
  }
  else
  {
    v2 = sub_404777(a1);
    v3 = gettext("failed to create security context: %s");
    v4 = __errno_location();
    error(0, *v4, v3, v2);
    result = 1LL;
  }
  return result;
}
