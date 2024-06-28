#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401F23(unsigned int a1, __int64 a2)
{
  char *v2; // rbx
  int *v3; // rax

  if ( a1 != -1 && a1 )
  {
    if ( close(a1) )
    {
      v2 = gettext("closing %s (fd=%d)");
      v3 = __errno_location();
      error(0, *v3, v2, a2, a1);
    }
  }
}
