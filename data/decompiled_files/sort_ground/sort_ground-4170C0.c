#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall init(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  signed __int64 v5; // rbp

  v4 = 0LL;
  v5 = &off_61CE08 - off_61CE00;
  init_proc();
  if ( v5 )
  {
    do
      ((void (__fastcall *)(_QWORD, __int64, __int64))off_61CE00[v4++])(a1, a2, a3);
    while ( v4 != v5 );
  }
}
