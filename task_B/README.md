For designing a UART packet parser , as suggested i used switch case logic for the C code.

Approach:
We are provided with a number of bytes and these bytes are individually being checked so i created a code in which the first byte is being checked and if it matches the 170 byte then the code starts to collect the package. It then sequence-wise checks for the ID , Speed_high , speed_low and finally of the checksum of the bytes that we get is equal to the expected value , the valid packet is printed aling with the motor and speed otherwise it breaks and starts again.

Learnings:
i learnt basic syntax of c and switch case logic, handling byte by byte data and understanding how to calculate the checksum.
