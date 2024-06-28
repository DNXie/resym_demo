#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A72C(__int64 a1, unsigned int a2, const char *a3, int a4, __mode_t a5)
{
  int v5; // eax
  const char *v6; // rbx
  int *v7; // rax
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax
  __int64 result; // rax

  v5 = sub_40A6FC(a1, a2, a3, a4, a5);
  if ( v5 == -2 )
  {
    v6 = (const char *)sub_40E392(a1);
    v7 = __errno_location();
    error(0, *v7, "%s", v6);
    result = 0xFFFFFFFFLL;
  }
  else if ( v5 == -1 )
  {
    v8 = sub_40E392(a3);
    v9 = gettext("preserving permissions for %s");
    v10 = __errno_location();
    error(0, *v10, v9, v8);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  return result;
}
