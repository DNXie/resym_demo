#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_403C0C()
{
  __int64 result; // rax
  __int64 i; // [rsp+18h] [rbp-8h]

  result = qword_618548;
  for ( i = qword_618548; i; i = result )
  {
    sub_402BA3(
      *(const char **)i,
      *(const char **)(i + 8),
      0LL,
      *(const char **)(i + 16),
      (*(_BYTE *)(i + 32) & 1) != 0,
      (*(_BYTE *)(i + 32) & 2) != 0,
      0LL);
    result = *(_QWORD *)(i + 40);
  }
  return result;
}
