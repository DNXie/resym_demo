#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4061A7()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60B230;
  for ( i = 1; i < dword_60B210; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60B360 )
  {
    free(ptr[1]);
    qword_60B220 = 256LL;
    off_60B228 = &unk_60B360;
  }
  if ( ptr != (void **)&qword_60B220 )
  {
    free(ptr);
    off_60B230 = &qword_60B220;
  }
  dword_60B210 = 1;
}
