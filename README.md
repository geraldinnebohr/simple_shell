# Simple Shell Project

<img src="images/holberton-logo.png" width="50" />

> Create a simple UNIX command interpreter in C programming language

## Description

The objective of this project is to create from scratch a simple UNIX command interpreter with limited functionality but applying the core concepts of a more robust shell. In simple words, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. It incorporates many features and generally executes other commands.

- How does a shell work.
- What is a PID and a ppid, and how to use them.
- How to manipulate the environment of the current process.
- What is the difference between a function and a system call.
- How to create processes.
- How does the shell use the `PATH` to find the programs.
- How to execute another program with the `execve` system call.
- How to suspend the execution of a process until one of its children terminates.

## Technologies & Tools 💻

| Category    | Technology/Tool                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| ----------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `Backend`   | [![C](https://img.shields.io/badge/-C_Programming_language-A8B9CC?&style=flat-square&logo=c&labelColor=282828)](https://developer.mozilla.org/en-US/docs/Web/HTML)                                                                                                                                                                                                                                                                                                                                                                                                      |
| `Editors`   | [![Vim](https://img.shields.io/badge/-Vim-019733?logo=vim&style=flat-square&logoColor=019733&labelColor=282828)](https://www.vim.org/) [![GNU Emacs](https://img.shields.io/badge/-GNU_Emacs-7F5AB6?logo=vim&style=flat-square&logoColor=7F5AB6&labelColor=282828)](https://www.gnu.org/software/emacs/)                                                                                                                                                                                                                                                                |
| `Utilities` | [![Ubuntu](https://img.shields.io/badge/-Ubuntu-E95420?logo=ubuntu&style=flat-square&labelColor=282828)](https://ubuntu.com/download) [![Git](https://img.shields.io/badge/-Git-F05032?logo=git&style=flat-square&labelColor=282828)](https://git-scm.com/) [![GNU_Bash](https://img.shields.io/badge/-GNU_Bash-4EAA25?logo=GNU-Bash&style=flat-square&labelColor=282828)](https://www.gnu.org/software/bash/) [![Vagrant](https://img.shields.io/badge/-Vagrant-1563FF?logo=vagrant&style=flat-square&logoColor=1563FF&labelColor=282828)](https://www.vagrantup.com/) |

---

## Requirements

Installed gcc (GNU Compiler Collection) version 4.8.4 or newer.

---

## Example

### Clone repo using HTTPS

```
$ git clone https://github.com/geraldinnebohr/simple_shell.git
```

### Compilation

You can compile the files using this command to check that there are no errors:

```
$ gcc -Wall -pedantic -Werror Wextra *.c -o hsh
```

### Usage

Enter the interactive mode after compilation:

```bash
$ ./hsh
 simple@shell $ /bin/ls
 README.md exec.c holberton.h main.c prompt.c
 simple@shell $
 simple@shell $ exit
$
```

---

## Contribution

Create a new branch with the name of your feature or fix and make a pull request to develop branch explaining your work.

---

## Authors

- **Geraldinne Bohórquez** - [geraldinnebohr](https://github.com/geraldinnebohr)
- **Diego Monroy** (@diegozencode) - [<img src="https://img.shields.io/badge/-@diegozencode-000000?style=flat&logo=X&logoColor=white" alt="Twitter - @diegozencode" />](https://twitter.com/diegozencode) |
  [<img src="https://img.shields.io/badge/-@diegozencode-0072b1?style=flat&logo=Linkedin&logoColor=white" alt="LinkedIn - Diego Felipe Monroy" />](https://www.linkedin.com/in/diegozencode/) |
  [<img src="https://img.shields.io/badge/-diegozencode.com-4EAA25?style=flat&logo=Paperswithcode&logoColor=white" alt="Personal Website - diegozencode.com"/>](https://diegozencode.com/)
