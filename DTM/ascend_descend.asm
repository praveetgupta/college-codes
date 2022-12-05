Ascending Order:

data segment
array db 09h, 08h, 07h, 06h, 05h
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       mov cl, 04h
 loop1:lea si, array
       mov ch, 04h
 loop2:mov al, [si]
       inc si
       cmp al, [si]
       jc down
       mov dl, [si]
       mov [si], al
       dec si
       mov [si], dl
       inc si
  down:dec ch
       jnz loop2
       dec cl
       jnz loop1
       mov ah, 4ch
       int 21h
       code ends
       end start


Descending Order:

data segment
array db 05h, 06h, 07h, 08h, 09h
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       mov cl, 04h
 loop1:lea si, array
       mov ch, 04h
 loop2:mov al, [si]
       inc si
       cmp al, [si]
       jnc down
       mov dl, [si]
       mov [si], al
       dec si
       mov [si], dl
       inc si
  down:dec ch
       jnz loop2
       dec cl
       jnz loop1
       mov ah, 4ch
       int 21h
       code ends
       end start


       