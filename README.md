## **FTT_PRINTF**

<p align="center" width="100%">
    <img width="33%" src="https://github.com/Arcane-Jill/images/blob/main/ft_printf.png">
</p>

Writing my own printf was the second project I completed at **Hive** Helsinki, which is a school in the 42 network. It was a very challenging project for me, but lso very interesting. This is where we were introduced to variadic functions. 

I made a lot of use of the functions I had previously created in libft. This project really brought into strk relief the value of doing things very well the first time, so that I ouldn't have to deaal with sloppy code later. From the subject **The key to a successful ft_printf is well-structured and extensible code.**

*Go slow to go fast*

### **Description**

Anyone who codes in C is probably quite familiar with printf so I won't go into too much detail about the original function. In the mandatory part, we did not have to implement all the functionality of printf, just the following basic conversions:

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
