#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4018EE(const char *a1)
{
  const char *v1; // rax
  int result; // eax

  if ( byte_6091D0 )
    v1 = &locale;
  else
    v1 = "\n";
  result = printf("%s==> %s <==\n", v1, a1);
  byte_6091D0 = 0;
  return result;
}
