#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4023EB()
{
  char *v0; // rbx
  int *v1; // rax

  if ( !qword_60B320 && !sub_40224A() )
  {
    v0 = gettext("input disappeared");
    v1 = __errno_location();
    error(1, *v1, v0);
  }
  return *(_QWORD *)(qword_60B320 + 24);
}
