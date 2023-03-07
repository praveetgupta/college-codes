data segment
array db -08h, 07h, -14h, 16h, 29h
pcount db ?
ncount db ?
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       lea si, array
       mov cl, 05h
    up:mov al, [si]
       ROL al, 01h
       jnc down
       inc ncount
       jmp here
  down:inc pcount
  here:inc si
       dec cl
       jnz up
       mov ah, 4ch
       int 21h
       code ends
       end start            