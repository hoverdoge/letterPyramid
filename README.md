# letterPyramid
This program creates a letter pyramid by taking a string from the user and transforming the letters inside using nested for loops.

Example:
If the user enters 'ABCDEFG', the following is displayed:
```
      A                                                                                                                
     ABA                                                                                                               
    ABCBA                                                                                                              
   ABCDCBA                                                                                                             
  ABCDEDCBA                                                                                                            
 ABCDEFEDCBA                                                                                                           
ABCDEFGFEDCBA
```

My strategy for solving this problem was to 
1) loop through the string
2) depending on which layer the computer was writing, it would print the amount of letters in the string as are in the current layer
3) go back in the string one, print that letter, and keep decrementing until the first letter was printed
4) continue until all strings were printed

For the spaces, I added the string's length - 1 to the first layer, then decrementing until 0 for the bottom layer.
