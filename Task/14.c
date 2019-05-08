/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x4
 80483f3:       mov    DWORD PTR [ebp-0x4],0xa
 80483fa:       cmp    DWORD PTR [ebp-0x4],0x1
 80483fe:       jne    8048402 <main+0x15>
 8048400:       jmp    8048417 <main+0x2a>
 8048402:       cmp    DWORD PTR [ebp-0x4],0x2
 8048406:       jne    8048417 <main+0x2a>
 8048408:       nop
 8048409:       mov    DWORD PTR [ebp-0x4],0x0
 8048410:       mov    eax,0x0
 8048415:       jmp    804841c <main+0x2f>
 8048417:       mov    eax,0x1
 804841c:       leave
 804841d:       ret
 */

int main(){
}
