#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_405930()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60B2A0;
  for ( i = 1; i < dword_60B280; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60B4C0 )
  {
    free(ptr[1]);
    qword_60B290 = 256LL;
    off_60B298 = &unk_60B4C0;
  }
  if ( ptr != (void **)&qword_60B290 )
  {
    free(ptr);
    off_60B2A0 = &qword_60B290;
  }
  dword_60B280 = 1;
}
