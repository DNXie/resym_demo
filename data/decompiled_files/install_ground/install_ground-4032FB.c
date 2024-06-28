#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4032FB(char *a1)
{
  __int64 v1; // r12
  char *v2; // rbx
  int *v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  unsigned __int8 v8; // [rsp+1Fh] [rbp-11h]

  v8 = 0;
  if ( owner == -1 && group == -1 || !lchown(a1, owner, group) )
  {
    if ( chmod(a1, mode) )
    {
      v4 = sub_40E392(a1);
      v5 = gettext("cannot change permissions of %s");
      v6 = __errno_location();
      error(0, *v6, v5, v4);
    }
    else
    {
      v8 = 1;
    }
  }
  else
  {
    v1 = sub_40E392(a1);
    v2 = gettext("cannot change ownership of %s");
    v3 = __errno_location();
    error(0, *v3, v2, v1);
  }
  if ( byte_6203A0 )
    sub_402D91(a1);
  return v8;
}
