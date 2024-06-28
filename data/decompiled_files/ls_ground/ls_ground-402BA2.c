#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_402BA2(__int64 a1, __int64 a2)
{
  _QWORD *ptr; // [rsp+20h] [rbp-10h]
  __int64 v4; // [rsp+28h] [rbp-8h]

  ptr = (_QWORD *)sub_414989(16LL);
  *ptr = a2;
  ptr[1] = a1;
  v4 = sub_40D83F(qword_61D620, ptr);
  if ( !v4 )
    sub_414B0B();
  if ( (_QWORD *)v4 != ptr )
    free(ptr);
  return v4 != (_QWORD)ptr;
}
