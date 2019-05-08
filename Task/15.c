/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x4
 80483f3:       mov    DWORD PTR [ebp-0x4],0x0
 80483fa:       jmp    8048408 <main+0x1b>
 80483fc:       cmp    DWORD PTR [ebp-0x4],0x64
 8048400:       jle    8048404 <main+0x17>
 8048402:       jmp    8048408 <main+0x1b>
 8048404:       add    DWORD PTR [ebp-0x4],0x1
 8048408:       cmp    DWORD PTR [ebp-0x4],0x63
 804840c:       jle    80483fc <main+0xf>
 804840e:       mov    eax,0x0
 8048413:       leave
 8048414:       ret
*/


int main(){
}
