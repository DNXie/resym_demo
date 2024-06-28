#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 sub_402978()
{
  char *v0; // r14
  char *v1; // r13
  char *v2; // r12
  char *v3; // rbx
  char *v4; // r15
  char *v5; // rax
  char *v7; // [rsp+28h] [rbp-38h]

  v0 = gettext("EXIT");
  v1 = gettext("COMMENT");
  v2 = gettext("PID");
  v3 = gettext("IDLE");
  v7 = gettext("TIME");
  v4 = gettext("LINE");
  v5 = gettext("NAME");
  return sub_401BAC(-1, (__int64)v5, 32, -1, (__int64)v4, (__int64)v7, v3, v2, (__int64)v1, v0);
}
