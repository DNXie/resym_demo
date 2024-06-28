#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_403B27()
{
  int v1; // [rsp+4h] [rbp-Ch]
  unsigned __int64 i; // [rsp+8h] [rbp-8h]

  v1 = 1;
  for ( i = 0LL; i < qword_612330; ++i )
    v1 = sub_401937(v1, dword_40E620[*(unsigned int *)(qword_612328 + 40 * i + 4)]);
  return (unsigned int)v1;
}
