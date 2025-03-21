# Lab Day 2: Fundamental of Algorithmic Problem Solving
<ol>
  <li><b>Aim of the program: </b> Write a program in C to convert the first ‘n’ decimal numbers of a disc file to binary using recursion. Store the binary value in a separate disc file.</li>
  
  Note: Read the value of ‘n’, source file name and destination file name from command line arguments. Display the decimal numbers and their equivalent binary numbers from the output file.

  Give the contents of the input disc file "inDec.dat" as 30 75 2564

  &nbsp; Contents of the output disc file "outBin.dat" as<br>
  &nbsp; The binary equivalent of 30 is 0000000000011110<br>
  &nbsp; The binary equivalent of 75 is 0000000001001011<br>

  ### Terminal Input
  ```sh
  $gcc lab2q1.c -o lab2q1
  $./lab2q1 150 inDec.dat outBin.dat
  ```
  
  <i>Output: </i>Content of the first ‘n’ decimal and their equivalent binary numbers

  <li><b>Aim of the program: </b> program:Write a program in C to find GCD of two numbers using recursion. Read all pair of numbers from a file and store the result in a separate file.</li>
  
  Note: Source file name and destination file name taken from command line arguments. The source file must contain at least 20 pairs of numbers.

  Give the contents of the input disc file "inGcd.dat" as 8 12 20 45 30 80

  &nbsp; Contents of the output disc file "outGcd.dat" as<br>
  &nbsp; The GCD of 8 and 12 is 4<br>
  &nbsp; The GCD of 20 and 45 is 5<br>
  &nbsp; The GCD of 30 and 80 is 10

  ### Terminal Input
  ```sh
  $gcc lab2q2.c -o lab2q2
  $./lab2q1 inGcd.dat outGcd.dat
  ```
  
  <i>Output: </i>Display the gcd stored in the output file outGcd.dat

</ol>
