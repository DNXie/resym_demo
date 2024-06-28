#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40482E(unsigned int a1, size_t a2)
{
  size_t v2; // rax
  size_t v5; // [rsp+18h] [rbp-8h]

  if ( !qword_61B430 )
  {
    qword_61B430 = (__int64)calloc(nmemb, 1uLL);
    if ( !qword_61B430 )
    {
      qword_61B430 = (__int64)&unk_61B440;
      nmemb = 1024LL;
    }
  }
  while ( a2 )
  {
    v2 = nmemb;
    if ( a2 <= nmemb )
      v2 = a2;
    v5 = v2;
    if ( sub_40B6B6(a1, qword_61B430, v2) != v2 )
      return 0LL;
    a2 -= v5;
  }
  return 1LL;
}
