#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_406C0E(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // rbx
  const char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax

  v3 = (const char *)sub_40D254(1LL, a2);
  v4 = (const char *)sub_40D254(0LL, a1);
  printf("%s -> %s", v4, v3);
  if ( a3 )
  {
    v5 = sub_40D278(a3);
    v6 = gettext(" (backup: %s)");
    printf(v6, v5);
  }
  return putchar_unlocked(10);
}
