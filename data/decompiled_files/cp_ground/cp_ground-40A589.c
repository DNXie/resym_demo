#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A589(const char *a1, int a2, __mode_t a3)
{
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  unsigned int v7; // [rsp+1Ch] [rbp-14h]

  v7 = sub_40A561(a1, a2, a3);
  if ( v7 )
  {
    v3 = sub_40E491(a1);
    v4 = gettext("setting permissions for %s");
    v5 = __errno_location();
    error(0, *v5, v4, v3);
  }
  return v7;
}
