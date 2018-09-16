/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x8
 80483f3:       mov    WORD PTR [ebp-0x8],0x1
 80483f9:       movzx  eax,WORD PTR [ebp-0x8]
 80483fd:       mov    DWORD PTR [ebp-0x4],eax
 8048400:       movzx  eax,WORD PTR [ebp-0x8]
 8048404:       mov    edx,0x0
 8048409:       div    WORD PTR [ebp-0x8]
 804840d:       mov    WORD PTR [ebp-0x6],ax
 8048411:       cmp    WORD PTR [ebp-0x8],0x64
 8048416:       jbe    804841f <main+0x32>
 8048418:       mov    eax,0x0
 804841d:       jmp    8048424 <main+0x37>
 804841f:       mov    eax,0x0
 8048424:       leave  
 8048425:       ret    

 */

int main(){

}
