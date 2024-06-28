#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404BE4()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60F290;
  for ( i = 1; i < dword_60F270; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60F3A0 )
  {
    free(ptr[1]);
    qword_60F280 = 256LL;
    off_60F288 = &unk_60F3A0;
  }
  if ( ptr != (void **)&qword_60F280 )
  {
    free(ptr);
    off_60F290 = (__int64)&qword_60F280;
  }
  dword_60F270 = 1;
}
