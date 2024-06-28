#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_402522()
{
  __int64 v0; // r12
  char *v1; // rbx
  int *v2; // rax
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax

  if ( close(0) < 0 )
  {
    v0 = sub_40685B(qword_60E340);
    v1 = gettext("closing input file %s");
    v2 = __errno_location();
    error(1, *v2, v1, v0);
  }
  if ( close(1) < 0 )
  {
    v3 = sub_40685B(qword_60E348);
    v4 = gettext("closing output file %s");
    v5 = __errno_location();
    error(1, *v5, v4, v3);
  }
}
