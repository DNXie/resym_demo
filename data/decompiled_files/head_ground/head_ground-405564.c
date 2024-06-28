#include "/share/binary_recovery/clang-parser/defs.hh"
ssize_t __fastcall sub_405564(int a1, void *a2, size_t a3)
{
  ssize_t result; // rax
  ssize_t v5; // [rsp+28h] [rbp-8h]

LABEL_1:
  for ( result = read(a1, a2, a3); ; result = read(a1, a2, 0x7FFFE000uLL) )
  {
    v5 = result;
    if ( result >= 0 )
      break;
    if ( *__errno_location() == 4 )
      goto LABEL_1;
    if ( *__errno_location() != 22 || a3 <= 0x7FFFE000 )
      return v5;
    a3 = 2147475456LL;
  }
  return result;
}
