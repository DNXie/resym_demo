#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_403E0C()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_609200;
  for ( i = 1; i < dword_6091E0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_609320 )
  {
    free(ptr[1]);
    qword_6091F0 = 256LL;
    off_6091F8 = &unk_609320;
  }
  if ( ptr != (void **)&qword_6091F0 )
  {
    free(ptr);
    off_609200 = &qword_6091F0;
  }
  dword_6091E0 = 1;
}
