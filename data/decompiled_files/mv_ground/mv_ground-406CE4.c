#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406CE4(__int64 a1, const char *a2, char a3, char a4)
{
  int v4; // eax
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  char *v13; // rbx
  int *v14; // rax
  bool v17; // [rsp+2Fh] [rbp-21h]

  v4 = sub_41437A(4294967196LL, a1, 4294967196LL, a2, 0LL);
  v17 = v4 != 0;
  if ( v4 && a3 && *__errno_location() == 17 )
  {
    if ( unlink(a2) )
    {
      v5 = sub_40D278(a2);
      v6 = gettext("cannot remove %s");
      v7 = __errno_location();
      error(0, *v7, v6, v5);
      return 0LL;
    }
    if ( a4 )
    {
      v9 = sub_40D278(a2);
      v10 = gettext("removed %s\n");
      printf(v10, v9);
    }
    v17 = (unsigned int)sub_41437A(4294967196LL, a1, 4294967196LL, a2, 0LL) != 0;
  }
  if ( !v17 )
    return 1LL;
  v11 = sub_40D254(1LL, a1);
  v12 = sub_40D254(0LL, a2);
  v13 = gettext("cannot create hard link %s to %s");
  v14 = __errno_location();
  error(0, *v14, v13, v12, v11);
  return 0LL;
}
