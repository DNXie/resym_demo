#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4037B2()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_607230;
  for ( i = 1; i < dword_607210; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_607300 )
  {
    free(ptr[1]);
    qword_607220 = 256LL;
    off_607228 = &unk_607300;
  }
  if ( ptr != (void **)&qword_607220 )
  {
    free(ptr);
    off_607230 = &qword_607220;
  }
  dword_607210 = 1;
}
