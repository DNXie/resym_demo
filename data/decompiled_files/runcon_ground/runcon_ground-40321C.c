#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40321C()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6071B0;
  for ( i = 1; i < dword_607190; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_607280 )
  {
    free(ptr[1]);
    qword_6071A0 = 256LL;
    off_6071A8 = &unk_607280;
  }
  if ( ptr != (void **)&qword_6071A0 )
  {
    free(ptr);
    off_6071B0 = &qword_6071A0;
  }
  dword_607190 = 1;
}
