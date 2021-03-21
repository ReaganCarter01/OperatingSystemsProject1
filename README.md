# OperatingSystemsProject1
Author: Reagan Carter
Date: 2-22-2021
Subject: Operating Systems
Server: Texas State Zeus



******USING TEXAS STATE ZEUS LINUX SERVER*****

Accessed through SSH in a terminal or SSH client application(PuTTY):
- zeus.cs.txstate.edu -- RHEL 7



1A.Program: pre.c

Description: Reads a list of U.S. states and their population and outputs the list if the population is over 10 million. The inputs end when an EOF(generated by Ctrl-D) is encountered.

How to run: 
1) Using the Terminal type in the following command gcc -std=gnu99 -o pre pre.c    (note: make sure you are in the right directory you can do this by using cd      %PATHNAME% where %PATHNAME% is the path where the file is located)
2) Next type ./pre in the terminal
3) Next type in state abbreviation with population (ex: TX 26)
4) Press Ctrl-D to print results



1B.Program: sort.c

Description: Reads a list of U.S. abbreviations from stdin and will display it in alphabetical order.Sequence is read until an EOF is encountered.

How to run: 
1) Using the Terminal type in the following command gcc -std=gnu99 -o sort sort.c    
2) Next type ./sort in the terminal
3) Next type in state abbreviation (ex: TX)
4) Press Ctrl-D to print results




2.Program: parenttochild.c

Description: The parent performs a "./pre" process and is connected to the Parent-To-Child pipe the child will 'exec' a './sort' process
  
How to run: 
1) Using the Terminal type in the following command gcc -std=gnu99 -o parent parenttochild.c    
2) Next type ./parent in the terminal
3) Next type in state abbreviation with Population (ex: TX 26)
4) Press Ctrl-D to print results



3.Program: Program3.c

Description: Takes in an Unix command from the command line and fork() a child to execute it. The process id of the parent and the child is printed.

How to run: 
1) Using the Terminal type in the following command gcc -std=gnu99 -o prog Program3.c    
2) Next type ./prog ls (or preferred command)
3) Terminal will display the command as well parent and child id.

    
