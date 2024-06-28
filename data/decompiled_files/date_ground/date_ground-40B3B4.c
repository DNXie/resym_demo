#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40B3B4()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_611280;
  for ( i = 1; i < dword_611260; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_611360 )
  {
    free(ptr[1]);
    qword_611270 = 256LL;
    off_611278 = &unk_611360;
  }
  if ( ptr != (void **)&qword_611270 )
  {
    free(ptr);
    off_611280 = &qword_611270;
  }
  dword_611260 = 1;
}
