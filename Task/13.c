/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0xc
 80483f3:       mov    DWORD PTR [ebp-0xc],0x0
 80483fa:       mov    DWORD PTR [ebp-0x4],0x0
 8048401:       jmp    8048424 <main+0x37>
 8048403:       mov    DWORD PTR [ebp-0x8],0x0
 804840a:       jmp    8048410 <main+0x23>
 804840c:       add    DWORD PTR [ebp-0x8],0x1
 8048410:       cmp    DWORD PTR [ebp-0x8],0x9
 8048414:       jle    804840c <main+0x1f>
 8048416:       mov    eax,DWORD PTR [ebp-0x4]
 8048419:       imul   eax,DWORD PTR [ebp-0x8]
 804841d:       mov    DWORD PTR [ebp-0xc],eax
 8048420:       add    DWORD PTR [ebp-0x4],0x1
 8048424:       cmp    DWORD PTR [ebp-0x4],0x9
 8048428:       jle    8048403 <main+0x16>
 804842a:       mov    eax,0x0
 804842f:       leave
 8048430:       ret
 */


int main(){
}
