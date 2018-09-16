/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x8
 80483f3:       mov    WORD PTR [ebp-0x8],0x1
 80483f9:       movsx  eax,WORD PTR [ebp-0x8]
 80483fd:       mov    DWORD PTR [ebp-0x4],eax
 8048400:       movsx  eax,WORD PTR [ebp-0x8]
 8048404:       movsx  ecx,WORD PTR [ebp-0x8]
 8048408:       cdq    
 8048409:       idiv   ecx
 804840b:       mov    WORD PTR [ebp-0x6],ax
 804840f:       cmp    WORD PTR [ebp-0x8],0x64
 8048414:       jle    804841d <main+0x30>
 8048416:       mov    eax,0x0
 804841b:       jmp    8048422 <main+0x35>
 804841d:       mov    eax,0x0
 8048422:       leave  
 8048423:       ret 
 */

int main(){

}
