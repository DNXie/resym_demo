#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401E1F(const void *a1, size_t a2)
{
  char *v2; // rbx
  int *v3; // rax

  if ( a2 )
  {
    if ( !fwrite_unlocked(a1, 1uLL, a2, stdout) )
    {
      v2 = gettext("write error");
      v3 = __errno_location();
      error(1, *v3, v2);
    }
  }
}
