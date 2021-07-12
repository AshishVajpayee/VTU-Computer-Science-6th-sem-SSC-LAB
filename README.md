
# Hello, folks! <img src="https://raw.githubusercontent.com/MartinHeinz/MartinHeinz/master/wave.gif" width="30px">
![visitors](https://visitor-badge.glitch.me/badge?page_id=AshishVajpayee)
<a href="https://twitter.com/AshishVajpayee6" ><img src="https://img.shields.io/twitter/follow/AshishVajpayee6.svg?style=social" /> </a>
# VTU 18CSL66 System Software Lab Programs 6th Sem

### Prerequisites

Install LEX & YACC packages on Linux[Ubuntu] <br>
Follow the below Terminal Commands 
* 1.
  ```sh
  sudo apt-get update
  ```
  
* 2.
  ```sh
  sudo apt-get install flex
  ```
  
* 3.
  ```sh
  sudo apt-get install bison
  ```
  
* 4.
  ```sh
  sudo apt-get install byacc
  ``` 
 
* 5.
  ```sh
  sudo apt-get install bison++
  ```

Cross platform source code.<br>

In windows you need gcc compiler or any IDE such as Visual Studio, etc..<br>

### To Compile Lex Program:
```sh
flex file_name.l
```
After the successful compilation of the lex program the lex.yy.c file is generated automatically<br>
* To Run Lex Program :
```sh
gcc lex.yy.c
```
After the successful Run of the lex program the a.exe file is generated automatically <br>
* To see the output of Lex program type
```sh
a.exe 
```

### To Compile Yacc program :
 ```sh
 bison –d filename.y
 ```
* After the successful compilation of the yacc program the 2 files is generated automatically namely
 ```sh
1 file_name.tab.c and
2 file name.tab.h
```
Rename that 2 files to y.tab.c and y.tab.h
* To Run Lex and Yacc Program :
 ```sh
  gcc lex.yy.c y.tab.c
  ```
After the successful Run of the lex and Yacc program the a.exe file is generated automatically

* To see the output of Lex and Yacc program type
 ```sh
  a.exe in the command prompt
  ```

## Tutorials
- ["Installation and Full Setup on YouTube"](https://www.youtube.com/channel/UCHwlUzuPlNstefBn8WnD6gw) - *Computer Science Geeks* <br>

<p align="center">
  Made with <g-emoji class="g-emoji" alias="heart" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/2764.png">
<img class="emoji" alt="heart" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2764.png"></g-emoji> by <a href="https://github.com/AshishVajpayee">Ashish Vajpayee</a>
</p>


