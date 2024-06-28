#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404A6C()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60F280;
  for ( i = 1; i < dword_60F260; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60F380 )
  {
    free(ptr[1]);
    qword_60F270 = 256LL;
    off_60F278 = &unk_60F380;
  }
  if ( ptr != (void **)&qword_60F270 )
  {
    free(ptr);
    off_60F280 = &qword_60F270;
  }
  dword_60F260 = 1;
}
