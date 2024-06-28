#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_401F89(const char *a1)
{
  const char *v1; // rax
  int result; // eax

  if ( byte_610260 )
    v1 = &locale;
  else
    v1 = "\n";
  result = printf("%s==> %s <==\n", v1, a1);
  byte_610260 = 0;
  return result;
}
