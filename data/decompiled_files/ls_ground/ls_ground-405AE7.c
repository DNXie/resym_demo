#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_405AE7()
{
  __int64 result; // rax
  unsigned __int64 i; // [rsp+0h] [rbp-10h]
  void **v2; // [rsp+8h] [rbp-8h]

  for ( i = 0LL; ; ++i )
  {
    result = qword_61D638;
    if ( i >= qword_61D638 )
      break;
    v2 = (void **)*((_QWORD *)qword_61D640 + i);
    free(*v2);
    free(v2[1]);
    if ( v2[21] != &unk_61D380 )
      sub_40251D();
  }
  qword_61D638 = 0LL;
  byte_61D671 = 0;
  dword_61D674 = 0;
  dword_61D678 = 0;
  dword_61D67C = 0;
  dword_61D684 = 0;
  dword_61D688 = 0;
  dword_61D68C = 0;
  dword_61D680 = 0;
  dword_61D690 = 0;
  dword_61D694 = 0;
  dword_61D698 = 0;
  return result;
}
