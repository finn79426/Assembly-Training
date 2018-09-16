/*
08048320 <main>:
 8048320:       push   edi
 8048321:       mov    eax,0x65
 8048326:       push   esi
 8048327:       mov    edi,0x8048500
 804832c:       sub    esp,0xc
 804832f:       mov    ecx,0x6
 8048334:       mov    DWORD PTR [esp+0x6],0x63696c41
 804833c:       lea    esi,[esp+0x6]
 8048340:       mov    WORD PTR [esp+0xa],ax
 8048345:       repz cmps BYTE PTR ds:[esi],BYTE PTR es:[edi]
 8048347:       jne    8048355 <main+0x35>
 8048349:       mov    DWORD PTR [esp],0x8048506
 8048350:       call   80482f0 <puts@plt>
 8048355:       add    esp,0xc
 8048358:       xor    eax,eax
 804835a:       pop    esi
 804835b:       pop    edi
 804835c:       ret  
 */

int strcmp_func(){ //inlined function

}

int main(){

}

