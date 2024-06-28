#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401FD3(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // rax

  if ( (unsigned __int8)sub_4062C8(a1, a2, a3) != 1 )
  {
    v3 = sub_407A47(a2);
    v4 = gettext("invalid date format %s");
    error(1, 0, v4, v3);
  }
}
