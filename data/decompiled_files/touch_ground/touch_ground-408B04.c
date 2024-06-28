#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_408B04()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_611300;
  for ( i = 1; i < dword_6112E0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_611420 )
  {
    free(ptr[1]);
    qword_6112F0 = 256LL;
    off_6112F8 = &unk_611420;
  }
  if ( ptr != (void **)&qword_6112F0 )
  {
    free(ptr);
    off_611300 = &qword_6112F0;
  }
  dword_6112E0 = 1;
}
