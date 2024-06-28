#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40305D()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_607210;
  for ( i = 1; i < dword_6071F0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6072C0 )
  {
    free(ptr[1]);
    qword_607200 = 256LL;
    off_607208 = &unk_6072C0;
  }
  if ( ptr != (void **)&qword_607200 )
  {
    free(ptr);
    off_607210 = &qword_607200;
  }
  dword_6071F0 = 1;
}
