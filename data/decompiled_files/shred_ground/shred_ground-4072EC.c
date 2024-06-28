#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_4072EC(_QWORD *a1, char *a2, size_t a3)
{
  size_t result; // rax

  if ( *a1 )
    result = sub_407116((__int64)a1, a2, a3);
  else
    result = (size_t)sub_4071B6(a1 + 3, a2, a3);
  return result;
}
