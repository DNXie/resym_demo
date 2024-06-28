#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_403EAE()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_609280;
  for ( i = 1; i < dword_609260; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6097C0 )
  {
    free(ptr[1]);
    qword_609270 = 256LL;
    off_609278 = &unk_6097C0;
  }
  if ( ptr != (void **)&qword_609270 )
  {
    free(ptr);
    off_609280 = &qword_609270;
  }
  dword_609260 = 1;
}
