#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401800(int a1, __int64 a2)
{
  __int64 v2; // r12
  char *v3; // rbx
  int *v4; // rax
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax

  switch ( a1 )
  {
    case 2:
      v5 = sub_403DCC(a2);
      v6 = gettext("error writing %s");
      v7 = __errno_location();
      error(0, *v7, v6, v5);
      break;
    case 3:
      v8 = sub_403DCC(a2);
      v9 = gettext("%s: file has shrunk too much");
      v10 = __errno_location();
      error(0, *v10, v9, v8);
      break;
    case 1:
      v2 = sub_403DCC(a2);
      v3 = gettext("error reading %s");
      v4 = __errno_location();
      error(0, *v4, v3, v2);
      break;
    default:
      abort();
  }
}
