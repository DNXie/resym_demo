#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_403612(FILE *a1, char *a2)
{
  int v2; // eax
  char *v3; // rax
  char *v5; // rax

  v2 = fileno(a1);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( fflush_unlocked(a1) )
      {
        v3 = gettext("fflush failed");
        sub_402C5C(v3, a2);
      }
    }
    else if ( (unsigned int)sub_415E9D(a1) )
    {
      v5 = gettext("close failed");
      sub_402C5C(v5, a2);
    }
  }
  else if ( feof_unlocked(a1) )
  {
    clearerr_unlocked(a1);
  }
}
