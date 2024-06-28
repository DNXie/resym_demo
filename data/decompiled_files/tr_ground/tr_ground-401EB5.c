#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401EB5(const char *a1, size_t a2)
{
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; i <= 0xB; ++i )
  {
    if ( !strncmp(a1, (&s)[i], a2) && strlen((&s)[i]) == a2 )
      return i;
  }
  return 9999LL;
}
