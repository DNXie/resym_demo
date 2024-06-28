#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_403ECC()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60C280;
  for ( i = 1; i < dword_60C260; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60C360 )
  {
    free(ptr[1]);
    qword_60C270 = 256LL;
    off_60C278 = &unk_60C360;
  }
  if ( ptr != (void **)&qword_60C270 )
  {
    free(ptr);
    off_60C280 = &qword_60C270;
  }
  dword_60C260 = 1;
}
