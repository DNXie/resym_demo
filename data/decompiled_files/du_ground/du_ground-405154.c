#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_405154(_QWORD **a1)
{
  _QWORD *i; // [rsp+10h] [rbp-10h]
  _QWORD *v2; // [rsp+18h] [rbp-8h]

  for ( i = *a1; i; i = v2 )
  {
    v2 = (_QWORD *)*i;
    sub_405107((__int64)i);
  }
  free(a1);
}
