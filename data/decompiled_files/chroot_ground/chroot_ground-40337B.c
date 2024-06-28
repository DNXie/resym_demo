#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40337B()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_607220;
  for ( i = 1; i < dword_607200; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_607300 )
  {
    free(ptr[1]);
    qword_607210 = 256LL;
    off_607218 = &unk_607300;
  }
  if ( ptr != (void **)&qword_607210 )
  {
    free(ptr);
    off_607220 = (__int64)&qword_607210;
  }
  dword_607200 = 1;
}
