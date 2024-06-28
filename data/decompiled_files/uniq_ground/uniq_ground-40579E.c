#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40579E(int a1, __int64 a2, size_t a3, __int64 a4, size_t a5)
{
  char *v5; // rax
  char *v6; // rax
  void *v7; // r12
  void *v8; // rbx
  char *v9; // rax

  v5 = gettext("string comparison failed");
  error(0, a1, v5);
  v6 = gettext("Set LC_ALL='C' to work around the problem.");
  error(0, 0, v6);
  v7 = sub_404981(1, 6, a4, a5);
  v8 = sub_404981(0, 6, a2, a3);
  v9 = gettext("The strings compared were %s and %s.");
  error(status, 0, v9, v8, v7);
}
