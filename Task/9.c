/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x8
 80483f3:       mov    DWORD PTR [ebp-0x4],0x1
 80483fa:       mov    eax,DWORD PTR [ebp-0x4]
 80483fd:       cmp    eax,0x2
 8048400:       je     8048412 <main+0x25>
 8048402:       cmp    eax,0x3
 8048405:       je     8048418 <main+0x2b>
 8048407:       cmp    eax,0x1
 804840a:       jne    804841e <main+0x31>
 804840c:       mov    BYTE PTR [ebp-0x5],0x41
 8048410:       jmp    8048423 <main+0x36>
 8048412:       mov    BYTE PTR [ebp-0x5],0x42
 8048416:       jmp    8048423 <main+0x36>
 8048418:       mov    BYTE PTR [ebp-0x5],0x43
 804841c:       jmp    8048423 <main+0x36>
 804841e:       mov    BYTE PTR [ebp-0x5],0x44
 8048422:       nop
 8048423:       mov    eax,0x0
 8048428:       leave
 8048429:       ret
 */

int main(){
}
