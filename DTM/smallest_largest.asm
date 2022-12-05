Smallest number in 8 bit array:

data segment
Array db 09h, 05h, 06h, 11h, 02h
smallno db ?
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       lea si, Array
       mov cl, 04h
       mov al, [si]
    up:inc si
       cmp al, [si]
       jc down
       mov al, [si]
  down:dec cl
       jnz up
       mov smallno, al
       mov ah, 4ch
       int 21h
       code ends
       end start


Largest number in 8 bit array:

data segment
Array db 07h, 03h, 05h, 10h, 02h
largeno db ?
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       lea si, Array
       mov cl, 04h
       mov al, [si]
    up:inc si
       cmp al, [si]
       jnc down
       mov al, [si]
  down:dec cl
       jnz up
       mov largeno, al
       mov ah, 4ch
       int 21h
       code ends
       end start