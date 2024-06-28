#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_405D50(_QWORD *a1, char *a2, size_t a3)
{
  size_t result; // rax

  if ( *a1 )
    result = sub_405B7A((__int64)a1, a2, a3);
  else
    result = (size_t)sub_405C1A(a1 + 3, a2, a3);
  return result;
}
