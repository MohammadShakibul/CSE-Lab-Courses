.model small
.stack 100h
.data

msg1 db "Enter the number: $"

msg3 db 10,13,"Digit tmi khub valo : $" 
msg4 db 10,13,"Digit tmi valo na:$"
.code  

main proc    
    
mov ax,@data
mov ds,ax
; printing msg1 :
mov ah,9 ;loading 9 to print
mov dx,offset msg1
int 21h ;interput for printing

;taking the first input:
mov ah,1 ;loading for input
int 21h ;interput to take input
mov bl,al ; moving the value of al to bl


; passing the value into accumulator 
mov al,bl   
mov bh,3  ;2 into any register
     
mov ah,0      ;clearing ah

div bh         ;al=al/bh

cmp ah,0       ;  comparing
je even_print
jne odd_print

even_print:  



mov al,bl   
mov bh,6  ;2 into any register
     
mov ah,0      ;clearing ah

div bh         ;al=al/bh

cmp ah,0       ;  comparing
je ev_print
jne od_print

ev_print:
            
mov ah,9
lea   dx,msg3
int 21h
jmp exit

od_print:
 mov ah,9
lea   dx,msg4
int 21h
jmp exit



jmp exit

odd_print:
 mov ah,9
lea   dx,msg4
int 21h
jmp exit


       exit:
       mov ah,4ch
       int 21h
       
       
main endp ;ending the procedure
end main   

