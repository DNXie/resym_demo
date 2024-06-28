#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404572()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_609240;
  for ( i = 1; i < dword_609220; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_609360 )
  {
    free(ptr[1]);
    qword_609230 = 256LL;
    off_609238 = &unk_609360;
  }
  if ( ptr != (void **)&qword_609230 )
  {
    free(ptr);
    off_609240 = &qword_609230;
  }
  dword_609220 = 1;
}
