#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_40905A(const char **a1)
{
  size_t v3; // [rsp+10h] [rbp-10h]
  size_t v4; // [rsp+18h] [rbp-8h]

  v3 = 0LL;
  while ( *a1 )
  {
    v4 = strlen(*a1);
    if ( v4 > v3 )
      v3 = v4;
    ++a1;
  }
  return v3 + 1;
}
