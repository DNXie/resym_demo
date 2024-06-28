#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_401D22(__int64 a1, char a2, __int64 a3)
{
  size_t result; // rax

  if ( a3 )
  {
    if ( a2 != 1 )
      result = (unsigned __int8)byte_6092E5 ^ 1u;
    else
      result = (unsigned __int8)byte_6092E6 ^ 1u;
  }
  else
  {
    result = (unsigned __int8)byte_6092E4 ^ 1u;
  }
  if ( !(_BYTE)result )
  {
    if ( !dword_6092E0 )
      printf("%7lu ", a3 + 1);
    result = fwrite_unlocked(*(const void **)(a1 + 16), 1uLL, *(_QWORD *)(a1 + 8), stdout);
  }
  return result;
}
