#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_401845(const char *a1)
{
  int v1; // ebx
  unsigned int v2; // eax
  int v3; // er8
  int v4; // er9
  int v5; // eax
  int *v6; // rax
  __int64 v7; // r12
  char *v8; // rbx
  int *v9; // rax
  char v11; // [rsp+0h] [rbp-30h]
  bool v12; // [rsp+17h] [rbp-19h]
  char *v13; // [rsp+18h] [rbp-18h]

  v12 = 1;
  sub_401FA7(a1);
  while ( 1 )
  {
    v13 = strrchr(a1, 47);
    if ( !v13 )
      break;
    while ( v13 > a1 && *v13 == 47 )
      --v13;
    v13[1] = 0;
    if ( byte_60C23B )
    {
      v1 = sub_402114(a1);
      v2 = (unsigned int)gettext("removing directory, %s");
      sub_401CE8((_DWORD)stdout, v2, v1, v2, v3, v4, v11);
    }
    v5 = rmdir(a1);
    v12 = v5 == 0;
    if ( v5 )
    {
      v6 = __errno_location();
      if ( sub_4017E9(*v6, a1) )
        return 1;
      v7 = sub_402114(a1);
      v8 = gettext("failed to remove directory %s");
      v9 = __errno_location();
      error(0, *v9, v8, v7);
      return v12;
    }
  }
  return v12;
}
