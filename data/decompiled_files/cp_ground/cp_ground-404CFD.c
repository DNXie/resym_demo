#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404CFD(unsigned int a1, size_t a2)
{
  size_t v2; // rax
  size_t v5; // [rsp+18h] [rbp-8h]

  if ( !qword_61D4D0 )
  {
    qword_61D4D0 = (__int64)calloc(nmemb, 1uLL);
    if ( !qword_61D4D0 )
    {
      qword_61D4D0 = (__int64)&unk_61D4E0;
      nmemb = 1024LL;
    }
  }
  while ( a2 )
  {
    v2 = nmemb;
    if ( a2 <= nmemb )
      v2 = a2;
    v5 = v2;
    if ( sub_40BE7E(a1, qword_61D4D0, v2) != v2 )
      return 0LL;
    a2 -= v5;
  }
  return 1LL;
}
