#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404AC4()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60F270;
  for ( i = 1; i < dword_60F250; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60F420 )
  {
    free(ptr[1]);
    qword_60F260 = 256LL;
    off_60F268 = &unk_60F420;
  }
  if ( ptr != (void **)&qword_60F260 )
  {
    free(ptr);
    off_60F270 = &qword_60F260;
  }
  dword_60F250 = 1;
}
