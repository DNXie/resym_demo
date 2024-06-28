#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_4130A3(_QWORD *a1, char *a2, size_t a3)
{
  size_t result; // rax

  if ( *a1 )
    result = sub_412ECD((__int64)a1, a2, a3);
  else
    result = (size_t)sub_412F6D(a1 + 3, a2, a3);
  return result;
}
