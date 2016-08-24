# BoShell
This is the project I always want to do.This project is a shell to explicate the command that users input.This project mainly uses lex and yacc.

# First of all

At first, I will start the shell demo in a simple mode.And then, I will realize it using lex and yacc.

# what is the shell?

Shell is a command interpreter. It can interpret the command the user input. And then it will run the command and output the result the command runs.

# Environment

| env        | tools           | note  |
| ------------- |:-------------:| -----:|
| ubuntu14.04      | C(language) | ... |

# In the first version

In the first version, We will realize the run of simple command.

The simple command is divided to two types. On is innner command, the other is outer command.

 - for inner command:
 We need to realize it by shell.The inner command includes  
   - exit : exit the shell
   - cd : change the work directory to another place
   - echo : display the String user wants
   - export : export the Environment variable
   - history : display the history command
 - for outer command:
 We need to find the place of the command and start a process to run the command.

 In the first version, the pipe and other difficult combination is not considered.

 ok, Let's start our the trip of programming.
