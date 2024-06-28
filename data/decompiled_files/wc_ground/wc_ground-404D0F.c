#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404D0F()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_609260;
  for ( i = 1; i < dword_609240; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_609380 )
  {
    free(ptr[1]);
    qword_609250 = 256LL;
    off_609258 = &unk_609380;
  }
  if ( ptr != (void **)&qword_609250 )
  {
    free(ptr);
    off_609260 = &qword_609250;
  }
  dword_609240 = 1;
}
